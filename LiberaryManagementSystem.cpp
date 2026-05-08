#include<iostream>
#include<string.h>
#include<stdlib.h>


using namespace std;

class Library{
    public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;

};

int main(){
    Library lib[20];
    int input = 0;
    int count = 0;
    
    while(input!=3){
        cout << "Enter 1 to input details like id, name, author, student, price, pages" << endl;
        cout << "Enter 2 to display details" << endl;
        cout << "Enter 3 to quit" << endl;
        cin >> input;

        switch(input){
            case 1:
            start:
                cout << "Enter Book Id \n";
                cin >> lib[count].id;
                cin.ignore();
                cout << "Enter Book Name \n";
                //cin >> lib[count].name;
                 cin.getline(lib[count].name , 100);
                cout << "Enter Author Name \n";
                //cin >> lib[count].author;
                cin.getline(lib[count].author , 100);
                cout << "Enter Student Name \n";
                //cin >> lib[count].student;
                cin.getline(lib[count].student, 100 );
                cout << "Enter Book Price \n";
                cin >> lib[count].price;
                
                cout << "Enter Book Pages \n";
                cin >> lib[count].pages;

                count++;
                break;
                
            case 2:
                for(int i=0 ; i<count ; i++){
                    cout << endl;
                    cout << "Book Id: " << lib[i].id << endl;
                    cout << "Book Name: " << lib[i].name << endl;
                    cout << "Auther Name: " << lib[i]. author << endl;
                    cout << "Student Name: " << lib[i].student << endl;
                    cout << "Book Price: " << lib[i].price << endl;
                    cout << "Book Pages: " << lib[i].pages << endl << endl;

                }   
                break;
            case 3:
                exit(0);
                break;
                
            default:
                 cout << "Invalid value" << endl;
                 goto  start;  
        }   

    }
}