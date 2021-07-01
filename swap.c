

void swap_max(int arr[], int l, int n )
{

int max,t=n,i,j=0;
max=arr[n];
for(i=n;i<l;i++)
{
if(arr[i]>max)
{
max=arr[i];
t=i;
}
}
j=arr[t];
arr[t]=arr[n];
arr[n]=j;
}


void ssort(int arr[], int l)
{
for(int i=0;i<l;i++)
{
swap_max(arr, l, i);

}


}
