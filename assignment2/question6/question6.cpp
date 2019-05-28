#include <iostream>
#include <string>
using namespace std;
struct movies_t{
string title;
int year;
};
struct friends_t{
string name;
string email;
movies_t favorite_movie;
}charlie,maria;
void print(friends_t * pfriends){
cout<<"Name:"<<pfriends->name<<"\n";
cout<<"Email:"<<pfriends->email<<"\n";
cout<<"Title:"<<pfriends->favorite_movie.title<<"\n";
cout<<"Year:"<<pfriends->favorite_movie.year<<"\n";
}
int main(){
friends_t * pfriends=&charlie;
pfriends->name="hema";
pfriends->email="hema@gmail.com";
pfriends->favorite_movie.title="OS";
pfriends->favorite_movie.year=2019;
cout<<"Structure"<<"\n";
print(pfriends); 

}
