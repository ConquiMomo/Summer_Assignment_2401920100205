class MinStack {
private:
    stack<long long> st;
    long long mini;

public:
    MinStack() {
        mini=INT_MAX;
    }

    void push(int val) {
        long long value=val;

        if (st.empty()) {
            mini = value;
            st.push(value);
        } 
        else {
            if (value >= mini)
                st.push(value);
            else {
                st.push(2 * value - mini);
                mini = value;
            }
        }
    }

    void pop() {
        if (st.empty())
            return;
        long long n = st.top();
        st.pop();

        if (n < mini) {
            mini = 2 * mini - n;
        }
    }

    int top() {
        if (st.empty())
            return -1;
        long long n = st.top();
        if (mini < n)
            return n;
        return mini;
    }

    int getMin() { return mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */