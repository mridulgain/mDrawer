int search(int a[], int l,int r,int key)
{
    int mid = (l + r)/2;

    if(l>r)
	return -1;//not found

    if(mid == key)
    {
	return mid;
    }
    else if(key < mid)
	search(a,l,mid-1,key);
    else
	search(a,mid+1,r,key);

}
