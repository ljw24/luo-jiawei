  #include <unistd.h>                                                                                                   2 #include <stdio.h>
  #include <stdio.h>

  int main(void)
   {
      int i = 0;
      for(i = 0; i < 2; i++)
      {
          pid_t fpid = fork();
            // 输出当前进程的ID
         printf("current pid:%d\n", getpid());
         if(0 == fpid)
         {
             printf("hello world!\n");
         }
          else
          {
             printf("hello world\n");
         }
     }
      return 0;
 }