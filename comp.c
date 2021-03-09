#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int isKeyword(char mot[]){			// insere des mots a la table de 30 lign et 10 colonnes:

		char keywords[30][10] = {"debut","fin","break","case","char","const","continue","default",
								"do","else","sizeof","static","struct","switch","void"};
											int i, sign = 0;
													for(i = 0; i < 30; ++i)
														{ 
													//fonction de comparison:
														if(strcmp(keywords[i], mot) == 0){													
													//si change l'etat il exist un "keyword"
														sign = 1; 
														
														break;
														}
													else sign=0;
													break;	
												}	
	return sign; 
					}
 
int main(){
	char textG, mot[15], operators[] = "+-*/%=",separ[]=".,':()|[]{};",num[]="0123456789";
	
	FILE *fp;
	int i,j=0,m=0;
	// open file:
	fp = fopen("gram.txt","r");
	//si fp==
	if(fp == NULL){
		printf("error while opening the file\n");
		exit(0);
	}
	while((textG = fgetc(fp)) != EOF){  //end of file:
											
											//loop to fin operator:
   					for(i = 1; i <= 6; ++i){
   										if(textG == operators[i])
   										printf("%c is operator\n", textG);
   											}
   					for(i = 1; i <= 12; ++i){
   										if(textG == separ[i])
   										printf("%c is separateur\n", textG);
   											}
					for(i = 1; i <= 10; ++i){
   										if(textG == num[i])
   										printf("%c is Number\n", textG);
   											}
											   							   						
											  
   	if(isalpha(textG))
		 		  {
   					mot[j++] = textG;
   					}
   					
   		else if((textG == ' ' || textG == '\n') && (j != 0)){
   				mot[j] = '\0';
   				j = 0;
   				   				
   				if(isKeyword(mot) == 1)
   					printf("%s is keyword\n", mot);
   				else
   					printf("%s is Identificateur\n", mot);
   		}
   		
									}
	fclose(fp);//close file
	return 0;
}
