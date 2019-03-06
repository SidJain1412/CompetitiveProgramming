a            #include <iostream>
            #include <stdlib.h>
            using namespace std;

            //STRUCTURE MODULE
            struct node
            {
                int data;
                node* next;
            };


            class LinkedList
            {
            private:
                node* head;
            public:
                LinkedList()
                {
                head=NULL;
                }

                //FUNCTION TO INSERT NODE AT THE START OF THE LINKED LIST
                void insert_node_at_beg(int data)
                {

                    node* newnode = new node;
                    newnode->data = data;
                    newnode->next=head;
                    head=newnode;
                }

                //FUNCTION TO INSERT NODE AT THE END OF THE LINKED LIST
                void insert_node_at_end(int data)
                {
                    node* newnode = new node;
                    newnode->data =data;
                    newnode->next=NULL;
                    if(head==NULL)
                    {
                        head=newnode;
                        return;
                    }
                    node *ptr = head;
                    while(ptr->next!=NULL)
                    {
                        ptr=ptr->next;
                    }
                    ptr->next=newnode;
                }




                //FUNCTION TO A NODE WHEN PARTICULAR KEY IS FOUND
                void insert_value_at_key(int data,int key)
                {
                    node* newnode = new node;
                    newnode->data=data;
                    newnode->next =NULL;
                    node *ptr =head;
                    while(ptr!=NULL)
                    {
                        if(ptr->data==key)
                        {
                            newnode->next = ptr->next;
                            ptr->next=newnode;
                            break;
                        }
                        else{
                            ptr=ptr->next;
                        }
                    }
                    if(ptr==NULL)
                    {
                        cout<<"ELEMENT NOT FOUND";
                    }

                }


                //THIS FUNCTION CAN BE USED TO INSERT VALUE AT ANY GIVEN POSITION
                void insert_at_position(int key,int data)
                {
                    node* previous_node;
                    node* current_node;
                    node* newnode = new node;
                    newnode->data=data;
                    int curr_position=0;

                    current_node=head;
                    if(head!=NULL)
                    {
                        while(current_node->next!=NULL && curr_position!=key)
                        {
                            previous_node=current_node;
                            current_node=current_node->next;
                            curr_position++;
                        }

                        if(key==0)
                        {
                            insert_node_at_beg(data);
                        }
                        else if(current_node->next==NULL && key==curr_position+1)
                        {
                                insert_node_at_end(data);
                        }
                        else if(key > curr_position+1)
                            return;
                            else{
                                previous_node->next=newnode;
                                newnode->next=current_node;
                            }

                    }
                    else
                    {
                        head=newnode;
                        newnode->next=NULL;
                    }

                }

                //FUNCTION TO DELETE NODE AT START
                void delete_at_beg()
                {
                    node* temporary =head;
                    head=temporary->next;
                    free(temporary);

                }


                //FUNCTION TO DELETE NODE AT END

                 void delete_at_end()
                {
                    node* temp =head;
                    node* prev;
                    while(temp->next!=NULL)
                    {
                        prev=temp;
                        temp=temp->next;
                    }
                    prev->next=NULL;
                    free(temp);


                }

                //DELETE AT ANY GIVEN POSITION
                 void delete_At_Given_position(int key)
                {
                    node* prev;
                    node* current=head;
                    while(key)
                    {
                        key--;
                        prev=current;
                        current=current->next;
                    }
                    prev->next=current->next;
                    free(current);
                }

                //DELETE NODE BY FINDING THE VALUE
                 void del_at_givenkey(int key)
                {
                    node* pointer_node = head;
                    node* prev;

                    if(pointer_node!=NULL && pointer_node->data==key)
                    {
                        head=pointer_node->next;
                        free(pointer_node);
                        return;
                    }
                    while(pointer_node!=NULL && pointer_node->data!=key)
                    {
                        prev=pointer_node;
                        pointer_node=pointer_node->next;
                    }
                    if(pointer_node==NULL)
                    {
                        cout<<"ELEMENT NOT FOUND";
                        return;
                    }
                    prev->next=pointer_node->next;
                    free(pointer_node);


                }




                // FUNCTION TO CHECK IF THE VALUE EXIST
                 void searchValue(int key)
                {
                    node* ptr=head;
                    int index=0;
                    while(ptr!=NULL)
                    {
                        if(ptr->data==key)
                        {
                            cout<<"yes";
                            return;
                        }
                        ptr=ptr->next;

                    }
                    cout<<"no";

                }
                //REVERSE THE WHOLE LINKED LIST -METHOD 1( MORE TO COME )
                void reversing()
                {
                    node *curr=head;
                    node *prev =NULL;
                    node *next=NULL;
                    while(curr!=NULL)
                    {
                        next=curr->next;
                        curr->next=prev;
                        prev=curr;
                        curr=next;
                    }
                   head=prev;


                }


                //REVERSE THE FIRST K ELEMENTS OF LINKED LIST
                void reverse_after_k_elements(int k)
                {

                    node* temp=head;
                    int count =1;
                    while(count<k)
                    {
                        temp=temp->next;
                        count++;
                    }
                    node* break_point = temp->next;
                    temp->next=NULL;
                    node* curr=head;
                    node* prev=NULL;
                    node* next=NULL;
                    while(curr!=NULL)
                    {
                       next=curr->next;
                       curr->next=prev;
                       prev=curr;
                       curr=next;
                    }
                    head=prev;
                    curr=head;

                    while(curr->next!=NULL)
                    {
                        curr=curr->next;
                    }
                    curr->next=break_point;


                }

                /*IF in the main function size is not provided
                this can be helpful*/
                void getsize()
                {
                    if(head==NULL)
                    {
                        cout<<"NO ELEMENT";
                    }
                    int counter=0;
                    node* ptr=head;
                    while(ptr!=NULL)
                    {
                        ptr=ptr->next;
                        counter++;
                    }
                    cout<<"No of elements"<<counter;
                }




                //AS THE NAME SAYS:-p

                void remove_the_duplicates()
                {
                    node* pointer_node =head;
                    node* secondary_pointer_node = NULL;
                    node* duplicate_node =NULL;
                        while(pointer_node!=NULL)
                        {
                            secondary_pointer_node=pointer_node;
                            while(secondary_pointer_node->next!=NULL)
                            {

                            if(pointer_node->data==secondary_pointer_node->next->data)
                            {
                                duplicate_node=secondary_pointer_node->next;
                                secondary_pointer_node->next=secondary_pointer_node->next->next;
                                delete duplicate_node;
                            }
                            else
                            {
                                secondary_pointer_node=secondary_pointer_node->next;
                            }
                        }
                        pointer_node=pointer_node->next;

                }
                }



                //MAKE A LOOP

                void makeloop(int k)
                {
                    node* pointer_node =head;
                    int count=1;
                    while(count<k)
                    {
                        pointer_node=pointer_node->next;
                        count++;
                    }

                    node* joining_point=pointer_node;

                    while(pointer_node->next!=NULL)
                    {
                        pointer_node=pointer_node->next;
                    }
                    pointer_node->next=joining_point;
                }




               //DISPLAY
                 void display()
                {
                    node *ptr=head;
                    while(ptr!=NULL)
                    {
                        cout<<ptr->data<<" ";
                        ptr=ptr->next;
                    }
                    cout<<endl;
                }



            };
            // CREATE OBJECTS USE FUNCTIONS ACCORDINGLY
            int main()
            {

                LinkedList object;
                int n,data;
                cin>>n;
                while(n--)
                {
                    cin>>data;
                    object.insert_node_at_beg(data);
                }
                object.display();
                int k;
                cin>>k;
                object.del_at_givenkey(k);
                //object.reverse_after_k_elements(k);
                //THE ABOVE METHOD IS USE TO REVERSE AFTER K ELEMENTS
                //object.remove_the_duplicates();
                object.display();
                //object.delete_at_start();
                //object.display();

                object.delete_at_end();
                object.display();


                return 0;
            }
