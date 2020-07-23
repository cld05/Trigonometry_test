//
//  Trigonometry.h
//  Claudio's tests
//
//  Created by Claudio Paliotta on 23/07/2020.
//  Copyright © 2020 Claudio Paliotta. All rights reserved.
//

#ifndef Trigonometry_h
#define Trigonometry_h

#include <stdio.h>

typedef struct {
    float a;
    float b;
    float c;
    float alpha;
    float beta;
    float gamma;
} triangle_t;

void cosine_formula(triangle_t *T);

#endif /* Trigonometry_h */
