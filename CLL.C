#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* head = NULL,*cur,*temp,*temp1;
struct node* create(){
    int n;
    printf("Give the number of nodes\n");
    scanf("%d",&n);
    while(n--){
        cur = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&cur->data);
        cur->link = NULL;
        if(head == NULL){
            cur->link = cur;
            head = cur;
        }
        else{
            temp = head;
            while(temp->link != head){
                temp = temp->link;
            }
            temp->link = cur;
            cur->link = head;
        }
    }
    return head;
}
struct node* insert_begin(struct node* head,int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    cur->link = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link= cur;
    head = cur;
    return head;
}
struct node* insert_end(struct node* head,int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    temp = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link= cur;
    cur->link = head;
    return head;
}
struct node*insert_pos(int pos, int ele){
    int c= 1;
    cur= (struct node*)malloc(sizeof(struct node));
    cur-> data = ele;
    temp= head;
    while(c < pos-1){
        temp= temp-> link;
        c++;
    }
    cur-> link = temp-> link;
    temp-> link = cur;
    return head;
    printf("\n");
}
struct node*del_begin(struct node*head){
    temp= head;
    temp1= head;
    while(temp->link != head){
        temp = temp->link;
    }
    printf("Deleted element is %d\n", temp1-> data);
    head = temp1->link;
    temp->link = head;
    free(temp1);
    return head;
}
struct node*del_end(struct node*head){
    temp= head;
    while(temp-> link != head){
        temp1= temp;
        temp= temp-> link;
    }
    temp1-> link = head;
    printf("Deleted element is %d\n", temp-> data);
    free(temp);
    return head;
}
struct node*del_pos(struct node*head, int pos){
    temp= head;
    int c= 1;
    while(c < pos){
        temp1= temp;
        temp= temp-> link;
        c++;
    }
    temp1-> link = temp-> link;
    printf("Deleted element is %d\n", temp-> data);
    free(temp);
    return head;
    printf("\n");
};
void display(struct node* head){
    temp= head;
    do{  
        printf("%d ", temp->data);  
        temp = temp->link;  
        }while(temp != head);  
        printf("\n");  
}
void reverse_display(struct node*head){
    if(head->link == temp){
        printf("%d ", head->data);
    }
    if(head->link != temp){
        reverse_display(head->link);
        printf("%d ", head-> data);
    }
} 
int main(){
    int ch, pos, ele, key;
    while(1){
        printf("\n1-create\n2-insert at begin\n3-insert at end\n4-insert at pos\n5-delete at begin\n6-delete at end\n7-delete at pos\n8- display\n9-reverse_display\n10-exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                head = create();
                break;
            case 2:
                scanf("%d", &ele);
                head= insert_begin(head,ele);
                break;
            case 3:
                scanf("%d", &ele);
                head= insert_end(head,ele);
                break;
            case 4:
                printf("Enter position: ");
                scanf("%d", &pos);
                printf("Enter element: ");
                scanf("%d", &ele);
                head= insert_pos(pos,ele);
                break;
            case 5:
                head= del_begin(head);
                break;
            case 6:
                head = del_end(head);
                break;
            case 7:
                printf("Enter position: ");
                scanf("%d", &pos);
                head= del_pos(head,pos);
                break;
            case 8:
                display(head);
                break;
            case 9:
                temp = head;
                reverse_display(head);
                break;
            case 10:
                exit(0);
        }
    }
}
