#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main()
{  
  float image[5][5][3];
    int x, y;
    // Don’t change this srand() line!
    srand(0);
    for(y = 0; y < 5; y++) 
    {
        for(x = 0; x < 5; x++) 
        {
            image[x][y][0] = (float)rand()/(float)INT_MAX;
            image[x][y][1] = (float)rand()/(float)INT_MAX;
            image[x][y][2] = (float)rand()/(float)INT_MAX;
        }
    } 
 

  
  //calculate mean value
  float rT , gT , bT, mT; 
  
  
  
   for(y = 0; y < 2; y++)
  {
      for (x = 0; x < 5; x++)
      {
         
          rT = image [x] [y] [0];
          gT = image [x] [y] [1];
          bT = image [x] [y] [2];
      
     
    mT = ((rT + bT + gT)/3.0);
    image [x] [y] [0] = mT;
    image [x] [y] [1] = mT;
    image [x] [y] [2] = mT;
    
 
    
  printf("%d %d: %f %f %f\n", x, y, image [x] [y] [0], image [x] [y] [1], image [x] [y] [2] );
  }
  }

    
}


 


