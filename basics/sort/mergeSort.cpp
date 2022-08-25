class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int temp[r-l+1];
         int k = 0;
         int i =l,j = m+1;
         
        while(i<=m && j<=r){
            if(arr[i]<arr[j]){
                temp[k++] = arr[i++];
            }else{
                temp[k++] = arr[j++];
            }
        }
        
        while(i<=m){
            temp[k++] = arr[i++];
        }
        while(j<=r){
            temp[k++] = arr[j++];
        }
        
        int f =0;
        for(int i = l;i<=r;i++){
            arr[i] = temp[f++];
        }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
            int m = (l+r)/2;
        if(l<r){
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
        
    }
};
