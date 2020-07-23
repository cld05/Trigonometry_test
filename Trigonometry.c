//
//  Trigonometry.c
//  Claudio's tests
//
//  Created by Claudio Paliotta on 23/07/2020.
//  Copyright © 2020 Claudio Paliotta. All rights reserved.
//

#include "Trigonometry.h"
#include "stdio.h"
#include "math.h"

void cosine_formula_core(triangle_t *T) {
    
    float cos_alpha;
//    printf("num: %f, den: %f: \n", -(powf(T->c, 2) - powf(T->a, 2) - powf(T->b, 2)), (2* T->a * T->b));
//    printf("num/den: %f \n", -(powf(T->c, 2) - powf(T->a, 2) - powf(T->b, 2))/(2* T->a * T->b));
    cos_alpha = -(powf(T->c, 2) - powf(T->a, 2) - powf(T->b, 2))/(2* T->a * T->b);
    T->alpha = acosf(cos_alpha);
}

void cosine_formula(triangle_t *T) {
    
    
    if (T->a==0 || T->b==0 || T->c==0){
        printf("a,b,c cannot be 0 or undefined \n");
        printf("enter values for a, b, and c \n");
        printf("type a value for a:");
        scanf("%f", &T->a);
        while (T->a==0){
            printf("a cannot be 0 \n");
            printf("type a value for a \n");
            scanf("%f", &T->a);
        }
        
        printf("type a value for b:");
        scanf("%f", &T->b);
        while (T->b==0){
            printf("b cannot be 0 \n");
            printf("type a value for b \n");
            scanf("%f", &T->b);
        }
        
        printf("type a value for c:");
        scanf("%f", &T->c);
        while (T->c==0){
            printf("c cannot be 0 \n");
            printf("type a value for c \n");
            scanf("%f", &T->c);
        }

        cosine_formula_core(T);
        
    }
    else {
        cosine_formula_core(T);
    }
    
}


