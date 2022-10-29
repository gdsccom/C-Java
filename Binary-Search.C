#include <stdio.h>

int main()
{
    int n,a[10],key,beg,mid,end,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements inside the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&key);
    beg=0;
    end=n-1;
    while (beg<=end) {
        mid=(beg+end)/2;
        if (a[mid]==key) {
            printf("The element %d found at index %d", key, mid);
            break;
        }
        else if(a[mid]<key)
        {   
            beg=mid+1;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        mid=(beg+end)/2;
       if(beg>end){
            printf("Not found! The element %d is not inside the array", key);
        }
    }
    return 0;
}
