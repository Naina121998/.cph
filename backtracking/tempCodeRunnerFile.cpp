for(int i = idx ; i<n;i++){
       if(i!=idx && arr[i]==arr[idx]){
           continue;
       }
       swap(arr[idx],arr[i]);
       heapPermutation(arr,idx+1,n);
     
   }