#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

public:
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *convert_arr_2__DLL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void printDLL(Node *head){

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *delete_head(Node *head){
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    Node *back = head;
    head = head->next;

    head->prev = nullptr;
    back->next = nullptr;

    delete back;
    return head;
}

Node *delete_tail(Node *head){
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    Node *newTail = temp->prev;
    newTail->next = nullptr;
    temp->prev = nullptr;

    free(temp);
    return head;
}

Node *delete_kth_index(Node *head, int index){

    if (head == nullptr)
        return nullptr;

    Node *temp = head;
    int cnt = 0;

    while (temp != nullptr)
    {
        cnt++;
        if (cnt == index)
            break;
        temp = temp->next;
    }

    Node *back = temp->prev;
    Node *front = temp->next;

    if (back == nullptr && front == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (back == nullptr)
    { // element is head
        // return delete_head(head);
        head = head->next;
        head->prev = nullptr;
        temp->next == nullptr;

        delete temp;
        return head;
    }
    else if (front == nullptr)
    { // element is tail
        // return delete_tail(head);
        Node *newTail = temp->prev;
        newTail->next = nullptr;
        temp->prev = nullptr;

        free(temp);
        return head;
    }
    else
    { // element is in between the DLL
        back->next = temp->next;
        front->prev = temp->prev;

        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return head;
    }
}

Node *delete_given_node_with_head_given(Node *head, int ele){

    Node *element = new Node(ele);
    Node *temp = head;

    if (head == nullptr)
        return nullptr;

    while (temp != nullptr)
    {
        if (temp->data == element->data)
            break;
        temp = temp->next;
    }

    Node *back = temp->prev;
    Node *front = temp->next;

    if (back == nullptr && front == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (back == nullptr)
    {
        head = head->next;
        head->prev = nullptr;
        temp->next == nullptr;

        delete temp;
        return head;
    }
    else if (front == nullptr)
    { // element is tail
        // return delete_tail(head);
        Node *newTail = temp->prev;
        newTail->next = nullptr;
        temp->prev = nullptr;

        free(temp);
        return head;
    }
    else
    { // element is in between the DLL
        back->next = temp->next;
        front->prev = temp->prev;

        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return head;
    }
}

void delete_node(Node *temp){
    Node *back = temp->prev;
    Node *front = temp->next;

    if (front == nullptr)
    {
        back->next = nullptr;
        temp->prev = nullptr;

        free(temp);
        return;
    }

    back->next = front;
    front->prev = back;

    temp->next = nullptr;
    temp->prev = nullptr;

    free(temp);
}

Node *insert_node_before_head(Node *head, int new_head){

    Node *newHead = new Node(new_head, head, nullptr);
    head->prev = newHead;
    return newHead;
}

Node *insert_node_after_head(Node *head, int element){

    Node *newNode = new Node(element, head->next, head);
    head->next = newNode;
    return head;
}

Node *insert_node_before_tail(Node *head, int element){

    if (head->next == nullptr)
        return insert_node_before_head(head, element);

    Node *temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    Node *back = temp->prev;
    Node *n_ele = new Node(element, temp, back);
    back->next = n_ele;
    temp->prev = n_ele;

    free(temp);
    free(back);
    return head;
}

Node *insert_node_after_tail(Node *head, int new_tail){
    Node *newTail = new Node(new_tail);
    Node *temp = head;

    while (temp->next != nullptr)
        temp = temp->next;

    newTail->next = nullptr;
    newTail->prev = temp;
    temp->next = newTail;

    free(temp);
    return head;
}

Node *insert_node_before_kth_index(Node *head, int index, int element){
    Node *temp = head;
    int cnt = 0;

    while (temp != nullptr){
        cnt++;
        if (cnt == index) break;
        temp = temp->next;
    }

    Node *back = temp->prev;
    Node *front = temp->next;

    if (back == nullptr && front == nullptr || back == nullptr){
        return insert_node_before_head(head, element);
    }
    else if (front == nullptr){
        return insert_node_before_tail(head, element);
    }
    else{
        Node *n_ele = new Node(element, temp, back);
        back->next = n_ele;
        temp->prev = n_ele;

        delete temp, back, front;
        return head;
    }
}

Node *insert_node_before_given_node(Node *head, int node, int element){
    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->data == node)
            break;
        temp = temp->next;
    }
    Node *back = temp->prev;
    Node *front = temp->next;

    if (back == nullptr && front == nullptr || back == nullptr)
    {
        return insert_node_before_head(head, element);
    }
    else if (front == nullptr)
    {
        return insert_node_before_tail(head, element);
    }
    else
    {
        Node *n_ele = new Node(element, temp, back);
        back->next = n_ele;
        temp->prev = n_ele;

        delete temp, back, front;
        return head;
    }
}

Node *reverse_DLL(Node*head){
    
    // using brute force solution. TC = O(2N), SC = O(N). this is a 2 pass solution

    // stack<int> st;
    // Node*temp = head;
    // while(temp != nullptr){
    //     st.push(temp->data);
    //     temp = temp->next;
    // }
    // temp = head;
    // while(temp != nullptr){
    //     temp->data = st.top();
    //     st.pop();
    //     temp = temp->next;
    // }
    // return head;

    // using swapping. TC = O(N), SC = O(1)

    if(head == nullptr || head->next == nullptr) return head;

    Node* back = nullptr;
    Node * current = head;

    while(current != nullptr){
        back = current->prev;
        current->prev = current->next;
        current->next = back;

        current = current->prev;
    }
    return back->prev;
}

int main(){
    
    vector<int> arr = {12, 5, 8, 7, 9};

    // convert array to doubly linked list
    Node *head = convert_arr_2__DLL(arr);
    // printDLL(head);

    // delete head of doubly linked list
    // head = delete_head(head);
    // printDLL(head);

    // delete the tail of the linked list
    // head = delete_tail(head);
    // printDLL(head);

    // delete the element at the given index
    // head = delete_kth_index(head, 2);
    // printDLL(head);

    // delete the given node in the DLL (Given Node can not be head)
    // head = delete_given_node_wth_head_given(head, 9);
    // printDLL(head);

    // delete the node from the givene DLL
    // delete_node(head->next);
    // printDLL(head);

    // insert new node before head
    // head = insert_node_before_head(head, 1000);
    // printDLL(head);

    // insert new node after head
    // head = insert_node_after_head(head, 100);
    // printDLL(head);

    // insert new node beforer tail
    // head = insert_node_before_tail(head, 20);
    // printDLL(head);

    // insert new node after tail
    // head = insert_node_after_tail(head, 2000);
    // printDLL(head);

    // insert node before kth position
    // head = insert_node_before_kth_index(head, 5, 1000);
    // printDLL(head);

    // insert node before the given node
    // head = insert_node_before_given_node(head, 5, 1000);
    // printDLL(head);

    // revverse a DLL and returns its new head  
    Node* rev_head = reverse_DLL(head);
    printDLL(rev_head);

}