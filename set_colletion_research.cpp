// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//   set<float, greater<float>> numbers = {7.2, 9.9, 3.6, 6.9, 1.3, 9.9, 7.2};

// numbers.insert(456.5);
// numbers.erase(5.5);

// // numbers.clear();

//  for(float num :numbers){
//  	cout<<num<<" \n";
//  }


//  cout<<"size of set:"<<numbers.empty();
  
  
  
//   return 0;
// }

// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     //vector,set and map research;
//     set<int>numbers ;
//     numbers.insert(1);
//     numbers.insert(10);
//     numbers.insert(100);
//     numbers.insert(1000);
//     numbers.insert(200);
//     numbers.insert(10);
//     cout<<"Print Set "<<endl;
//     for(int i:numbers){
//         cout<<i<<" "<<endl;
//     }
//     int searchValue=(100);
//     if(numbers.find(searchValue)!=numbers.end()){
//         cout<<"Element "<<searchValue<<" Found in set"<<endl;


//     }
//     else{
//         cout<<"Element "<<searchValue<<" not found in set"<<endl;
//     }
//     numbers.erase(1000);
//     cout<<"after Erase"<<endl;
//     for(int i: numbers){
//         cout<<i<<" "<<endl;


//     }
//     return 0;
// }
///////////////////////
// #include<map>
// #include<iostream>
// using namespace std;
// int main(){
//     map<int,int>m1;
//     m1.insert(make_pair(4,10));
//     m1.insert(make_pair(2,20));
//     m1.insert(make_pair(1,30));
//     m1.insert(make_pair(3,40));
    
//     for(const auto& pair:m1){
//         cout<<pair.first<<" -"<<pair.second<<endl;
//            }
//     return 0;
// }
/////////////////////////
// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(const vector<int>& number , const string& message){
//     cout<<"\n"<< message<<endl;
//     for(const int& num :number){
//         cout<<" "<<num;
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>numbers;
//     numbers.assign(2,1);
//     printVector(numbers ,"After using assign():");
//     numbers.push_back(100);
//     printVector(numbers ,"After using push_back():");
//     numbers.insert (numbers.begin()+1,89);
//     printVector(numbers ,"After using insert() at the second position:");
    
//     return 0;

//     }
    
    // #include<map>
    // #include<string>
    // #include<iostream>
    // using namespace std;
    // using namespace std;
    // int main(){
    //     map <string,string>m;
    //     m["1111"]="koko";
    //     m["1234"]="hana";
    //     m["9999"]="julie";
    //     for(const auto&pair :m){
    //         cout<<pair.first<<"->"<<pair.second<<endl;
    //     }
    //     return 0;
    // }
    ////////////////
//     #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     //vector,set and map research;
//     set<int>numbers ;
//     numbers.insert(1);
//     numbers.insert(10);
//     numbers.insert(100);
//     numbers.insert(1000);
//     numbers.insert(200);
//     numbers.insert(10);
//     cout<<"Print Set "<<endl;
//     for(int i:numbers){
//         cout<<i<<" "<<endl;
//     }
//     int searchValue=(100);
//     if(numbers.find(searchValue)!=numbers.end()){
//         cout<<"Element "<<searchValue<<" Found in set"<<endl;


//     }
//     else{
//         cout<<"Element "<<searchValue<<" not found in set"<<endl;
//     }
//     numbers.erase(1000);
//     cout<<"after Erase"<<endl;
//     for(int i: numbers){
//         cout<<i<<" "<<endl;


//     }
//     return 0;
// }


#include <iostream>
#include <map>
using namespace std;

int main() {
//map that stores students with their respective grades
    map<string, double> studentGrades;
    string name;
    double grade;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter student's grade (in decimal format): ";
        cin >> grade;

//pairing the keys and values
        studentGrades[name] = grade;
    }

    // Print the student names and their corresponding grades
    cout << "\nStudent Grades:\n";
    for (const auto& index : studentGrades) {
        cout << index.first << ": " << index.second << endl;
    }

    return 0;
}