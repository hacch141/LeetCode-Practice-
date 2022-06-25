// 901.OnlineStockSpan

class StockSpanner {
public:
    
    stack<pair<int, int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {   
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int days = 1;
        while(!s.empty() && s.top().first <= price) {
            days += s.top().second;
            s.pop();
        }
        s.push({price, days});
        return days;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */