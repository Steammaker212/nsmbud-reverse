/* sub_60841A70
 * address: 0x60841A70   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60841A70(int a1, float *a2, int a3)
{
  float *v3; // r12
  float *v4; // lr
  float *result; // r0
  float *v6; // r3
  float *v7; // r3
  float *v8; // r3
  float *v9; // r2
  float *v10; // r4
  float *v11; // r3
  float *v12; // r5
  float *v13; // r4
  float *v14; // r6
  float *v15; // r6
  float *v16; // r6
  float *v17; // r6
  float *v18; // r6
  float *v19; // r6
  float *v20; // r6
  float *v21; // r6

  v3 = a2 + 1;
  v4 = a2 + 2;
  result = (float *)(a1 + 24 * a3);
  v6 = result + 3961;
  if ( result[3961] >= *a2 )
    v6 = a2;
  result[3961] = *v6;
  v7 = result + 3962;
  if ( result[3962] >= a2[1] )
    v7 = a2 + 1;
  result[3962] = *v7;
  v8 = result + 3963;
  if ( result[3963] >= a2[2] )
    v8 = a2 + 2;
  result[3963] = *v8;
  v9 = a2 + 3;
  v10 = result + 3964;
  if ( a2[3] >= result[3964] )
    v10 = a2 + 3;
  result[3964] = *v10;
  v11 = a2 + 4;
  v12 = result + 3965;
  if ( a2[4] >= result[3965] )
    v12 = a2 + 4;
  result[3965] = *v12;
  v13 = a2 + 5;
  v14 = result + 3966;
  if ( a2[5] >= result[3966] )
    v14 = a2 + 5;
  result[3966] = *v14;
  v15 = result + 3973;
  if ( result[3973] >= *a2 )
    v15 = a2;
  result[3973] = *v15;
  v16 = result + 3974;
  if ( result[3974] >= a2[1] )
    v16 = a2 + 1;
  result[3974] = *v16;
  v17 = result + 3975;
  if ( result[3975] >= a2[2] )
    v17 = a2 + 2;
  result[3975] = *v17;
  v18 = result + 3976;
  if ( a2[3] >= result[3976] )
    v18 = a2 + 3;
  result[3976] = *v18;
  v19 = result + 3977;
  if ( a2[4] >= result[3977] )
    v19 = a2 + 4;
  result[3977] = *v19;
  v20 = result + 3978;
  if ( a2[5] >= result[3978] )
    v20 = a2 + 5;
  result[3978] = *v20;
  v21 = result + 3985;
  if ( result[3985] >= *a2 )
    v21 = a2;
  result[3985] = *v21;
  if ( result[3986] < a2[1] )
    v3 = result + 3986;
  result[3986] = *v3;
  if ( result[3987] < a2[2] )
    v4 = result + 3987;
  result[3987] = *v4;
  if ( a2[3] < result[3988] )
    v9 = result + 3988;
  result[3988] = *v9;
  if ( a2[4] < result[3989] )
    v11 = result + 3989;
  result[3989] = *v11;
  if ( a2[5] < result[3990] )
    v13 = result + 3990;
  result[3990] = *v13;
  return result;
}
