class MyQueue {

    private: 
    stack<int>inst;
    stack<int>oust;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        inst.push(x);
    }
    
    int pop() {

         peek();
        int val = oust.top();
        oust.pop();

        return val;

        
       
        
    }
    
    int peek() {

       

         if(oust.empty()){
          while(!inst.empty()){
                oust.push(inst.top());
                inst.pop();
            }
        }
        return oust.top();
        
    }
    
    bool empty() {
        return inst.empty() && oust.empty();
    }



};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */