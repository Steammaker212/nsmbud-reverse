/* LavaGeyser_vf185
 * address: 0x6070D068   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf185(int *a1)
{
  float v2; // s0
  float *v3; // r1
  float *v4; // r0
  float v5; // s4
  float v6; // s2
  float v7; // s6
  float v8; // s2
  float v9; // s6
  float v10; // s4

  (*(void (__fastcall **)(int *))(*a1 + 668))(a1);
  (*(void (__fastcall **)(int *))(*a1 + 664))(a1);
  v2 = *((float *)a1 + 37);
  v3 = (float *)(a1 + 1579);
  v4 = (float *)(a1 + 1581);
  v5 = *((float *)a1 + 1579);
  v6 = *((float *)a1 + 1581);
  if ( v5 < v6 )
  {
    v7 = v5 + *((float *)a1 + 1580);
    *v3 = v7;
    if ( v7 <= v6 )
      goto LABEL_7;
LABEL_6:
    v7 = v6;
    *v3 = v6;
    goto LABEL_7;
  }
  v7 = *((float *)a1 + 1579);
  if ( v5 > v6 )
  {
    v7 = v5 - *((float *)a1 + 1580);
    *v3 = v7;
    if ( v7 < v6 )
      goto LABEL_6;
  }
LABEL_7:
  v8 = v7 + v2;
  *((float *)a1 + 37) = v7 + v2;
  if ( v7 != 0.0 )
    goto LABEL_12;
  v9 = *((float *)a1 + 1594);
  if ( v5 <= 0.0 )
  {
    if ( v5 >= 0.0 )
      goto LABEL_12;
  }
  else
  {
    v9 = -v9;
    --a1[1583];
  }
  *v4 = v9 * *((float *)a1 + 1590);
LABEL_12:
  v10 = flt_60B09C80[((unsigned int)a1[5] >> 12) & 7];
  if ( v2 < v10 && v8 >= v10 || v2 > v10 && v8 <= v10 )
    *v4 = 0.0;
  if ( a1[1583] <= 0 )
    (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60CBCB58);
  return (*(int (__fastcall **)(int *))(*a1 + 636))(a1);
}
