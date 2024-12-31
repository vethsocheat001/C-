// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     // datatype variableName = value;
//     string name = "koko"; 
        
    
// cout<<"=====================\n";


//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
    /** 
     * Create a system to insert students' name
     * This system contains 4 options
     * 1. List all students' name
     * 2. Add new student's name
     * 3. Update student's name by inserting the old name
     * 4. Exit
    */
//    int size;
//    cout<<"[+] Insert number of students' name to set up system: ";cin>>size;
//    string studentName[size];
//    while (true){
//         cout<<"======== Student management System ==========\n";
//         cout<<"1. List students"<<endl;
//         cout<<"2. Add new student\n";
//         cout<<"3. Update student's name by old name\n";
//         cout<<"4. Exit\n";
//         cout<<"=============================================\n";
//         int opt;
//          cout<<"[+] Insert option: ";cin>>opt;
//          switch (opt){
//              case 1:
//                  system("cls");
//                  cout<<"+ List all students option:\n";
//                  for(string n: studentName){
//                      if(n.length()==0){
//                          cout<<"[!] No student name.\n";
//                      }
//                  }
//                  for(string name: studentName){
//                      cout<<"Student: "<<name<<endl;
//                  }
//                  break;
//              case 2:
//                  system("cls");
//                  cout<<"+ Insert student name option: \n";
//                  int index;
//                  cout<<"[+] Insert student's name index: ";cin>>index;
//                  if(studentName[index]!=""){
//                      cout<<"This is index already existed\n";
//                  }else{
//                      string sn;
//                      cout<<"[+] Insert student's name: ";
//                      cin.ignore();
//                      getline(cin, sn);
//                      studentName[index] = sn;
//                      cout<<"[+] Student name " + sn <<" has been inserted succesfully.\n";
//                  }
//                  break;
//              case 3:
//                  system("cls");
//                  cout<<" Update student's name by old name option: \n";
//                  string oldName, newName;
//                  cout<<"Insert student's old name: ";
//                  cin.ignore();
//                  getline(cin, oldName);
//                  for(int i = 0; i < size; i++){
//                      if(studentName[i] == oldName){
//                          cout<<"Insert new for ("<<oldName<<") : ";
//                          getline(cin, newName);
//                         studentName[i] = newName;
//                         cout<<"Student name updated successfully.\n";
//                      } else{
//                          cout<<"old name does not exist!!\n";
//                     }
//                 }
//                 break; 
//              case 4:
//                 cout<<"exit.\n";

//             default:
//                 cout<<"[!] Insert option\n";

             
//          };

//     }
                
   ///////////////////////////////////////////////
    //  string names[]= {"sok","koko","lala"};
    //  cout<<"All names :\n";
    //  for(string i :names){
    //     cout<<i<<endl;
    //  }
    //  cout<<"\n [+] Insert name to delete :";
    // string name ;
    // getline (cin ,name );
    // int size = sizeof (name)/sizeof (name[0]);
    //    for (int i = 0 ; i < size ; i++){
    //      if (names[i] == name){
    //         names [i]="";
    //         break;
    //     }
    //  }
    //     cout<<"All names after delete :\n";
    //          for(string i :names){
    //             if (i!=""){
    //                 cout<<i<<"";
    //             } 
    //         }  
    /////////////////////////////////////
    // int number []= {-100, -200, -2, 1, 0};
    // int length = sizeof(number)/sizeof(number[0]);
    // for(int i = 0; i< length ; i++);{
    //     for(int j =0 ;j<length-1;j++){
    //         if(number[j]>number[j+1]){
    //             int temp = number[j];
    //             number[j]=number[j+1];
    //             number[j+1]=temp;
    //         }
    //     }
    // }
    // cout<<"sorted array in ascending order :";
    // for(int i=0; i<length; i++){
    //     cout<<number[i]<<" ";
    // }    
    //////////////////////////////////
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string name  []= {"Kaka","Cheat","Lala","Ruthko","Sokheng","Vannda"};
//     int length = sizeof(name)/sizeof(name[0]);
//     for (int i = 0 ; i < length ; i++){
//         for(int j = 0 ; j < length-1 ; j++){
//             if (name[j]<name[j+1]){
//                 string temp= name[j];
//                 name[j]=name[j+1];
//                 name[j+1]=temp;
//             }
//         }
//     }
//     cout<<"Sorted array in ascending order : \n";
//     for(int i=0; i<length; i++){
//         cout<<name[i]<<"  \n";
    
//     }
//     return 0;
// }
/**
 ** This example illustrates calling a function by value
 **/

// #include <stdio.h>

// void func (int a, int b)
// {
//    a += b;
//    printf("In func, a = %d    b = %d\n", a, b);
// }

// int main(void)
// {
//    int x = 5, y = 7;
//    func(x, y);
//    printf("In main, x = %d    y = %d\n", x, y);
//    return 0;
// }
#include <iostream>
#include "service/logic.hpp"
using namespace std;

/*************  ✨ Codeium Command ⭐  *************/
/**
 * @brief Entry point of the program
 * 
 * This program demonstrates the swapping of two integer variables using a function
 * from the logic module. It initializes two integer variables a and b with values
 * 2 and 4, respectively, and then calls the swapFromLogic function to swap their
 * values. Finally, it prints the new values of a and b.
 * 
 * @return 0 if successful
/******  0649a95f-0d5b-434b-b65d-b599413c92b3  *******/
int main(){
    int a = 2, b= 4;
    swapFromLogic(a,b);
    
    cout<<"A:"<<a<<endl;
    cout<<"B: "<<b<<endl;

    return 0;
}
