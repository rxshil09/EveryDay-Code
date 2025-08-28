#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

void printLL(Node*head){
    
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl;
}

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i<arr.size(); i++){
        Node*temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int lengthOfLL(Node* head){
    int cnt = 0;

    Node *temp = head;
    while(temp != nullptr){
        cnt++;
        temp = temp->next;
    }
    return cnt;
} 

string checkIfPresent(Node*head, int val){
    
    Node *temp = head;
    bool flag = false;

    while(temp != nullptr){
        if(temp->data == val) flag = true;
        temp = temp->next;
    }

    if(flag) return "Element is present";
    else return "Element is not present";
}

Node* removeHead(Node*head){

    if(head == NULL) return head;

    Node*temp = head;
    head = head->next;

    delete temp;
    return head;
}

Node* removeTail(Node*head){
    if(head == NULL || head->next == NULL) return NULL;

    Node*temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}

Node* delete_Kth_node(Node*head, int k){

    if(head == NULL) return head;
    
    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int cnt = 0;
    Node*temp = head;
    Node* prev = NULL;

    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* delete_given_node(Node* head, int element){

    if(head == NULL) return head;
    
    if(head->data == element){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node*temp = head;
    Node* prev = NULL;

    while(temp != NULL){
        if(temp->data == element){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;

}

Node* insert_new_head(Node*head, int new_head){

    Node* temp = new Node(new_head, head);
    return temp;

    // return new Node(new_head, head);
}

Node* insert_at_last(Node*head, int element){
    
    if(head == NULL) return new Node(element);

    Node*temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    Node* ele = new Node(element, NULL);
    temp->next = ele;

    return head;
}

Node* insert_at_kth_position(Node*head, int k, int element){

    if(head == NULL){
        if(k == 1) return new Node(element);
        else return head;
    }

    if(k == 1) return new Node(element, head);

    int cnt = 0;
    Node *temp = head;

    while(temp != NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* newEle = new Node(element, temp->next);
            temp->next = newEle;
            break;
        }
        temp = temp->next;
    }

    return head;
}

Node *insert_before_x(Node *head, int element, int x){
    
    if(head == NULL) return NULL; 
    if(head->data == x) return new Node(element, head);

    Node *temp = head;
    bool found = false;

    while(temp->next != NULL){
        if(temp->next->data == x){
            Node* newEle = new Node(element, temp->next);
            temp->next = newEle;
            break;
            found = 1;
        }
        temp = temp->next;
    }

    if(!found){
        // return error;
    } 
    return head;
}

Node* reverse_LL_iterative_stack(Node* head){

    stack<int> st;
    Node* temp = head;

    while(temp != nullptr){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while(temp != nullptr){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}

Node* reverse_LL_iterative_swapping(Node* head){
    Node* temp = head;
    Node* back = nullptr;

    while(temp != nullptr){
        Node* front = temp->next;
        temp->next = back;
        back = temp;
        temp = front;
    }

    return back;
}

Node* reverse_LL_recirsive(Node* head){

    if(head == nullptr || head->next == nullptr) return head;

    Node* newHead = reverse_LL_recirsive(head->next);

    Node* front = head->next;
    front->next = head;
    head->next = nullptr;

    return newHead;
}

int main(){

    vector<int> arr = {10, 5, 7, 8, 134};

    // converting a array into a linked list
    Node *head = convertArr2LL(arr); 
    // cout<<head->data<<" The head of LL"<<endl;

    // length of LL
    // int result = lengthOfLL(head);
    // cout<<"Length of Linked list " << result<<endl;

    // Check if a element is present in a linked list
    // cout<<checkIfPresent(head, 15);

    // deleting the head of LL
    // head = removeHead(head);
    // printLL(head);

    // deleting the tail of LL
    // head = removeTail(head);
    // printLL(head);

    // deleting a given position
    // head = delete_Kth_node(head, 4);
    // printLL(head);

    // deleting a given node
    // head = delete_given_node(head, 9);
    // printLL(head);

    // Inserting a new head
    // head = insert_new_head(head, 2); // head = new Node(2, head);
    // printLL(head);

    // Inserting at the last
    // head = insert_at_last(head, 20);
    // printLL(head);

    // Inserting at kth position
    // head = insert_at_kth_position(head, 2, 100);
    // printLL(head);

    // Inserting before elemen 'x' in LL
    // head = insert_before_x(head, 1000, 7); // 'x' is present in the LinkedList
    // printLL(head);

    // reversing a LL using stack(iterative)
    // head = reverse_LL_iterative_stack(head);
    // printLL(head);

    // reversing a LL using swapping (iterative)
    // head = reverse_LL_iterative_swapping(head);
    // printLL(head);

    // reverse a LL (recursive)
    head = reverse_LL_recirsive(head);
    printLL(head);
}