#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

//STRUCTURE
typedef struct TokenizerT {
	int a;
	int b;
	int c;
	char currchar;
	char savechar[100];
	char saving[100];
	char *string;
}Tokenizer;
Tokenizer *PTR;


//FUNCTIONS
void octal1()
{
PTR->a = 0;
PTR->currchar = PTR->string[PTR->a];
PTR->b = 0;
PTR->b = 1;
if(PTR->currchar == '0' && (PTR->string[2] && PTR->string[3] != '8'||'9') && PTR->string[1] != 'x' ){
while(PTR->string[PTR->a] != ' ' && PTR->string[1] != 'x')
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = OCTAL\n");

}
}
void octal2()
{
if((PTR->string[5] == '0') && (PTR->string[7] != ('8'||'9')) && (PTR->string[8] != ('8'||'9')) && (PTR->string[6] != ('8'||'9')) && (PTR->string[6] != 'x') ){
PTR->a = 5;
while(PTR->string[PTR->a] != ' ' && PTR->string[6] != 'x' && PTR->a <= 8)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = OCTAL\n");

}
}
void octal3()
{
if((PTR->string[10] == '0') && (PTR->string[11] != ('8'||'9')) && (PTR->string[12] != ('8'||'9')) && (PTR->string[13] != ('8'||'9')) && (PTR->string[11] != 'x') ){
PTR->a = 10;
while(PTR->string[PTR->a] != ' ' && PTR->string[11] != 'x' && PTR->a <= 13)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = OCTAL\n");

}
}
void octal4()
{
if((PTR->string[15] == '0') && (PTR->string[16] != ('8'||'9')) && (PTR->string[17] != ('8'||'9')) && (PTR->string[18] != ('8'||'9')) && (PTR->string[16] != 'x') ){
PTR->a = 15;
while(PTR->string[PTR->a] != ' ' && PTR->string[16] != 'x' && PTR->a <= 18)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = OCTAL\n");

}
}
void hexa1()
{
if((PTR->string[0] == '0') && (PTR->string[1] == 'x') ){
PTR->a = 0;
while(PTR->string[PTR->a] != ' ' && PTR->string[1] == 'x' && PTR->a <= 3)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = HEXADECIMAL\n");

}
}
void hexa2()
{
if((PTR->string[5] == '0') && (PTR->string[6] == 'x') ){
PTR->a = 5;
while(PTR->string[PTR->a] != ' ' && PTR->string[6] == 'x' && PTR->a <= 8)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = HEXADECIMAL\n");

}
}
void hexa3()
{
if((PTR->string[10] == '0') && (PTR->string[11] == 'x') ){
PTR->a = 10;
while(PTR->string[PTR->a] != ' ' && PTR->string[11] == 'x' && PTR->a <= 13)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = HEXADECIMAL\n");

}
}
void hexa4()
{
if((PTR->string[15] == '0') && (PTR->string[16] == 'x') ){
PTR->a = 15;
while(PTR->string[PTR->a] != ' ' && PTR->string[16] == 'x' && PTR->a <= 18)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = HEXADECIMAL\n");

}
}
void dec1()
{
if((PTR->string[0] != '0') && (isdigit(PTR->string[1])) && (isdigit(PTR->string[2])) && (isdigit(PTR->string[3]))){
PTR->a = 0;
while(PTR->string[PTR->a] != ' ' && PTR->a <= 18)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = DECIMAL\n");

}
}

void dec2()
{
if((PTR->string[5] != '0') && (isdigit(PTR->string[6])) && (isdigit(PTR->string[7])) && (isdigit(PTR->string[8])) ){
PTR->a = 5;
while(PTR->string[PTR->a] != ' ' && PTR->a <= 8)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = DECIMAL\n");

}
}
void dec3()
{
if((PTR->string[10] != '0') && (isdigit(PTR->string[11])) && (isdigit(PTR->string[12])) && (isdigit(PTR->string[13])) ){
PTR->a = 10;
while(PTR->string[PTR->a] != ' ' && PTR->a <= 13)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = DECIMAL\n");

}
}
void dec4()
{
if((PTR->string[15] != '0') && (isdigit(PTR->string[16])) && (isdigit(PTR->string[17])) && (isdigit(PTR->string[18])) ){
PTR->a = 15;
while(PTR->string[PTR->a] != ' ' && PTR->a <= 18)
{
printf("%c",PTR->string[PTR->a]);
PTR->a++;
}
printf(" = DECIMAL\n");

}
}
void savebuffer()
{
octal1();
octal2();
octal3();
octal4();
hexa1();
hexa2();
hexa3();
hexa4();
dec1();
dec2();
dec3();
dec4();

}


//TKCREATE
Tokenizer *TKCreate( char *string1 ) {
	printf("\n");
	//Creating memory
	PTR = (struct TokenizerT *)malloc(strlen(string1)+1);
	if(PTR == NULL)printf("MEMORY ALLOCATION ERROR\n");
	else printf("Memory Allocated\n");

PTR->string = string1; 
  return NULL;
}

//TKGETNEXTTOKEN
char *TKGetNextToken( Tokenizer * PTR ) {
	//Printing character by character
		//state1(PTR->string);
	
	for(PTR->a = 0; PTR->a<= strlen(PTR->string);PTR->a++)
			{
				PTR->string[PTR->a] = tolower(PTR->string[PTR->a]);
				PTR->currchar = PTR->string[PTR->a];	
				printf("%c ",PTR->string[PTR->a]);
			}
	printf("\n");
	savebuffer();	
  return NULL;
}

//TKDESTROY
void TKDestroy( Tokenizer *PTR ) {
	free(PTR);
	printf("\nMemory freed\n");

}

//MAIN FUNCTION
int main(int argc, char *argv[]){

	char *string1 = argv[1];
	printf("%s",string1);

		//Create memory
		TKCreate(string1);

		//GetNextToken
		TKGetNextToken(PTR);

		//Destroy memory
		TKDestroy(PTR);

		return 0;
}
