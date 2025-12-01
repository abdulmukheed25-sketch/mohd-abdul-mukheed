long int fact(int);
void main()
{
	int n;
	long int ans;
	clrscrl();
	printf("enter any no /n");
	scanf("%d",&n);
	ans=facr(n);
	printf("/nfactorial=%d",ans);
	getch();
}
long int fact(int x)
{
	if(x==1)
		return 1;
	else
		return x * fact (x-1);
}