// #include<iostream>

// using namespace std;
// struct Person{
//     int id;
//     string name;
//     int age;
//     string email;
//     string password;
//     string phoneNumber; 
   
// };
// int main(){
//     Person person1;
//     person1.id = 1;
//     person1.name = "John Doe";
//     person1.age = 30;
//     person1. email = "Johndoe@example.com";
//     person1.password = "password123";
//     person1.phoneNumber = "0987654321";
   
//     return 0;
// }
#include <iostream>
#include<vector>
using namespace std;

struct Person{
  int id;
  string name;
  int age;
  string email;
  string password;
  string phoneNumber;
};

int main() {
  vector<Person> persons;
  Person person1 = {1,"John Doe",30,"johndoe@example.com","password123","1234567890"};
  Person person2 = {2,"Jane Smith",28,"janesmith@example.com","password456","9876543210"};
  persons.push_back(person1);
  persons.push_back(person2);

  cout<<"[+] Insert person ID: ";
  int id;cin>>id;
  for(Person per: persons){
    if(per.id==id){
      cout<<"ID: "<<per.id<<endl;
      cout<<" name : "<<per.name<<endl;
      cout<<" age : "<<per.age<<endl;
      cout<<" email : "<<per.email<<endl;
      cout<<" password : "<<per.password<<endl;
      cout<<" phone number : "<<per.phoneNumber<<endl;

 }
  }
  return 0;
}
