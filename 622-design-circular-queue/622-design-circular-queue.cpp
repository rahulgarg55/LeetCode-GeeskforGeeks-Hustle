class MyCircularQueue {
    
public:
     vector<int>arr;
        int size;
        int i=0;int j=0;
    MyCircularQueue(int k) {
       size=k;
    }
    
    bool enQueue(int value) {
        if(arr.size()<size){
            arr.push_back(value);
        return true;
    }
        return false;
    }
    
    bool deQueue() {
     if(arr.size()>0){
         arr.erase(arr.begin());
         return true;
     }   
        return false;
    }
    
    int Front() {
        if(arr.size()>0){
            return arr[0];
        }
        else return -1;
    }
    
    int Rear() {
        int n=arr.size();
        if(n==0)return -1;
        else return arr[n-1];
    }
    
    bool isEmpty() {
        if(arr.size()==0)return true;
        else return false;
    }
    
    bool isFull() {
        if(arr.size()==size)return true;
        else return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */