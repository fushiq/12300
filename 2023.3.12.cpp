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

/* ��Ĵ��뽫��Ƕ������ */

char *match( char *s, char ch1, char ch2 ){
	int m = strlen(s);
	char *k='\0';
	int l=1;//�ж���û���ҵ���һ��ch1��û���ҵ�lΪ1���ҵ��Ļ�lΪ0
	for(int i=0;i<m;++i)
    {
		if(s[i]==ch1)
        {
			l=0;//�ҵ���
			k=&s[i];//��һ��ch1�ĵ�ַ
			int j;
			for(j=i;s[j]!=ch2&&j<m;++j){//�ӵ�һ����ʼ�����ڳ��ͽ�����λ�ã����Ե��ڳ����Ǹ��ַ���û�����
				printf("%c",s[j]);//���������ĸ֮����ַ�
			}
			if(s[j]==ch2)//��һ��ѭ��û�����ch2�������ch2��Ⱦ����
			printf("%c\n",s[j]);
			else printf("\n");//��һ��ѭ����������Ϊj=m����ô���ǽ��������s[j]!=ch2�����ʱ��ͻ��оͺ���
		}

        if(l==0) break;//�����ɣ��������У����ؽ�����һ��i��ѭ�����������������i������ֻ��Ҫȡǰ���һ��i�������iû�н���ѭ����������
	}//i��ѭ�����������

    if(l==1) {// ch1�Ҳ�����l�ͻ�Ϊ1
	printf("\n");//
        return s+strlen(s);
	}

    return k;
}


