class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        int i=1,j=0;
       while(i<n)
       {
         if(arr[i]==arr[j])
         {
            i++;
         }
         else 
         {
            j++;
            arr[j]=arr[i];
            i++;
         }
       }
       return j+1;
    }
};