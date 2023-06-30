int binsearch(int x,int v[],int n){
  // n : number of element in the v
  // x : search value inside v
  int low,high,mid;
  low =0;
  high = n-1;
  mid = (low+high)/2;
  if(x<v[low] || x>v[high])
    return -1;
  else
    while(low<=high && v[mid]!=x){
      if(x<v[mid])
	high = mid-1;
      else
	low = mid+1;
      mid = (low+high)/2;
    }
  return mid;
}
