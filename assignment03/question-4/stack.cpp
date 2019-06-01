#include <iostream>
#include <cstdio>
#include <string>
#include <stack>

using namespace std;

template <class Object>
void print(stack<Object> myStack);
//initializing stack object named myStack from template class
template <class Object>
void reverseStack(stack<Object> &myStack);
//initializing stack object named myStack from template class;It denotes a reference to the given object
//The "&" denotes a reference instead of a pointer to an object
int main()
{
   stack<string> myStack;
//here we are calling the mystack object initialized above
   myStack.push("the");
   myStack.push("quick");
   myStack.push("brown");
   myStack.push("fox");
   myStack.push("jumped");
//this strings gets pushed into mystack
   cout << "The contents of myStack:" << endl;
   print(myStack);
//this strings gets printed from mystack
   cout << "The reverse of myStack:" << endl;
   reverseStack(myStack);
   print(myStack);
//this strings gets reversed and printed from mystack
   cout << "** Press any key to continue **";
   getchar();

   return 0;
} 

template <class Object>
void print(stack<Object> myStack)
{
   stack<Object> tmpStack;

   tmpStack = myStack;

   while (!tmpStack.empty())
   {
      // Print the top item that is on the stack
      cout << " " << tmpStack.top() << endl; 

      // Pop the item off of the stack
      tmpStack.pop();
   }

   cout << endl;

   return;
}

template <class Object>
void reverseStack(stack<Object> &myStack)
{
int n=5;
stack<Object> stk;
for(int i=0;i<n;i++){
stk.push(myStack.top());
myStack.pop();
}
  while (!stk.empty())
   {
      // Print the top item that is on the stack
      cout << " " << stk.top() << endl; 

      // Pop the item off of the stack
      stk.pop();
   }

return ;
}

