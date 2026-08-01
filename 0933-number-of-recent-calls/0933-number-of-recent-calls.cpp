class RecentCounter {
public:
queue<int>q;
    RecentCounter() {
        
    }
    void p(queue<int>& q) {
     if(q.back() - q.front() >3000) {
        q.pop();
        p(q);
     }
    return;
    }

    int ping(int t) {
        q.push(t);
        p(q);
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */