// #include<iostream>
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
//   #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     system("cls");
//     int size;
//     cout<<"Enter number of student's name to set up system: ";cin>>size;
//     string studentName[size];
//     while(true){
        
//         cout<<"******************* Student management system *************"<<endl;
//         cout<<"1. List all student's name "<<endl;
//         cout<<"2. Add new student's name \n";
//         cout<<"3. Update student's name by instering the old name\n";
//         cout<<"4. Exit.\n";
//         cout<<"***********************************************************"<<endl;
//         int opt;
//         cout<<"Enter Option: ";cin>>opt;
//         switch(opt){
//             case 1:
//                 system("cls");
//                 cout<<"1. List all students option: \n";
//                 for(string n: studentName){
//                     if(n.length()== 0){
//                         cout<<"[!] No student name. \n";
//                     }
//                     for(string name: studentName){
//                         cout<<"Student: "<<name<<endl;
//                     }
//                 }
//                 break;
//             case 2:
//                 system("cls");
//                 cout<<"Enter student name option: \n";
//                 int index;
//                 cout<<"Enter student's name index: ";cin>>index;
//                 if(studentName[index] != ""){
//                     cout<<"This is index already existed \n";
//                 } else{
//                     string sn;
//                     cout<<"Enter student's name: ";
//                     cin.ignore();
//                     getline(cin, sn);
//                     studentName[index] = sn;
//                     cout<<"Student name " + sn << "has been inserted succesfully.\n";
//                 }
//                 break;
            // case 3:
            //     system("cls");
            //     cout<<" Update student's name by old name option: \n";
            //     string oldName, newName;
            //     cout<<"Insert student's old name: ";
            //     cin.ignore();
            //     getline(cin, oldName);
            //     for(int i = 0; i < size; i++){
            //         if(studentName[i] == oldName){
            //             cout<<"Insert new for ("<<oldName<<") : ";
            //             getline(cin, newName);
            //             studentName[i] = newName;
            //             cout<<"Student name updated successfully.\n";
            //         } else{
            //             cout<<"old name does not exist!!\n";
            //         }
            //     }
            //     break;
//                 case 3:
//                 system("cls");
//                 cout<<"Update student's name by old name option:\n";
//                 for(string oldName, newName){
//                     if(oldName, newName.length()== 0){
//                         cout<<"[!] No student name. \n";
//                     }
//                     for(string name: studentName){
//                         cout<<"Student: "<<name<<endl;
//                     }
//                 }
//                 break;
//             case 4:
//                 cout<<"Exit.\n";
//                 return 0;
    
//             default:
//                 cout<<"[!] Invalid option\n";
                      
//         }

//     }
//     return 0;
// }
// #include <iostream>
// #include <set>
// #include <functional>  // For greater<> comparator

// int main() {
//     // Set with custom comparator for descending order
//     std::set<int, std::greater<int>> mySet;

//     mySet.insert(10);
//     mySet.insert(30);
//     mySet.insert(20);

//     // Print the set (will be in descending order)
//     for (int val : mySet) {
//         std::cout << val << " ";
//     }

//     return 0;
// }
// #include <iostream>
// #include <set>

// int main() {
//     std::set<int> numbers;

//     // Inserting elements
//     numbers.insert(5);
//     numbers.insert(2);
//     numbers.insert(8);
//     numbers.insert(2); // Duplicate, will not be added

//     // Displaying elements
//     for (int num : numbers) {
//         std::cout << num << " "; // Output: 2 5 8 (sorted order)
//     }

//     // Checking presence
//     if (numbers.count(5)) {
//         std::cout << "\n5 is present in the set.";
//     }
//     return 0;
// }
#include <iostream>
#include <set>

int main() {
    std::set<int> s;

    // Insert elements
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(2);
    s.insert(2);
    s.insert(2);
     // Duplicate, won't be added

    // Print elements
    for (int x : s) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Check if an element exists
    if (s.find(2) != s.end()) {
        std::cout << "2 is in the set" << std::endl;
    }

    return 0;
}