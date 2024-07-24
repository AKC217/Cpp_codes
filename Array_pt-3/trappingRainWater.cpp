class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        vector<int>a;
        vector<int>b;
        vector<int>c;
        
        int max_left=-1;
        int i=0;
        while(i<n){
            a.push_back(max_left);
            if(h[i]>max_left){
                max_left= h[i];
            }
            i++;
        }

        //max_right
        int max_right=h[0];
        i=0;
        while(i<n){
           int max_right=h[i];
        for(int j=i; j<n; j++){
            if(h[j]>max_right)
            {
                max_right=h[j];
            }
        }
         b.push_back(max_right);
         i++;

        }
      
    //minmum in a and b;
    i=0;
    int min;
    while(i<n){
      if(a[i]<=b[i]){
         min= a[i];
      }
      
      else{
        min=b[i];
      }
      c.push_back(min);
      i++;
    }
    //total
    int total=0;
    i=1;
    while(i<n-1){
      if(h[i]<c[i]){
        total=  total+(c[i]-h[i]);
      }
      i++;
    }

    return total;
}
};