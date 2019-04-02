#include <stdio.h>
#include <stdlib.h>
struct candidate{
char name[100];
int votes;
char party[10];
}candidate1, candidate2;
int main() {
char name[50];
int marks,i,n;
FILE *fptr;
fptr=(fopen("test.txt","w"));
if(fptr==NULL) {
printf("Error!");
exit(1);
}
printf("For Candidate1\nEnter name: ");
scanf("%s",candidate1.name);
printf("Enter votes: ");
scanf("%d",&candidate1.votes);
printf("Enter party: ");
scanf("%s",candidate1.party);
fprintf(fptr,"\nName: %s \nMarks: %d \nParty: %s \n",candidate1.name,candidate1.votes,candidate1.party);
printf("For Candidate2\nEnter name: ");
scanf("%s",candidate2.name);
printf("Enter votes: ");
scanf("%d",&candidate2.votes);
printf("Enter party: ");
scanf("%s",candidate2.party);
fprintf(fptr,"\nName: %s \nMarks=%d \nParty: %s\n",candidate2.name,candidate2.votes,candidate2.party);
if(candidate1.votes>candidate2.votes)
printf("%d %s\n",candidate1.votes,candidate1.name);
else
printf("%d %s\n",candidate2.votes,candidate2.name);
fclose(fptr);
return 0;
}
