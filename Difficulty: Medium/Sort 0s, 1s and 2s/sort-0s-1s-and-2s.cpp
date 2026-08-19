class Solution {
  public:
    void sort012(vector<int>& arr) {
        int left =0;
        int mid=0;
        int right=arr.size()-1;
      
        
        while(mid<=right){
            if(arr[mid]==0){
                swap(arr[left],arr[mid]);
                left++;
                mid++;
                
            }
            else if( arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[right]);
                
                right--;
            }
       

           
            
        }
        
        
    }
};