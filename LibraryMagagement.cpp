//LibraryMagagement
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library{
    public:
    int Book_Id;
    char  Book_Name[100];
    char Author_Name[100];
    char Student_Name[100];
    int Book_Price;
    int No_Of_Pages;

};

int main(){
    Library lib[20];
    int input=0;
    int count=0;

    while(input!=3){
        cout<<"Enter 1 to Input Details like [id, name, author, student, price, pages]"<<endl;
        cout<<"Enter 2 to Display Details.."<<endl;
        cout<<"Enter 3 to Quit"<<endl;
        cin>>input;

        switch(input){
            case 1:
                start:
                cout<<"Enter Book Id"<<endl;
                cin>>lib[count].Book_Id;
                cout<<"Enter Book Name"<<endl;
                
                cin.getline(lib[count].Book_Name,100,'#');
                cout<<"Enter Book Author"<<endl;
                
                cin.getline(lib[count].Author_Name,100,'#');
                cout<<"Enter Student Name"<<endl;
                
                cin.getline(lib[count].Student_Name,100,'#');
                cout<<"Enter Book Pice"<<endl;
                cin>>lib[count].Book_Price;
                cout<<"Enter Book Pages"<<endl;
                cin>>lib[count].No_Of_Pages;
                count++;
                break;
            case 2:
                for(int i=0;i<count;i++){
                    cout<<"Book Id : "<<lib[i].Book_Id<<endl;
                    cout<<"Book Name : "<<lib[i].Book_Name;
                    cout<<"Book Author : "<<lib[i].Author_Name;
                    cout<<"Book Student : "<<lib[i].Student_Name;
                    cout<<"Book Price : "<<lib[i].Book_Price<<endl;
                    cout<<"Book Pages : "<<lib[i].No_Of_Pages<<endl;
                }
                break;

            case 3:
                exit(0);
                break;

            default:
                cout<<"You have entered wrong value, please type again"<<endl;
                goto start;

        }
    }

}




