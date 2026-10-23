/* sub_608427F0
 * address: 0x608427F0   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608427F0(int **a1, int *a2)
{
  int v3; // r7
  int *v4; // r6
  int *v5; // r0
  int v6; // r7
  int *v7; // r6
  int *v8; // r0
  int v9; // r7
  int *v10; // r6
  int *v11; // r0
  int v12; // r6
  int *v13; // r5
  int *v14; // r0

  *a1 = a2;
  v3 = sub_6083DF2C(a2, 0);
  if ( v3 )
  {
    v4 = (int *)sub_608354C4((int)(a1 + 20));
    *v4 = sub_6083DD14(v3);
    if ( sub_6083DD38(v3, 0) )
    {
      v5 = (int *)sub_6083DD38(v3, 0);
      v4[4] = *v5;
      v4[5] = v5[1];
      v4[6] = v5[2];
      v4[7] = 1065353216;
    }
    nullsub_66();
  }
  v6 = sub_6083DF2C(*a1, 1);
  if ( v6 )
  {
    v7 = (int *)sub_608354C4((int)(a1 + 38));
    *v7 = sub_6083DD14(v6);
    if ( sub_6083DD38(v6, 0) )
    {
      v8 = (int *)sub_6083DD38(v6, 0);
      v7[4] = *v8;
      v7[5] = v8[1];
      v7[6] = v8[2];
      v7[7] = 1065353216;
    }
    nullsub_66();
  }
  v9 = sub_6083DF2C(*a1, 2);
  if ( v9 )
  {
    v10 = (int *)sub_608354C4((int)(a1 + 56));
    *v10 = sub_6083DD14(v9);
    if ( sub_6083DD38(v9, 0) )
    {
      v11 = (int *)sub_6083DD38(v9, 0);
      v10[4] = *v11;
      v10[5] = v11[1];
      v10[6] = v11[2];
      v10[7] = 1065353216;
    }
    nullsub_66();
  }
  v12 = sub_6083DF2C(*a1, 3);
  if ( v12 )
  {
    v13 = (int *)sub_608354C4((int)(a1 + 74));
    *v13 = sub_6083DD14(v12);
    if ( sub_6083DD38(v12, 0) )
    {
      v14 = (int *)sub_6083DD38(v12, 0);
      v13[4] = *v14;
      v13[5] = v14[1];
      v13[6] = v14[2];
      v13[7] = 1065353216;
    }
    nullsub_66();
  }
}
