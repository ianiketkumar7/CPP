#include<stdio.h>


}
int main()
{
    int age;
    int AniketSwing = 90;
    int UserSwing;

    scanf("%d", &UserSwing);
    printf("\n enter age one: ");
    scanf("%d",&age);

    int ans = compareSwing(AniketSwing, UserSwing);
    printf("%d",ans);

    VoteCheck(age);

    printf("\n enter age two: ");
    scanf("%d",&age);
    VoteCheck(age);

}