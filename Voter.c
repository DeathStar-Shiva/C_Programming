//Voting Rights
#include<stdio.h>

void main()
{
    int age, id;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    if (age>=18)
    {
        if (age>=65)
        {
            printf("\nNo need to stand in Queue");
            printf("\n1. Voter ID\n2. Passport\n3. Driving License\n4. Other ID proofs");
            printf("\nEnter your ID Proof: ");
            scanf("%d", &id);
            (id==1 || id==2 || id==3) ? printf("\nYou are allowed to vote") : printf("\nYou are not allowed to vote (Lack of ID Proof !)");
        }
        else
        {
            printf("\nYou are requested to stand in Queue");
            printf("\n1. Voter ID\n2. Passport\n3. Driving License\n4. Other ID proofs");
            printf("\nEnter your ID Proof: ");
            scanf("%d", &id);
            (id==1 || id==2 || id==3) ? printf("\nYou are allowed to vote") : printf("\nYou are not allowed to vote (Lack of ID Proof !)");
        }
    }
    else
    printf("\nYou are not allowed to Vote (Age Restriction !)");
}