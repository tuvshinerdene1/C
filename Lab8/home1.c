#include <stdio.h>
#include <math.h>
#include<string.h>

struct Student {
    char fname[20], lname[20], id[10];
    float golch;
};
typedef struct Student Student;

void read_students(Student a[], int n);
void print_students(Student a[], int n);
void print(Student st);
int search_by_fname(Student a[], int n, char fname[]);
int search_by_lname(Student a[], int n, char lname[]);
int search_by_id(Student a[], int n, char id[]);
int search_by_golch(Student a[], int n , float golch);
void sort_by_golch(Student a[], int n);

int main(){
    Student a[100];
    int n, cmd, idx;
    printf("Oyutnii too: ");
    scanf("%d", &n);
    read_students(a, n);
    print_students(a, n);
    char fname[20], lname[20],  id[20];
    float golch;
    while(1){
        printf("1: Nereer xaix, 2: Ovgoor xaix, 3: ID-aar xaix, 4: Golchoor xaix,5:Golchoor erembelex, 6: xevlex, 7: Garax\n");
        scanf("%d", &cmd);
        if(cmd ==1){
            printf("Haih ner: ");
            scanf("%s", fname);
            idx = search_by_fname(a, n, fname);
            if(idx == -1){
                printf("Oyutan oldsongui\n");
            }
            else{
                print(a[idx]);
            }
        } 
        else if (cmd ==2){
            printf("Haih ovog: ");
            scanf("%s", lname);
            idx = search_by_lname(a, n, lname);
            if(idx == -1){
                printf("Oyutan oldsongui\n");
            }
            else{
                print(a[idx]);
            }
        }
        else if(cmd == 3){
            printf("Haih id: ");
            scanf("%s", id);
            idx = search_by_id(a, n, id);
            if(idx == -1){
                printf("Oyutan oldsongui\n");
            }
            else{
                print(a[idx]);
            }
        }
        else if(cmd == 4){
            printf("Haih golch: ");
            scanf("%f", &golch);
            idx = search_by_golch(a, n, golch);
            if(idx == -1){
                printf("Oyutan oldsongui\n");
            }
            else{
                print(a[idx]);
            }
        }
        else if(cmd == 5){
            sort_by_golch(a,n);
        }
        else if(cmd == 6){
            print_students(a,n);
        }
        else 
            break;
    }
    return 0;
}

void print(Student st){
    printf("Ner : %s\n", st.fname);
    printf("Ovog : %s\n", st.lname);
    printf("Id : %s\n", st.id);
    printf("Golch : %f\n", st.golch);
}

void read_students(Student a[], int n){
    for(int i = 0 ; i < n ; i++){
        
        printf("FName: "); scanf("%s", (a+i)->fname);
        printf("LName: "); scanf("%s", (a+i)->lname);
        printf("ID : "); scanf("%s", (a+i)->id);
        printf("Golch: "); scanf("%f", &(a+i)->golch);
    }
}
void print_students(Student a[], int n){
    for(int i = 0 ; i < n ; i++){
        printf("(%d)\n", i+1);
        print(a[i]);
    }
}
int search_by_fname(Student a[], int n, char fname[]){
    
    for(int i = 0 ; i < n ; i++){
        if((strcmp(a[i].fname , fname))==0){
            return i;
        }
    }
    return -1;
}
int search_by_lname(Student a[], int n, char lname[]){
    int index = -1;
    for(int i = 0 ; i < n ; i++){
        if(strcmp(a[i].lname, lname)==0){
            index = i;
        }
    }
    return index;
}
int search_by_id(Student a[], int n, char id[]){
    int index = -1;
    for(int i = 0 ; i < n ; i++){
        if(strcmp(a[i].id,id)==0){
            index = i;
        }
    }
    return index;
}
int search_by_golch(Student a[], int n , float golch){
    int index = -1;
    for(int i = 0 ; i < n ; i++){
        if(a[i].golch==golch){
            index = i;
        }
    }
    return index;
}
void sort_by_golch(Student a[], int n){
    for(int i = 0; i< n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].golch<a[j].golch){
                Student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
        }
    }
    }
}