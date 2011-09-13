#include "inc.c"

char * get()
{
	char a[3] = {'1','t','T'};
	a[4] = 'T';
	printf("%s\n", malloc(1));
	double f = sizeof(a);
	printf("a %f, %d\n", f/sizeof('a'), sizeof('a'));
	printf("char %f, %d\n", f/sizeof(char), sizeof(char));
	printf("char* %f, %d\n", f/sizeof(char *), sizeof(char*));
        int i = sizeof(a);
        int * p = malloc(sizeof(p));
	printf("ddd %n\n", p);
	printf("p %d\n", *p);
        /*printf("char %d, %d\n", i/sizeof(char), sizeof(char));
        printf("char* %d, %d\n", i/sizeof(char *), sizeof(char*));
	*/return a;
}

MAIN{
	char ** m = (char**)malloc(sizeof(char**));
	*m = (char *)malloc(sizeof(char*));
	(*(*m))='9';
//	(*(*(m++)))='A';
	char * n = get();
	/* n[5] = 'R';
	int j = 0;
	for(j;j<257;j++)n[j] = 65;
//	n[4] = 'Q';
	int i = 65;
	m[1] = (char*)&i;
	m[4] = (char*)m;
	m[5] = (char*)m;
	m[((unsigned)-1) + 1] = (char*)&i;
	i++;*/
	/*unsigned h=0, i=-1,j=0, k =0;
	m[0] = &h;
	m[1] = &i;
	m[2] = &j;
	m[256] = &k;
	printf("%s %d %d\n", m[0], *m[0], sizeof(m));
	printf("%s %d %d\n", m[1], *m[1], sizeof(m));
	printf("%s %d %d\n", m[2], *m[2], sizeof(m));*/
}

