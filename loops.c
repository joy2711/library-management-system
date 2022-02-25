#include <stdlib.h>
#include <windows.h>

int menu();
void execute_action (int action);
int main()
{
    printf("welcome to county library");
    execute_action(menu());
    return 0;
}
    int menu()
    {
    int action;
    do{

        printf("select action\n");
        printf("1. Add user\n");
        printf("2.view user\n");
        printf("3. Add Book\n");
        printf("4. Exit\n");
        printf("Select action(1-4): ");
        scanf("%d",&action);

        if (action < 1 || action > 4)
            {
            printf("Invalid action. Try again\n");
            system("cls");
            }

    } while(action < 1 || action > 4);
    return action;
    }

    void execute_action(int action)
    {
          printf("the action is %d", action);

     return action;

}
