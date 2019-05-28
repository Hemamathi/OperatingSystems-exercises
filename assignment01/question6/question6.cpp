#include<iostream>
using namespace std;
int main(){
int array[3][3],i,j;
float determinantofmatrix=0;
cout<<"Enter the array rowwise:\n";
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
cin>>array[i][j];

for(i=0;i<3;i++)
cout<<"\n";
for(j=0;j<3;j++)
cout<<array[i][j]<<"\t";

for(i=0;i<3;i++)
determinantofmatrix = determinantofmatrix + (array[0][i] * (array[1][(i+1)%3] * array[2][(i+2)%3] - array[1][(i+2)%3] * array[2][(i+1)%3]));
cout<<"\n determinantofmatrix:"<<determinantofmatrix;
cout<<"\n\n inverse of matrix:";
for(i=0;i<3;i++)
for(j=0;j<3;j++)
cout<<((array[(j+1)%3][(i+1)%3] * array[(j+2)%3][(i+2)%3]) - (array[(j+1)%3][(i+2)%3] * array[(j+2)%3][(i+1)%3]))/ determinantofmatrix<<"\t";
cout<<"\n";

return 0;
}
