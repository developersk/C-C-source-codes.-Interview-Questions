#include <iostream>
#include <stack>

using namespace std;

#define MAX 10
//30 20 60 80 90 10 50 40 100 70

void defaultStack(void) ;
void displayStack(stack<int>) ;
void mystack(void);

class Stack{
     public: int top;
    int size;
public:
    int a[MAX];

    Stack(){top = -1;
            size =0;}
    bool push(int x);
    int pop();
    bool isEmpty();
    void display();
    void sortStack();
};
bool Stack::push(int x){
    size++;
    a[++top] = x ;
    return true ;
}
int Stack:: pop(){
    int x = a[top--];
    size--;
    return x ;
}
void Stack:: display(){
    cout<< "\ndisplaying stack \n" ;

    int i ;
    for(i=0;i<=top;i++){
        cout<< a[i]<< ", ";
    }

}
void Stack::sortStack(){
 int i, j;
   for (i = 0; i < size-1; i++){

       // Last i elements are already in place
       for (j = 0; j < size-i-1; j++) {
           if (a[j] > a[j+1]){
              int temp =a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
           }
       }
   }
}



int main()
{
//   defaultStack(); // stack provided by codeBlocks
    mystack() ; //my implementation of stack
    return 0;
}

void defaultStack(){
    stack <int> st ;
    int i=0;
    for(i=0;i<5;i++){
            st.push(i*10);
    }
    cout << "size of stack: " << st.size();
    cout << "\ntop of stack: " << st.top()<< '\n';

    displayStack(st);


}
void displayStack(stack<int> st){
    stack <int> s = st;
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}

void mystack(){
    Stack myst ;
    int i;
    int x=0;
    for(i=1;i<=10;i++){
        cin >> x;
        myst.push(x);
    }
   myst.display();
   myst.pop();
   myst.display();
   cout << "\nTOP: "<<myst.top;
   myst.pop();
   myst.display();
   cout << "\nTOP: "<<myst.top;
   myst.pop();
   myst.display();
   cout << "\nTOP: "<<myst.top;

   cout<< "\nSORTING STACK\n";
   myst.sortStack();
   cout<< "\nDisplay after sorting\n";
   myst.display();


}


