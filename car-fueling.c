int MinRefills(int x[],int n,int L)
{
    int count=0,curr=0,last=0;
    printf("\nStop: %d",curr);
    while(curr<(n-1))
    {
        last=curr;
        while(curr<(n-1))
        {
            if((x[curr+1]-x[last])<=L)
                curr+=1;
            else break;
        }

        if(curr==last)
            return -1;
        if(curr<(n-1))
        {
            printf("\nStop: %d",curr);
            count++;
        }
    }
    printf("\nStop: %d",curr);
    return count;
}


void main()
{
    int i,n,L,count=0;
    printf("\n#####################################################\n");
    printf("\nEnter no. of cities between A & B: ");
    scanf("%d",&n);
    n=n+2;
    int x[n];
    x[0]=0;
    for(i=1;i<n;i++)
    {
        printf("\nEnter Distance from %d to %d: ",i-1,i);
        scanf("%d",&x[i]);
    }
    printf("\nEnter max. distance by a full tank: ");
    scanf("%d",&L);
    count=MinRefills(x,n,L);
    printf("\n#####################################################\n");
    if(count==-1)
        printf("IMPOSSIBLE");
    else
        printf("\nNo. of stops: %d \n",count);
    printf("\n#####################################################\n");
}


