#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    char shapes[20];
    int faces = 0;
      while (test)
      {
         scanf("%s", shapes);
        if (strcmp(shapes, "Icosahedron") == 0)
        {
            faces+= 20;
        }
        else if (strcmp(shapes, "Cube") == 0)
        {
            faces+= 6;
        }
        else if (strcmp(shapes, "Tetrahedron") == 0)
        {
            faces+= 4;
        }
        else if (strcmp(shapes, "Dodecahedron") == 0)
        {
            faces+= 12;
        }
        else if (strcmp(shapes, "Octahedron") == 0)
        {
            faces+= 8;
        }
        test -- ;
      }
      
       
    
    printf("%d\n", faces);

    return 0;
}