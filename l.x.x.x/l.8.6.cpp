#include<stdio.h>
struct Key{
	char * keyword;
	int keyno;
};

int main(void){
	struct Key kd[]={{"are",123},{"my",456},{"you",789}};
	struct Key *p;
	int a;
	char chr;
	
	p=kd;
	chr=*p->keyword;
	printf("p=%d,chr=%c(adr=%d)\n",p,chr,p->keyword);
	
	chr=*p->keyword++;
	printf("p=%d,chr=%c(adr=%d)\n",p,chr,p->keyword);
	
	chr=(*p->keyword)++;
	printf("p=%d,chr=%c(adr=%d)\n",p,chr,p->keyword);
	
	chr=*p++->keyword;
	printf("p=%d,chr=%c(adr=%d)\n",p,chr,p->keyword);
	
	chr=*++p->keyword;
	printf("p=%d,chr=%c(adr=%d)\n",p,chr,p->keyword);
	
	
	return 0;
}
