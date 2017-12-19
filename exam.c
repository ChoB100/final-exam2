#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct player{
    int x;
    int y;
}p;
void start();
void map1();
void st1();
int main(){
    int num;
    printf("1.start\n2.exit\npick: ");
    scanf("%d",&num);
    if(num==1){
        st1();
    }
    else if(num == 2){
        return 0;
    }

}
void map1(char map[7][7]){
    int i,j;
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(i==0 || j== 0 || i==6 || j==6){
                map[i][j]='#';
            }
            else{
                map[i][j]=' ';
                }
        }
    }
    map[2][2]='#',map[3][3]='#';//장애물
}


void st1(){
    char map[7][7];
    int i,j;
    char cmd;
    map1(map);
    p.x=1,p.y=1;
    map[p.x][p.y]='P';
    while(1){
        system("clear");
        map[p.x][p.y]='P';
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("%2c",map[i][j]);
        }
        printf("\n");
    }//맵출력
        cmd=getchar();
        switch(cmd){
            case 'w':
            if(p.x != 1 && map[p.x-1][p.y] != '#'){
                map[p.x][p.y]=' ';
            p.x --;
            }
            case 'a':
            if(p.y != 1 && map[p.x][p.y-1] != '#'){
                map[p.x][p.y]=' ';
            p.y --;
            }
            case 's':
            if(p.x != 5 && map[p.x+1][p.y] != '#'){
                map[p.x][p.y]=' ';
            p.x ++;
            }
            case 'd':
            if(p.y !=5 && map[p.x][p.y+1] != '#'){
                map[p.x][p.y]=' ';
            p.y ++;
            }
        }//움직임
        
    }//while끝
}//st1종료

