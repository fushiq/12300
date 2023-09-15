#include <stdio.h>
#include<string.h>
#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */

char *match( char *s, char ch1, char ch2 ){
	int m = strlen(s);
	char *k='\0';
	int l=1;//判断有没有找到第一个ch1，没有找到l为1，找到的话l为0
	for(int i=0;i<m;++i)
    {
		if(s[i]==ch1)
        {
			l=0;//找到了
			k=&s[i];//第一个ch1的地址
			int j;
			for(j=i;s[j]!=ch2&&j<m;++j){//从第一个开始到等于出就结束的位置，所以等于出的那个字符是没有输出
				printf("%c",s[j]);//输出两个字母之间的字符
			}
			if(s[j]==ch2)//上一个循环没有输出ch2，如果和ch2相等就输出
			printf("%c\n",s[j]);
			else printf("\n");//上一个循环结束是因为j=m，那么就是结束后的是s[j]!=ch2，这个时候就换行就好了
		}

        if(l==0) break;//输出完成，结束运行，不必进行下一次i的循环，这样如果有两个i，我们只需要取前面的一个i，后面的i没有进行循环的意义了
	}//i的循环在这里结束

    if(l==1) {// ch1找不到，l就会为1
	printf("\n");//
        return s+strlen(s);
	}

    return k;
}


