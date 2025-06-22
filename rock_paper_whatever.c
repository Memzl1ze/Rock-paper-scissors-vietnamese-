#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu(){
    printf("______________________________\n");
    printf("Keo bua bao: \n");
    printf("1.Keo\n2.Bua\n3.Bao\n");
    printf("0.Ket thuc tro choi\n");
    printf("______________________________\n");
}


int computer_computer_choices(){
    srand(time(0));
    int value = rand() % 3 + 1;
    if(value == 1){
        printf("Lua chon cua may tinh la: keo\n");

    }else if( value == 2){
        printf("Lua chon cua may tinh la: bua\n");
    }else{
        printf("Lua chon cua may tinh la: bao\n");
    }
    return value;
}

int main(){
    int decision;
    while(1){
    menu();
    printf("Lua chon cua ban la: ");
    scanf("%d",&decision );
    int result = computer_computer_choices();
    switch(decision){
        case 1:
            if(result == 2){
                printf("Ban thua\n");
                break;
            }else if(result == 3){
                printf("Ban thang\n");
                break;
            }else{
                printf("Hoa\n");
                break;
            }
        case 2:
            if(result == 3){
                printf("Ban thua\n");
                break;
            }else if(result == 1){
                printf("Ban thang\n");
                break;
            }else{
                printf("Hoa\n");
                break;
            }
        case 3:
            if(result == 1){
                printf("Ban thua\n");
                break;
            }else if(result == 2){
                printf("Ban thang\n");
                break;
            }else{
                printf("Hoa\n");
                break;
            }
        case 0: 
            return 0;
        default:
            printf("Lua chon khong hop le, hay vui long chon lai\n");
            break;
        }
    }
}
