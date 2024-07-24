// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Queue{
 public:     
    int front,rear,capacity;
    int* queue;
    
  
    Queue(int c){
        front=rear=0;
        capacity=c;
        queue=new int[c];
    }
      
    ~Queue(){
        delete[] queue;
    }
      
    void enqueue(int data){
        if(rear==capacity){
            cout<<"queue is full"<<endl;
            return;
        }
        else{
            queue[rear]=data;
            rear++;
        }
        return ;
    }
    
    void dequeue(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else{
            for(int i=0; i<rear-1; i++){
                queue[i]=queue[i+1];
            }
            
            rear--;
        }
        return;
    }
    void display(){
        
        if(front==rear){
            cout<<"queue is empty"<<endl;
            return;
        }
        
        for(int i=front; i<rear; i++){
            cout<<queue[i]<<" ";
        }
        return;
    }  
    
};

int main() {
    // Write C++ code here
   Queue q(4);
   
   q.display();
   
   q.enqueue(2);
   q.enqueue(3);
   q.enqueue(4);
   q.enqueue(5);
   
   q.display();
   cout<<endl;
   
   q.dequeue();
   q.display();

    return 0;
}