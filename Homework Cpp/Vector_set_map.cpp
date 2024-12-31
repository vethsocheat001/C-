// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     system("cls");
//     vector<int>numbers={1,2,3,4};
//     for(auto & n:numbers){
//         cout<<n<<" |";
//     }

//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     system("cls");
//     vector<int> numbers;
//     for(int i=0;i<5;i++){
//         int num;
//         cout << "Enter number " << i+1 << ": ";
//         cin >> num;
//         numbers.push_back(num);
//     }
//     for(auto & i: numbers){
//         cout << i << " ";
//     }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     system("cls");
//     vector<int> numbers;
//     // insert the element into vector
//     for(int i=0;i<5;i++){
//         int num;
//         cout << "Enter number " << i+1 << ": ";
//         cin >> num;
//         numbers.push_back(num);
//     }
//     cout<<"All numbers"<<endl;
//     for(auto & i: numbers){
//         cout << i << " | ";
//     }
//     cout<<"[+] Insert element position to delete: ";
//     int pos;
//     cin>>pos;
//     // erase the element
//     numbers.erase(numbers.begin()+pos-1);
//     cout<<"Numbers after deleted: "<<endl;
//     for(auto & i: numbers){
//         cout << i << " | ";
//     }

//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // system("cls");
//     vector<int> numbers;
//     numbers[0] = 1;

//     // Debug on 2023
//     numbers.insert(numbers.begin()+1,5);
//     numbers.push_back(2);
//     for(auto &i: numbers){
//         cout << i << " ";
//     }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // system("cls");
//     vector<int> numbers = {1,2,3,4};
//         for(auto & i: numbers){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"[+] Insert element positions to update: ";
//     int pos;
//     cin>>pos;
//     for(auto & i: numbers){
//         if(numbers.at(pos-1)==i){
//             numbers.erase(numbers.begin()+pos-1);
//             int n;
//             cout<<"[+] Insert new element to update: ";
//             cin>>n;
//             numbers.insert(numbers.begin()+pos-1, n);
//         }
//     }
//     for(auto & i: numbers){
//         cout<<i<<" ";
//     }
//     return 0;
// }
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     // set<int>numbers = {1,2,3,4};
//     set<string> names ={"somnang","tong","vava","lala"};
//     names.insert("momo");
//     names.insert("nana");
//     names.erase("tong");
//     names.insert("mama");
//     // numbers.insert(5);
//     // numbers.erase(1);
//     for(auto i: names ){
//         cout<<i<<"  "<<endl;
        
//     }

//     // for(auto num: numbers ){
//     //     cout<<num<<"  "<<endl;
//     // }
//     return 0;
// }
// #include<iostream>
// // #include<map>
// using namespace std;
// int main(){
    // map<int,string>info;
    // info.emplace(1,"somnang");
    // info.emplace(2,"tong");
    // info.emplace(3,"vava");
    // for(auto i: info){
    //     cout<<"key: "<<i.first<<" value: "<<i.second<<endl;
    // } 
//     map<int, string>info;
//     info.emplace(5,"Rotha");
//     info.insert({1,"koko"});
//     info.insert(pair<int,string>(3,"somnang"));
//     info.insert(make_pair(2,"socheat"));
//     info.insert({{7,"sokheng"},{8,"sopi"}});
//     info[6]="chorynai";
   
// for(auto i: info){
//     cout<<"key : "<<i.first<<" value: "<<i.second<<endl;
// }
// int a =10;
// int *ptr = &a;
// // *ptr = 100;

// cout<<"Value of a: "<<a<<endl;
// cout<<"Value of a in pointer: "<<*ptr<<endl;
// int *n = new int[5];
// n[0] =1;
// n[1] =2;
// n[2] =3;
// n[3] =4;
// n[4] =5;
// for(int i=0;i<5;i++){
//     cout<<"Value :"<<*(n+i)<<endl;
struct point{
//     int x;
//     int y;
// };
// point p1 = {10,20};
// point p2 = {30,40};
// point *ptr = &p1;
// cout<<"Value of x: "<<ptr->x<<endl;
// cout<<"Value of y: "<<ptr->y<<endl;




//     return 0;
// }
    

 