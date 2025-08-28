#include <bits/stdc++.h>
using namespace std;

class chai{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    chai(string teaName, int servings, vector<string> ingredients){
        this->teaName = teaName;
        this->servings = servings;
        this->ingredients = ingredients;
    }

    void dsplayChaiDetails(){
        cout<<"Tea Name: "<<teaName<<endl;
        cout<<"Servings: "<<servings<<endl;
        cout<<"Ingredients: ";
        for(string c: ingredients){
            cout<<c<<" ";
        }
        cout<<endl;
    }


};

int main(){

    chai lemonChai("lemon Tea", 5, {"lemon", "water", "honey"});

    lemonChai.dsplayChaiDetails();
    
}
