  //Traversal
  #include<stdio.h>
  int main()
  {
      int i,a[50], size,num ;
      printf("enter the size of an array \n");
      scanf("%d",&size);
      printf("enter elements\n");
      for(i=0; i<=size; i++)
      {
          printf("%d \n", i);
          scanf("%d ", &a[i]);
      }
      while(1)
      {
          printf("\n1 for traversal in array \n");
          printf("2 for insertion in an array \n");
          printf("3 for deletion in an array \n");
          int choice;
          scanf("%d", &choice);
          switch(choice)    
          {
              case 1:
                printf("elements in an array are \n");
                for(i=1; i<size; i++)
                {
                    printf("%d ", a[i]);
                }
              case 2:
                  printf("\n 1 for insert element from begining \n");
                  printf("2 for insert element from middle( random position ) \n");
                  printf("3 for insert element from ending \n");
                  int option;
                  scanf("%d", &option);
                  switch(option)
                  {
                      case 1:
                      printf("enter data which you want to insert \n");
                      scanf("%d", &num);
                      for(i=size+1; i>=0; i--)
                      {
                          a[i+1]=a[i];
                      }
                      a[0]=num;
                      size++;
                      printf("new array are :- \n");
                      for(i=0; i<=size; i++)
                      {
                        printf("%d ", a[i]);
                      }
                  }
          }    
      }  
  }