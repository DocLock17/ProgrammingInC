//#include <stdio.h>
//struct S {
//    int S;
//};
//int main(void) {
//    struct S S;
//    S.S = sizeof(struct S) / sizeof(S);
//    printf("%d",S.S);
//    return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//struct Q {
//    char S[3];
//};
//struct S {
//    struct Q Q;
//};
//int main(void) {
//    struct S S = { '\0', '\0','\0' };
//    S.Q.S[0] = 'A';
//    S.Q.S[1] = 'B';
//    printf("%d",strlen(S.Q.S));
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct Q {
//    char S[3];
//};
//struct S {
//    struct Q Q;
//};
//int main(void) {
//    struct S S = { '\0', '\0','\0' };
//    S.Q.S[0] = 'A';
//    S.Q.S[2] = 'B';
//    printf("%d",strlen(S.Q.S));
//    return 0;
//}

//#include <stdio.h>
//struct Q {
//    int a,b,c;
//};
//struct S {
//    int a,b,c;
//    struct Q Q;
//};
//int main(void) {
//    struct Q Q = { 3,2,1 };
//    struct S S = { 4,5,6 };
//    S.Q = Q;
//    printf("%d",S.b - S.Q.b);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct S {
//    int 	  a;
//    struct S *b;
//};
//int main(void) {
//    struct S *x = (struct S*) malloc(sizeof(struct S));
//    struct S *y = (struct S*) malloc(sizeof(struct S));
//    x->a = 2;
//    x->b = y;
//    y->a = 4;
//    y->b = x;
//    printf("%d",x->b->b->b->a);
//    free(x); free(y);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//struct S {
//    int 	  a;
//    struct S *b;
//};
//int main(void) {
//    struct S *x = (struct S*) malloc(sizeof(struct S));
//    struct S *y = (struct S*) malloc(sizeof(struct S));
//    struct S *p;
//    x->a = 2; x->b = y;
//    y->a = 4; y->b = x;
//    p = x;
//    p = p->b->b->b->b;
//    printf("%d",p->a);
//    return 0;
//}

//#include <stdio.h>
//struct S {
//    int a[2];
//};
//int main(void) {
//    struct S S[2];
//    int i;
//    for(i = 0; i < 2; i++)
//        S[i].a[1-i] = 4 * !i;
//    printf("%d",S[0].a[1]);
//    return 0;
//}


//
//#include <stdio.h>
//struct S {
//    char *p;
//};
//int main(void) {
//    char *p = "abcd";
//    struct S S[2];
//    int i;
//    for(i = 0; i < 2; i++)
//        S[i].p = p + i;
//    printf("%c",S[1].p[0]);
//    return 0;
//}



//#include <stdio.h>
//
//int global;
//
////void fun(void) {
//    int local;
//
//    local = 2;
//    global++;
//    printf("fun: local=%d global=%d\n", local, global);
//    global++;
//}
//
//int main(void) {
//    int local;
//
//    local = 1;
//    global = 1;
//    printf("main: local=%d global=%d\n", local, global);
//    fun();
//    printf("main: local=%d global=%d\n", local, global);
//    return 0;
//}

//
//#include <stdio.h>
//
//void functionx(int *ptr) {
//    *ptr = *ptr + 100;
//}
//
//int main(void) {
//    int i = 100;
//    int *p = &i;
//
//    printf("i = %d\n", i);
//    functionx(p);
//    printf("i = %d\n", i);
//    return 0;
//}



//// Here is a home made Len function
//int mystrlen(char *str) {
//    char *begin;
//
//    for(begin = str; *str; str++)
//        ;
//    return str – begin;
//}

//// Here is a home made String Copy function.
//char *mystrcat(char *destination, char *source) {
//    char *res;
//
//    for(res = destination; *destination++; ) ;
//    for(--destination; (*destination++ = *source++); ) ;
//    return res;
//}



//#include <stdio.h>
//
//int main(int argc, char *argv[]) {
//    int i;
//
//    for(i = 0; i < argc; i++)
//        printf("%s\n", argv[i]);
//    return 0;
//}



//#include <stdio.h>
//int f(void) {
//}
//int main(void) {
//    int i;
//    i = f();
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//void f(int i) {
//    i++;
//}
//int main(void) {
//    int i = 1;
//    f(i);
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int f(int i) {
//    return ++i;
//}
//int main(void) {
//    int i = 1;
//    i = f(i);
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int f(int i) {
//    return ++i;
//}
//int main(void) {
//    int i = 0;
//    i = f(f(i));
//    printf("%d",i);
//    return 0;
//}


//// COMPILATION FAILS
//#include <stdio.h>
//int main(void) {
//    int i = 0;
//    {
//        int i = 1;
//        main.i = i;
//    }
//    printf("%d",i);
//    return 0;
//}
////


// Outputs 2 ???
//#include <stdio.h>
//int i = 0;
//void f(void) {
//    int i = 1;
//}
//int main(void) {
//    int i = 2;
//    f();
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int i = 0;
//void f(void) {
//    int i = 1;
//}
//int main(void) {
//    f();
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int i = 1;
//int *f(void) {
//    return &i;
//}
//int main(void) {
//    int i = 0;
//    i = *f();
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int i = 2;
//int *f(void) {
//    return &i;
//}
//int main(void) {
//    int *i;
//    i = f();
//    printf("%d",++(*i));
//    return 0;
//}

//#include <stdio.h>
//int i = 0;
//int *f(int *i) {
//    (*i)++;
//    return i;
//}
//int main(void) {
//    int i = 1;
//    i = *f(&i);
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//struct S {
//    int S;
//};
//int f(struct S s) {
//    return --s.S;
//}
//int main(void) {
//    int i;
//    struct S S = { 2 };
//    i = f(S);
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//struct S {
//    int S;
//};
//int f(struct S *s) {
//    return --s.S;
//}
//int main(void) {
//    int i;
//    struct S S = { 2 };
//    i = f(S);
//    printf("%d",i);
//    return 0;
//}


//// Compilation Failure
//#include <stdio.h>
//int f(int t[]) {
//    return t[0] + t[2];
//}
//int main(void) {
//    int i,a[] = { -2,-1,0,1,2 };
//    i = f(a + 2);
//    printf("%d",i);
//    return 0;
//}

//// Compilation Failure
//#include <stdio.h>
//int f(int t[2][]) {
//    return t[0][0] + t[1][0];
//}
//int main(void) {
//    int i,a[2][2] = { {-2,-1},{1,2} };
//    i = f(a + 2);
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int f(char t[]) {
//    return t[1] - t[0];
//}
//int main(void) {
//    int i = 2;
//    i -= f("ABDGK" + 1);
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int f(char t[]) {
//    return t[0] - t[-1];
//}
//int main(void) {
//    int i = 2;
//    i -= f("ABDGK" + 1);
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void f(char *s,int i) {
//    *(s + i) = '\0';
//}
//int main(void) {
//    char a[] = { 'a','b','c','d' };
//    f(*a[1],1);
//    printf("%d",strlen(a));
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void f(char *s,int i) {
//    *(s + i) = '\0';
//}
//int main(void) {
//    char a[] = { 'a','b','c','d' };
//    f(a+1,1);
//    printf("%d",strlen(a));
//    return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//
//int main(int argc, char *argv[]) {
//    FILE *inp;
//    int  chr;
//
//    /* check if there is one argument */
//    if(argc != 2) {
//        printf("usage: show file_name\n");
//        return 1;
//    }
//
//    /* check if we are able to open the input file */
//    if((inp = fopen(argv[1],"rt")) == NULL) {
//        printf("Cannot open the file %s\n", argv[1]);
//        return 2;
//    }
//
//    /* we will try to read the file char by char and print the chars to screen */
//
//    while((chr = fgetc(inp)) != EOF)
//        printf("%c",chr);
//
//    /* it's time to close the stream */
//    fclose(inp);
//    return 0;
//}


//// Cool Register declaration
//int strlen3(char *str) {
//    register	int 	 len = 0;
//    register	char	*ptr = str;
//
//    while(*ptr++)
//        len++;
//    return len;
//}





//void printlookup(float (*fun)(float)) {
//    float x, fx;
//
//    for(x = 0.0; x <= 1.0; x += 0.01) {
//        fx = fun(x);
//        printf("%10.3f - %10.3f\n", x, fx);
//    }
//}



//#include <stdio.h>
//int main(void) {
//    int i;
//    i = fprintf(stdin,"Hello!");
//    printf("%d",i == EOF);
//    return 0;
//}
//
//#include <stdio.h>
//int main(void) {
//    int i;
//    i = fprintf(stderr,"Hello!");
//    printf("%d",i == EOF);
//    return 0;
//}


//#include <stdio.h>
//int main(void) {
//    FILE *f;
//    int i = fprintf(f,"Hello!");
//    printf("%d",i == EOF);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    FILE *f;
//    int i = fprintf(f,"Hello!");
//    printf("%d",i == EOF);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    FILE *f = fopen("file","w");
//    int i = fprintf(f,"Hello!");
//    printf("%d",i != EOF);
//    return 0;
//}


//#include <stdio.h>
//int main(void) {
//    FILE *f = fopen("file","w");
//    int i = fputs(f,"Hello!");
//    printf("%d",i != EOF);
//    fclose(f);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    FILE *f = fopen("file","w");
//    int i = fputs("Hello!",f);
//    printf("%d",i != EOF);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    char s[20];
//    FILE *f = fopen("file","w");
//    int i = fputs("12A",f);
//    fclose(f);
//    f = fopen("file","r");
//    fgets(s,2,f);
//    puts(s);
//    fclose(f);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    char s[20];
//    FILE *f = fopen("file","w");
//    int i = fputs("12A",f);
//    fclose(f);
//    f = fopen("file","r");
//    fgets(s,20,f);
//    puts(s);
//    fclose(f);
//    return 0;
//}


//#include <stdio.h>
//int main(void) {
//    FILE *f = fopen("file","w");
//    int i;
//    fputs("12A",f);
//    fclose(f);
//    f = fopen("file","r");
//    fseek(f,0,SEEK_END);
//    i = ftell(f);
//    fclose(f);
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    FILE *f = fopen("file","w");
//    int i;
//    fputs("12A",f);
//    fclose(f);
//    f = fopen("file","r");
//    fseek(f);
//    i = ftell(f,0,SEEK_END);
//    fclose(f);
//
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    FILE *f = fopen("file","w");
//    int i;
//    fputs("12A",f);
//    fclose(f);
//    f = fopen("file","r");
//    fscanf(f,"%d",&i);
//    fclose(f);
//    printf("%d",i);
//    return 0;
//}


//#include <stdio.h>
//int main(void) {
//    FILE *f = fopen("file","w");
//    char c;
//    fputs("12A",f);
//    fclose(f);
//    f = fopen("file","r");
//    fscanf(f,"%c",&c);
//    fclose(f);
//    printf("%c",c);
//    return 0;
//}


//#include <stdio.h>
//int main(void) {
//    FILE *f = fopen("file","w");
//    float f;
//    fputs("12A",f);
//    fclose(f);
//    f = fopen("file","r");
//    fscanf(f,"%f",&f);
//    fclose(f);
//    printf("%f",f);
//    return 0;
//}


//#include <stdio.h>
//#define	ALPHA	-2
//int main(void) {
//    int i = -1;
//    i += ALPHA;
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA	-1+2
//int main(void) {
//    int i = -1;
//    i += ALPHA;
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA	-1-2
//int main(void) {
//    int i = -1;
//    i = i * ALPHA;
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA	(-1-2)
//int main(void) {
//    int i = -1;
//    i = -i * ALPHA;
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA	-1
//#define   BETA	     - ALPHA
//int main(void) {
//    int i = ALPHA + BETA * ALPHA * BETA;
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA(x)	-x
//int main(void) {
//    int i = ALPHA(2-1);
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA(x)	2*-x
//int main(void) {
//    int i = ALPHA(1-1);
//    printf("%d",i);
//    return 0;
//}
//
//#include <stdio.h>
//#define	ALPHA(x)	2*-x
//int main(void) {
//    int i = ALPHA((1-1));
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA(x,y)	x##2-y
//int main(void) {
//    int i = -1;
//    int i2 = -2;
//    printf("%d",ALPHA(i,i2));
//    return 0;
//}


//#include <stdio.h>
//#define	ALPHA(x,y)	x+y
//int main(void) {
//    int i = -1;
//    int i2 = -2;
//    printf("%d",-ALPHA(i,i2));
//    return 0;
//}

//#include <stdio.h>
//#define A(x) 	((x)?-1:0)
//int main(void) {
//    int i = 2;
//    int i2 = A(i) * i;
//    printf("%d",i2);
//    return 0;
//}
//
//#include <stdio.h>
//#define A(x) 	((x)?-1:0)
//#define B(a)	!(a)
//int main(void) {
//    int i = 2;
//    int i2 = A(B(i));
//    printf("%d",i2);
//    return 0;
//}

//#include <stdio.h>
//#define A(x) 	#x
//int main(void) {
//    int i = -1;
//    char *s = A(i);
//    i = -(s[0] == 'i');
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#define	X 	1
//#define Y	2
//
//int main(void) {
//    int i =
//#if X<<Y > 0
//            -X
//#else
//    -Y
//#endif
//    ;
//    printf("%d",i);
//    return 0;
//}



//#include <stdio.h>
//#define	X 	1
//#define Y	2
//
//int main(void) {
//    int i =
//#if X>>Y > 0
//            -X
//#else
//            -Y
//#endif
//    ;
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    int X = 1;
//#define	X 1
//    int Y = X - 2;
//#undef X
//    printf("%d",Y+X);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//#undef X
//    int X = 1;
//    int Y = X - 2;
//#define	X -2
//    printf("%d",Y+X);
//    return 0;
//}


//#include <stdio.h>
//#define  A
//#define  C
//int main(void) {
//    int i =
//#ifdef A
//#ifdef B
//            -1
//#else
//            -2
//#endif
//#else
//    -3
//#endif
//    ;
//    printf("%d",i);
//    return 0;
//}



//#include <stdio.h>
//#define  A
//#define  C
//int main(void) {
//    int i =
//#ifdef A
//#ifdef C
//            -1
//#else
//    -2
//#endif
//#else
//    -3
//#endif
//    ;
//    printf("%d",i);
//    return 0;
//}


//#include <stdio.h>
//#define  B
//#define  C
//int main(void) {
//    int i =
//#ifdef A
//#ifdef C
//            -1
//#else
//    -2
//#endif
//#else
//    -3
//#endif
//    ;
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    int x = 1, y = 1;
//    float k = -1e0, m = 2e1;
//    printf("%d\n", (x >= y) + (x >= y) + (k >= y) + (m >= k) + ('q' <= 'z'));
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    int i = 1;
//    if(i = 0)
//        i = 2;
//    else
//        i = 3;
//    printf("%d\n",i);
//    return 0;
//}


//#include <stdio.h>
//int main(void) {
//    int i = 1, j = 0;
//    do {
//        i *= 2;
//        j += i / 2;
//    } while(j < 1);
//    printf("%d",i + j);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    int i = 1, j;
//    for(j = 0; j ; j--)
//        i *= 2;
//    printf("%d",i + j);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    int i = -1, j = 1;
//    for(i++; i++; i++)
//        j++;
//    printf("%d",i + j);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    int i = 1, j = 0, k;
//    k = (i >> j) + (j >> i) + (i >> i) + (j >> j);
//    k <<= i;
//    printf("%d", k);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    int i = 3, j = i - 2 * i;
//    switch(i - j) {
//        case  1: j++;
//        case  2: j--;
//        case  0: j++; break;
//        default: j = 0;
//    }
//    printf("%d", ++j);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    int i = 5, j = i - 4 * i;
//    switch(j) {
//        default: j = 2;
//        case  1: j--; break;
//        case  2: j++;
//        case  0: j--; break;
//    }
//    printf("%d", j++);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    int i, t[4];
//    for(i = 0; i < 3; i++) {
//        t[i] = 4 - i;
//        t[i + 1] = 2 * t[i];
//    }
//    printf("%d\n", t[2]);
//    return 0;
//}


//#include <stdio.h>
//int main(void) {
//    int i, s = 0, t[] = {16, 8, 4, 2, 1, 0};
//    for(i = 5; t[i] > 2; i /= 2)
//        s += t[i];
//    printf("%d\n", s);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    char t[] = { 'x', 'z', 'Y', 'Z', '2' , '0'};
//    printf("%d\n", t[t[1] - t[0] - t[3] + t[2] + 3] - t[5]);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    float a = 3.14E0, *b = &a, **c = &b;
//    **c = a + (a == *b);
//    printf("%f", a);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    char t[4][4];
//    printf("%d\n",sizeof(t) / sizeof(t[0]) / sizeof(t[0][0]));
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    char *p = "\0\2\1\3\4";
//    printf("%d\n", p[p[2]] + *(p + 1) + p[0]);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void) {
//    char tt[20] = "9081726354";
//    strcpy(tt, tt + 3);
//    printf("%d\n", strlen(tt) - tt[9] + '5');
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void) {
//    char tt[20] = "0123456789";
//    strcat(tt + 11, "123");
//    printf("%d\n", strlen(tt) - tt[8] + '0');
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void) {
//    float *t = 1 + (float *) malloc(sizeof(float) * sizeof(float));
//    t--;
//    *t = 8.0;
//    t[1] = *t / 4.0;
//    t++;
//    t[-1] = *t / 2.0;
//    printf("%f\n",*t);
//    free(--t);
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//struct S {
//    char S[8];
//};
//int main(void) {
//    struct S S = { 'a', 'b', 'c', 'd' };
//    printf("%d", sizeof(S.S) - strlen(S.S) + S.S[4]);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//struct S {
//    char *S;
//};
//
//int main(void) {
//    struct S *S = (struct S *) malloc(sizeof(struct S));
//    S -> S = "123\0""45678";
//    printf("%d", strlen(S -> S + 5) + S -> S[3]);
//    free(S);
//    return 0;
//}

//#include <stdio.h>
//struct S {
//    int Var;
//    struct S *Str;
//};
//int main(void) {
//    struct S S[] = { { 8, NULL }, { 4, &S[0] }, { 2, &S[1] } };
//    printf("%d", S[2].Str->Str->Var);
//    return 0;
//}

//#include <stdio.h>
//int fun(int *t) {
//    return *(t + 3);
//}
//int main(void) {
//    int arr[] = { 3, 2, 1, 0 };
//    printf("%d\n", fun(arr - 2));
//    return 0;
//}

//#include <stdio.h>
//float f(float v) {
//    v = v / 2.0;
//    return v + v;
//}
//int main(void) {
//    float x = 4;
//    f(x);
//    printf("%f",x);
//    return 0;
//}

//#include <stdio.h>
//char *f(char *p) {
//    return p += 2;
//}
//char *g(char *p) {
//    return --p;
//}
//int main(void) {
//    char *s = "ABCDEFGHIJ";
//    char  p = *f(g(f(s + 1)));
//    printf("%d",p - 'A');
//    return 0;
//}

//#include <stdio.h>
//struct S {
//    int S[3];
//};
//void f(struct S S) {
//    S.S[0] = S.S[1] + S.S[2] - 4;
//}
//int main(void) {
//    struct S S = { { 1, 4, 2 } };
//    f(S);
//    printf("%d",S.S[1] * S.S[0]);
//    return 0;
//}


//#include <stdio.h>
//struct S {
//    int S[3];
//};
//void f(struct S *S) {
//    S->S[2] = 6 * S->S[0] + S -> S[1];
//}
//int main(void) {
//    struct S S = { { 1, 2 } }, *P = &S;
//    f(P);
//    printf("%d",S.S[2] / S.S[0]);
//    return 0;
//}

//#include <stdio.h>
//int main(void) {
//    char s[20] = "?";
//    FILE *f = fopen("fopen","w");
//    int i = fputs("789",f);
//    fclose(f);
//    f = fopen("fopen","r");
//    fgets(s + 1,3,f);
//    printf("%c\n", s[2] - s[3]);
//    fclose(f);
//    return 0;
//}

#include <stdio.h>
#define  ONE    1
#define  TWO 	ONE + ONE
int main(void) {
    int i = 2;
    i = i - 2 * TWO;
    printf("%d\n", i);
    return 0;
}































//#include <stdio.h>
//
//int main(void) {
//
//    int i,j,k, value, square;
//    double f;
//
//    i = 13;
//    j = 5;
//    f = 0.3;
//
//    printf("gimme a number:\n");
//    scanf("%d", &value);
//    square = value * value;
//    printf("%d\n",square);
//
//    k = i%j;
//
//    if(f==0.3) {
//        printf("%d\n",k);
//    }
//
//    return 0;
//}