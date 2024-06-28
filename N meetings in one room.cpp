class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    struct data{
        int start;
        int end;
        int pos;
    };
    bool static comp(data a,data b){
        if(a.end<b.end){
            return true;
        }
        else if(a.end>b.end){
            return false;
        }
        else if(a.start<b.start){
            return true;
        }
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        data v[n];
        for(int i=0;i<n;i++){
            v[i].start=start[i];
            v[i].end=end[i];
            v[i].pos=i+1;
        }
        sort(v,v+n,comp);
        int count=0,freetime=0;
        for(int i=0;i<n;i++){
            if(v[i].start>freetime){
                count++;
                freetime=v[i].end;
            }
        }
        return count;
    }
};