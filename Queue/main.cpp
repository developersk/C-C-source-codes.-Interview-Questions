#include <iostream>

using namespace std;
#define MAX 10

void myQueue(void);

class Queue{
    int front;
    int rear ;
    int size ;
public:
    int list[MAX];

    Queue(){front=-1;
            rear=-1;
            size=0;}

     void enqueue(int x);
     int dequeue();
     int onFront();
     bool isEmpty();
     void display();
};

    void Queue:: enqueue(int x){
         if(isEmpty()){
                front++;
         }
         rear++;
         size++;
         list[rear] = x ;
     }

     int Queue::dequeue(){
        int rv = list[front];
        front++;
        size--;
        return rv;
     }

    bool Queue:: isEmpty(){
         if(front==-1&&rear==-1){
            return true;
         }else{
            return false;
         }
     }

     void Queue::display(){
         int i;
         for(i=front;i<=rear;i++){
            cout << list[i] << ", ";
         }
         cout << "END";
     }
     int Queue::onFront(){

         return list[front];
     }



int main()
{
    cout << "QUEUE" << endl;
    myQueue();
    return 0;
}

void myQueue(){
    Queue que ;

    int i=0;
    for(i=1;i<=10;i++){
        que.enqueue(i*10);
    }

    que.display();
    cout << "\nItem on front: " << que.onFront() <<"\n";

    cout << que.dequeue() << " removed from queue\n";

    que.display();


}
