#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
using namespace std;

template <class Object>
void printQueue(queue<Object> myQueue);

template <class Object>
void highPriority(queue<Object> &myQueue, Object item);

int main(int argc, char **argv)
{
    // Declare queue variables
    queue<int> myQueue;

    // Add some data to queue 1
    myQueue.push(26);
    myQueue.push(17);
    myQueue.push(86);
    myQueue.push(90);
    myQueue.push(15);

    cout << "\nQueue:\n";
    printQueue(myQueue);

    cout << "\nQueue after inserting 30:\n";
    highPriority(myQueue, (int)30);
    printQueue(myQueue);

    cout << "\nQueue after inserting 85:\n";
    highPriority(myQueue, (int)85);
    printQueue(myQueue);

    cout << "\nQueue after inserting 77:\n";
    highPriority(myQueue, (int)77);
    printQueue(myQueue);

    cout << "\n** Press any key to continue **\n";
    getchar();

    return 0;
}

template <class Object>
void printQueue(queue<Object> myQueue)
{
   queue<Object> tmpQueue = myQueue;
   Object tmpItem;
   
   while (!tmpQueue.empty())
   {
      tmpItem = tmpQueue.front();

      cout << " " << tmpItem; 

      tmpQueue.pop();
   }

   cout << endl;

   return;
}

template <class Object>
void highPriority(queue<Object> &myQueue, Object item)
{
   // TODO: Implement the details for the highPriority function.
//elements added using high priority function gets mapped to the front of the queue
myQueue.push(item);
 stack<Object> Stack; 
    while (!myQueue.empty()) { 
        Stack.push(myQueue.front()); 
        myQueue.pop(); 
    } 
    while (!Stack.empty()) { 
        myQueue.push(Stack.top()); 
        Stack.pop(); 
    } 


   return;
}
