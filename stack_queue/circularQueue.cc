class MyCircularQueue {
    private:
    int size;
    vector<int> arr;
    int p_start, p_end;
    bool full, empty;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        size = k;
        arr.resize(k);
        p_start =0;
        p_end = 0;
        full = false;
        empty= true;
        
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(!isFull())
        {
            if(isEmpty()) empty= false;
            arr[p_end] = value;
            if(p_end ==size-1)
            {p_end=0;
             }
            else
                p_end++;
            if(p_end==p_start) full=true;
            return true;
            
        }
        else
            return false;
        
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(!isEmpty())
        {
            if(isFull()) full = false; 
           
        
            if(p_start==size-1)
            {p_start = 0;}
            else
             p_start++;
            
            if(p_start==p_end){empty=true;}
            return true;
        }
        else
            return false;
    }
    
    /** Get the front it
    em from the queue. */
    int Front() {
        if(isEmpty()) return -1;
        else return arr[p_start];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(isEmpty()) return -1;
        else
        {        if(p_end==0)
        return arr[size-1];
        else
            return arr[p_end-1];}
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return empty;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return full;
        
    }
};