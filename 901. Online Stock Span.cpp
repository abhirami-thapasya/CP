class StockSpanner {
    stack<pair<int,int>> stock;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;
        while(!stock.empty() && stock.top().first<=price){
            span+=stock.top().second;
            stock.pop();
        }
        stock.push({price,span});
        return span;
    }
};
