/* LavaGeyser_vf179
 * address: 0x6070CCB4   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf179(int *a1)
{
  float v2; // s16
  float *v3; // r0
  float *v4; // r5
  float v5; // s2
  float v6; // s0
  float v7; // s4
  float v8; // s0

  (*(void (__fastcall **)(int *))(*a1 + 668))(a1);
  v2 = *((float *)a1 + 37);
  v3 = (float *)(a1 + 1579);
  v4 = (float *)(a1 + 1581);
  v5 = *((float *)a1 + 1581);
  v6 = *((float *)a1 + 1579);
  if ( v6 < v5 )
  {
    v7 = v6 + *((float *)a1 + 1580);
    *v3 = v7;
    if ( v7 <= v5 )
      goto LABEL_7;
LABEL_6:
    v7 = v5;
    *v3 = v5;
    goto LABEL_7;
  }
  v7 = *((float *)a1 + 1579);
  if ( v6 > v5 )
  {
    v7 = v6 - *((float *)a1 + 1580);
    *v3 = v7;
    if ( v7 < v5 )
      goto LABEL_6;
  }
LABEL_7:
  *((float *)a1 + 37) = v7 + v2;
  if ( v7 == 0.0 )
  {
    if ( v6 <= 0.0 )
    {
      if ( v6 < 0.0 )
      {
        --a1[1583];
        (*(void (__fastcall **)(int *))(*a1 + 660))(a1);
        *(_DWORD *)v4 = a1[1588];
      }
    }
    else
    {
      *v4 = -*((float *)a1 + 1588);
    }
  }
  v8 = *((float *)a1 + 1598);
  if ( v2 < v8 && *((float *)a1 + 37) >= v8 || v2 > v8 && *((float *)a1 + 37) <= v8 )
    *v4 = 0.0;
  if ( a1[1583] <= 0 )
    (*(void (__fastcall **)(int *, void *))(*a1 + 192))(a1, &unk_60CBCB10);
  return (*(int (__fastcall **)(int *))(*a1 + 636))(a1);
}
