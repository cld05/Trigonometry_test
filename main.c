//
//  main.c
//  Claudio's tests
//
//  Created by Claudio Paliotta on 19/07/2020.
//  Copyright © 2020 Claudio Paliotta. All rights reserved.
//

#include <stdio.h>
#include "math.h"
#include "Trigonometry.h"

triangle_t my_triangle;

int main(void) {

    my_triangle.a = 880;  // mm
    my_triangle.b = 700;  // mm
    my_triangle.c = 1350; // mm
    cosine_formula (&my_triangle);
    printf("The unknown angle alpha: %f radiants\n", my_triangle.alpha);
    printf("The unknown angle alpha: %f deg     \n", my_triangle.alpha * 180 / M_PI);
    
    return 0;
}
