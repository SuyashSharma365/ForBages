#include<iostream>
#include<string>
using namespace std;

class car{
    public:
    string paint;
    string model;
    int price;
    car(string paint , string model , int price){
        paint = paint;
        model = model;
        price = price;
    }

    void drive(){
        cout<<"this %s is moving ",model<<endl;
    }

};

int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    for(int i = 0 ; i<s.size()/2;i++){
        swap(s[i] , s[s.size()-i - 1]);
    }
    cout<<s<<endl;
    return 0;
}