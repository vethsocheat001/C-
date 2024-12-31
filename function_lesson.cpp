// #include<iostream>
// using namespace std;
// double KhCurrrencyConvetor(double usd){
//     return usd * 4000;
// }


// int main(){
//     double result = KhCurrrencyConvetor(1.5);
//     cout<<"Result of Currency Conversion: "<<result<<endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// double KhCurrrencyConvetor(double usd){
//     double convertFromKHToUSD(double khCurrency){
//     return khCurrency / 4000;
// }


// int main(){
//     double result = KhCurrrencyConvetor(1.5);
//     double result1 = convertFromKHToUSD(600000);
//     cout<<"1.5 $ to KH currency conversion: "<<result<<endl;
//     cout<<"600000 to USD currency conversion: "<<result1<<endl;




//     return 0;
// }
// #include<iostream>
// using namespace std;
// string generatePassword(){
//     string str = " ";
//     char buffer = 'A';
//     for ( int i = 0; i < 100; i++){
//     str = str + buffer ;
//     buffer++;
//     }
//     return str;
// }
// int main(){
//     string myPassword = generatePassword();
//     cout<<"This is my password: "<<myPassword<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void thumbnail ( string yourProfileName){
//     cout<<"================================\n";
//     cout<<"  welcome    "<<yourProfileName<<endl;
//     cout<<"================================\n";
// }
// void greeting (){
//     cout<<"Greetings !"<<endl;
//     cout<<" How can I help you ?"<<endl;
// }
// int main(){
//     thumbnail("kaka");
//     greeting();
//     return 0;
// }   
// #include<iostream>
// #include<vector>

// using namespace std;

// struct User{
//     int id;
//     string name;
//     string email;
//     //
//     void getUserInfo(){
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//         cout << "Email: " << email << endl;
//         cout << "--------------------" << endl;
//     }
// };
// vector<User> users = 
// {
//     {1,"KoKo","koko123@gmail.com"},
//     {2,"KaKa","kaka123@gmail.com"}
// };

// User findUserById(int id){
//     for(User u: users){
//         if(u.id==id){
//             return u;
//         } 
//     }
//     return {}; 
// }

// void deleteUserById(int id){
//     for(int i=0; i<users.size(); i++){
//         if(users[i].id==id){
//             users.erase(users.begin()+i);
//             cout<<"\n[+] User with ID "<<id<<" deleted successfully."<<endl;
//             return;
//         }
//     }
// } 

// int main(){
//     cout<<"[+] Insert User ID to search: ";
//     int id;cin>>id;
//     User user = findUserById(id);
//     user.getUserInfo();
//     cout<<"[+] Insert User ID to delete: ";
//     cin>>id;
//     deleteUserById(id);
//     cout<<"[+] Insert User ID to search: ";
//     cin>>id;
//     User user1 = findUserById(id);
//     user1.getUserInfo();
//     return 0;
// }


// #include<iostream>
// #include<vector>

// using namespace std;

// struct User{
//     int id;
//     string name;
//     string email;
    
//     void getUserInfo(){
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//         cout << "Email: " << email << endl;
//         cout << "--------------------" << endl;
//     }
// };

// vector<User> users = 
// {
//     {1, "KoKo", "koko123@gmail.com"},
//     {2, "KaKa", "kaka123@gmail.com"}
// };

// // Function to find a user by their ID
// User findUserById(int id){
//     for(User u: users){
//         if(u.id == id){
//             return u;
//         }
//     }
//     return {};
// }

// // Function to delete a user by their ID
// void deleteUserById(int id){
//     for(int i = 0; i < users.size(); i++){
//         if(users[i].id == id){
//             users.erase(users.begin() + i);
//             cout << "\n[+] User with ID " << id << " deleted successfully." << endl;
//             return;
//         }
//     }
//     cout << "[!] User with ID " << id << " not found!" << endl;
// }

// // Function to insert a new user
// void insertUser(){
//     User newUser;
//     cout << "[+] Enter new user details:" << endl;
//     cout << "ID: "; cin >> newUser.id;
//     cout << "Name: "; cin >> newUser.name;
//     cout << "Email: "; cin >> newUser.email;
//     users.push_back(newUser);
//     cout << "[+] User with ID " << newUser.id << " inserted successfully." << endl;
// }

// // Function to update an existing user's details
// void updateUser(int id){
//     for(int i = 0; i < users.size(); i++){
//         if(users[i].id == id){
//             cout << "[+] User found. Enter new details:" << endl;
//             cout << "New Name: "; cin >> users[i].name;
//             cout << "New Email: "; cin >> users[i].email;
//             cout << "[+] User with ID " << id << " updated successfully." << endl;
//             return;
//         }
//     }
//     cout << "[!] User with ID " << id << " not found!" << endl;
// }

// int main(){
//     // Insert a new user
//     insertUser();
    
//     // Display updated users list
//     cout << "\n[+] Current users list:" << endl;
//     for(const auto& user : users){
//         user.getUserInfo();
//     }

//     // Update an existing user
//     cout << "[+] Insert User ID to update: ";
//     int id; cin >> id;
//     updateUser(id);
    
//     // Display updated users list
//     cout << "\n[+] Updated users list:" << endl;
//     for(const auto& user : users){
//         user.getUserInfo();
//     }

//     // Delete a user
//     cout << "[+] Insert User ID to delete: ";
//     cin >> id;
//     deleteUserById(id);

//     // Final users list
//     cout << "\n[+] Final users list:" << endl;
//     for(const auto& user : users){
//         user.getUserInfo();
//     }

//     return 0;
// }
// #include<iostream>
// #include<vector>

// using namespace std;

// struct User {
//     int id;
//     string name;
//     string email;

//     void getUserInfo() {
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//         cout << "Email: " << email << endl;
//         cout << "--------------------" << endl;
//     }
// };

// vector<User> users = {
//     {1, "KoKo", "koko123@gmail.com"},
//     {2, "KaKa", "kaka123@gmail.com"}
// };

// User findUserById(int id) {
//     for (User u : users) {
//         if (u.id == id) {
//             return u;
//         }
//     }
//     return {};
// }

// /*************  ✨ Codeium Command ⭐  *************/
// /**
//  * Deletes a user by their ID from the users vector.
//  * If the user ID is found, it will be deleted and a success message will be printed.
//  * If the user ID is not found, it will print an error message.
//  * @param id The ID of the user to delete.
//  */
// /******  69a5a6bc-a571-4f8f-983f-afff7768f4e9  *******/
// void deleteUserById(int id) {
//     for (int i = 0; i < users.size(); i++) {
//         if (users[i].id == id) {
//             users.erase(users.begin() + i);
//             cout << "\n[+] User with ID " << id << " deleted successfully." << endl;
//             return;
//         }
//     }
// }

// void updateUserById(int id, const string& newName, const string& newEmail) {
//     for (User& i : users) {
//         if (i.id == id) {
//             i.name = newName;
//             i.email = newEmail;
//             cout << "\n[+] User with ID " << id << " updated successfully." << endl;
//             return;
//         }
//     }
// }
// void insertUser(){
//     User newUser;
//     cout << "[+] Enter new user details:" << endl;
//     cout << "ID: "; cin >> newUser.id;
//     cout << "Name: "; cin >> newUser.name;
//     cout << "Email: "; cin >> newUser.email;
//     users.push_back(newUser);
//     cout << "[+] User with ID " << newUser.id << " inserted successfully." << endl;
// }
// int main() {
//      cout<<"[+] Insert User ID to search: ";
//     int id;cin>>id;
//     User user = findUserById(id);
//     user.getUserInfo();
//     cout<<"[+] Insert User ID to delete: ";
//     cin>>id;
//     deleteUserById(id);
//     cout<<"[+] Insert User ID to update: ";
//     cin>>id;
//     string newName, newEmail;
//     cout<<" New name: ";
//     cin>>newName;
//     cout<<" New email: ";
//     cin>>newEmail;
//     updateUserById(id, newName, newEmail);
//     insertUser();
//     cout << "\n[+] Current users list:" << endl;
//     cin>>id;
//     User user1 = findUserById(id);
//     user1.getUserInfo();
//     cout<<"[+] Insert User ID to search: ";
//     cin>>id;
//     User user2= findUserById(id);
//     user2.getUserInfo();

//     return 0;
// }
#include<iostream>

using namespace std;

struct User{
    int id;
    string name;
    string email;
    string password;
    //
    void setId(int id){
        this->id = id;
    }
    int getId(){
        return this->id;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
    void setEmail(string email){
        this->email = email;
    }
    string getEmail(){
        return this->email;
    }
    void setPassword(string password){
        this->password = password;
    }
    string getPassowrd(){
        return this->password;
    }
    // 
    void getUserInfo(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<<this->email<<endl;
        cout<<"Password: "<<this->password<<endl;
    }
};
