// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
   
    //  int a=12;
//  int b []={1,2,3,4};
//  cout<<b[0];
//  cout<<b[1];
//  cout<<b[2];
//  cout<<b[3];
////////////////////////////
// system("cls");
//     int a = 12;
//     int b []={1,2,3,4};
//     for(int i=0;i<sizeof(b)/sizeof(b[0]);i++){
//         cout<<"Value :"<<b[i]<<endl;
//     }
/////////////////////////////////////
// system("cls");
// string name []={"sok","koko","momo","lala"};
// for(string i : name){
//     cout<<i<<endl;
// }
/////////////////////////////
//  system ("cls");
//  int size;
//  cout<<"[+]Insert number of names :";cin>>size;
//  string names [size];
//  cin.clear ();
//  for (int i =0 ;i<size;i++){
//     cout<<"[+]Insert name ["<<i<<"]:";
//     cin.ignore();
//     getline(cin,names[i]);
//  }
//  cout<<"These are all inserted names : \n";
//  for(string name :names){
//     cout<<name<<endl;
//  }
/////////////////////////////
// string names []={"jonh","chill guy"};
// cout<<"jonh now old version :\n";
// cout<<names[0]<<endl;
// names[0]="jonh a chill guy ";
// cout<<"jonh new name version :\n";
// cout<<names [0]<<endl;
//////////////////////////////////


    /** 
     * Create a system to insert students' name
     * This system contains 4 options
     * 1. List all students' name
     * 2. Add new student's name
     * 3. Update student's name by inserting the old name
     * 4. Exit
    */
#include <iostream>
#include <string>
using namespace std;

int main(){
    system("cls");
    int size;
    cout<<"Enter number of student's name to set up system: ";cin>>size;
    string studentName[size];
    while(true){
        
        cout<<"******************* Student management system *************"<<endl;
        cout<<"1. List all student's name "<<endl;
        cout<<"2. Add new student's name \n";
        cout<<"3. Update student's name by instering the old name\n";
        cout<<"4. Exit.\n";
        cout<<"***********************************************************"<<endl;
        int opt;
        cout<<"Enter Option: ";cin>>opt;
        switch(opt){
            case 1:
                system("cls");
                cout<<"1. List all students option: \n";
                for(string n: studentName){
                    if(n.length()== 0){
                        cout<<"[!] No student name. \n";
                    }
                    for(string name: studentName){
                        cout<<"Student: "<<name<<endl;
                    }
                }
                break;
            case 2:
                system("cls");
                cout<<"Enter student name option: \n";
                int index;
                cout<<"Enter student's name index: ";cin>>index;
                if(studentName[index] != ""){
                    cout<<"This is index already existed \n";
                } else{
                    string sn;
                    cout<<"Enter student's name: ";
                    cin.ignore();
                    getline(cin, sn);
                    studentName[index] = sn;
                    cout<<"Student name " + sn << "has been inserted succesfully.\n";
                }
                break;
            case 3:
                system("cls");
                cout<<" Update student's name by old name option: \n";
                string oldName, newName;
                cout<<"Insert student's old name: ";
                cin.ignore();
                getline(cin, oldName);
                for(int i = 0; i < size; i++){
                    if(studentName[i] == oldName){
                        cout<<"Insert new for ("<<oldName<<") : ";
                        getline(cin, newName);
                        studentName[i] = newName;
                        cout<<"Student name updated successfully.\n";
                    } else{
                        cout<<"old name does not exist!!\n";
                    }
                }
                break;
            case 4:
                cout<<"Exit.\n";
                return 0;
    
            default:
                cout<<"[!] Invalid option\n";
                      
        }

    }
    return 0;
}
