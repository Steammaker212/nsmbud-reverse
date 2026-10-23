/* LavaGeyser_vf182
 * address: 0x6070CEC0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf182(float *a1)
{
  float *v2; // r6
  float *v3; // r5
  float v4; // s2
  float v5; // s0
  float v6; // s0
  int v7; // r1
  float v8; // s2

  v2 = a1 + 1579;
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 668))(a1);
  v3 = a1 + 1581;
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 664))(a1);
  v4 = a1[1581];
  v5 = *v2;
  if ( *v2 < v4 )
  {
    v5 = v5 + a1[1580];
    *v2 = v5;
    if ( v5 <= v4 )
      goto LABEL_7;
LABEL_6:
    v5 = v4;
    *v2 = v4;
    goto LABEL_7;
  }
  if ( *v2 > *v3 )
  {
    v5 = v5 - a1[1580];
    *v2 = v5;
    if ( v5 < v4 )
      goto LABEL_6;
  }
LABEL_7:
  v6 = v5 + a1[37];
  a1[37] = v6;
  v7 = *((_DWORD *)a1 + 1587);
  v8 = flt_60B09C80[(*((_DWORD *)a1 + 5) >> 12) & 7];
  if ( v7 == 2 )
  {
    if ( v6 >= v8 )
    {
      a1[37] = v8;
      (*(void (__fastcall **)(float *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBCB34);
    }
  }
  else if ( v7 == 1 && v6 >= (float)(v8 + -0.28) )
  {
    *v3 = a1[1594] * a1[1590];
    *((_DWORD *)a1 + 1587) = 2;
  }
  return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 636))(a1);
}
