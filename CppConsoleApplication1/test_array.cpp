void f(int (&a)[500])
{
	int n = sizeof a / sizeof *a;
}
int main()
{
	int a[500];
	int n = sizeof a / sizeof *a;
	f(a);
}