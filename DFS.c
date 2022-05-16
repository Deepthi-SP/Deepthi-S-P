#include<stdio.h>
int a[6][6],n,visited[10],count=0;
void dfs(int v)
{
int w;
  count++;
  visited[v]=count;
  for(w=0;w<n;w++)
  if(visited[w]==0 && a[v][w]==1)
    dfs(w);
    printf("\n%d\t",v);
}  
void main()
{
  int i,j;
  printf("Enter number of vertices\n");
  scanf("%d",&n);
  printf("Enter the matrix\n");
  for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
  printf("adjacency matrix\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
     printf("%d\t",a[i][j]);
     printf("\n");
  }
  for(i=0;i<n;i++)
  visited[i]=0;
  dfs(0);
  if(count==n)
  printf("\nGraph is connected\n");
  else 
  printf("\nGraph is not connectd\n");
}
