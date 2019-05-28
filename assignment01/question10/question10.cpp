#include <iostream>
using namespace std;
//swappingByPointer(int*,int*);
//void swappingByReference(int&,int&);

void swappingByPointer(int *a1, int*a2){
int a;
a=*a1;
*a1=*a2;
*a2=a;
}
void swappingByReference(int&a1, int &a2){
int a;
a=a1;
a1=a2;
a2=a;
}
int main(){
int x=1,y=2;
cout<<"***Swap By Pointer starts***"<<endl;
cout<<"Before swapping"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
swappingByPointer(&x,&y);
cout<<"\n Swapped successfully"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
cout<<"***Swapping by pointer ends****"<<endl;
cout<<"Before swapping"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
swappingByReference(x,y);
cout<<"\n After swapping"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
return 0;
}
