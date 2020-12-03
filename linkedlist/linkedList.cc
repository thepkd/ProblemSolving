class Node
{
	  private:
		      int val;
		          Node* prev;
			      Node* next;

			          Node() {next=NULL; prev=NULL;}
				      Node(int value) {val=value;next=NULL; prev=NULL;}
				          Node(int value, Node*nextN, Node* prevN) {val=value; next=nextN; prev=prevN;}
					      void setNext(Node* ptr) {next=ptr;}
					          void setPrev(Node* ptr) {prev=ptr;}
						      int retVal() {return val;}
						          Node* retNext() {return next;}
							      Node* retPrev() {return prev;}
							          friend class MyLinkedList;
};

class MyLinkedList {
	private:
		    Node* head;
	public:
		        /** Initialize your data structure here. */
		        MyLinkedList() {
				        head= NULL;        
					    }
			    
			    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
			    int get(int index) {
				            
				            int counter=0;
					            Node* iter = head;
						            while(counter<index)
								            {
										                if(iter->next==NULL)
													                return -1;
												            iter = iter->next;
													                counter++;
															        }
							            return iter->val;
								        }
			        
			        /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
			        void addAtHead(int val) {
					        Node* newnode = new Node(val);
						        if(head!=NULL)
								        {
										        head->prev= newnode;
											        newnode->next = head;
												        }
							        else
									        {
											            newnode->next = NULL;
												            }
								        head= newnode;
									    }
				    
				    /** Append a node of value val to the last element of the linked list. */
				    void addAtTail(int val) {
					            
					            Node* newnode = new Node(val);
						            Node* temp = head;
							            if(head==NULL)
									            {
											                head = newnode;
													            return;
														            }
								            while(temp->next!=NULL)
										                temp=temp->next;
									            temp->next = newnode;
										            newnode->prev= temp;
											        }
				        
				        /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
				        void addAtIndex(int index, int val) {
						       
						        int counter=0;
							        if(head==NULL && index>0) return;
								        if(index==0)
										        {
												            addAtHead(val);
													                return;
															        }
									            
									        
									        Node* p1=head; Node* p2=head->next;
										        
										            
										        while(p2 !=NULL)
												        {
														            if(counter==index-1)
																                {
																			                Node* newnode = new Node(val);
																					                newnode->next = p2;
																							                newnode->prev = p1;
																									                p1->next = newnode;
																											                p2->prev = newnode;
																													                return;
																															            }
															                counter++;
																	            p1=p2;
																		                p2=p2->next;
																				        }
											        if(counter==index-1)
													            addAtTail(val);
												        
												    return;
												        }
					    
					    /** Delete the index-th node in the linked list, if the index is valid. */
					    void deleteAtIndex(int index) {
						            
						            if(index==0 && head->next==NULL)
								            {
										                head=NULL;
												            return;
													            }
							            int counter=0;
								            Node* p1,*p2;
									            p1=head; p2=head->next;
										            if(index==0)
												            {
														                head->next->prev = NULL;
																            head= head->next;
																	                return;
																			        }
											                
											            while(p2!=NULL)
													            {
															                if(counter==index-1)
																		            {
																				                    if(p2->next==NULL)
																							                    {
																										                     p1->next =NULL;
																												                         return;
																															                 }
																						                    else
																									                    {
																												                    p2->next->prev = p1;
																														                    p1->next = p2->next;
																																                    return;
																																		                    }
																								                }
																	            counter++;
																		                p1=p2;
																				            p2=p2->next;
																					            }
												            
												            return;
													        }
					        void printLinkedList() 
							    {
								            Node* temp=head;
									            while(temp!=NULL)
											            {
													                cout<< temp->val <<endl;
															            temp=temp->next;
																            }
										        }
};


/**
 *  * Your MyLinkedList object will be instantiated and called as such:
 *   * MyLinkedList* obj = new MyLinkedList();
 *    * int param_1 = obj->get(index);
 *     * obj->addAtHead(val);
 *      * obj->addAtTail(val);
 *       * obj->addAtIndex(index,val);
 *        * obj->deleteAtIndex(index);
 *         */
