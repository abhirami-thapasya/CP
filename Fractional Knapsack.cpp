class Solution {
  public:
    bool static comp(Item a,Item b){
        double x=(double) a.value/(double) a.weight;
        double y=(double) b.value/(double) b.weight;
        return x>y;
    }
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Your code here
        sort(arr,arr+n,comp);
        double maxval=0.0;
        int i=0;
        while(w>0 && i<n){
            Item a=arr[i++];
            if(a.weight>w){
                double frac=((double) a.value/(double) a.weight)*(double) w;
                w=0;
                maxval+=frac;
                break;
            }
            maxval+=a.value;
            w-=a.weight;
        }
        return maxval;
    }
};