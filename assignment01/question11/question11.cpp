#include<iostream>
#include<string>
using namespace std;
void sort(string[],int);
void printArray(string[],int);
int main(){
string word[100];
int count=0;
while(1){
cout<<"enter word:\n";
cin>>word[count];
if(word[count]=="quit"||word[count]=="QUIT" ||word[count]=="Quit"){
break;
}++count;
}
sort(word,count);
printArray(word,count);
}
void sort(string word[],int count){
int start,minindex;
string stringname;
for(start=0;start<(count-1);start++){
minindex=start;
stringname=word[start];
for(int i=start+1;start<(count-1);start++){
if(word[i]<stringname){
stringname=word[i];
minindex=i;}
}
word[minindex]=word[start];
word[start]=stringname;
}}
void printArray(string s[],int n){
for(int i=0;i<n;i++){
cout<<s[i]<<"";
}}
