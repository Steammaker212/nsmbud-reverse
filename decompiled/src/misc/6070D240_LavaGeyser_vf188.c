/* LavaGeyser_vf188
 * address: 0x6070D240   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf188(float *a1)
{
  float *v2; // r5
  float v3; // s2
  float v4; // s0
  float v5; // s0

  v2 = a1 + 1579;
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 668))(a1);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 664))(a1);
  v3 = a1[1581];
  v4 = *v2;
  if ( *v2 < v3 )
  {
    v4 = v4 + a1[1580];
    *v2 = v4;
    if ( v4 <= v3 )
      goto LABEL_7;
LABEL_6:
    v4 = v3;
    *v2 = v3;
    goto LABEL_7;
  }
  if ( *v2 > a1[1581] )
  {
    v4 = v4 - a1[1580];
    *v2 = v4;
    if ( v4 < v3 )
      goto LABEL_6;
  }
LABEL_7:
  v5 = v4 + a1[37];
  a1[37] = v5;
  if ( v5 <= 0.0 )
  {
    a1[37] = 0.0;
    (*(void (__fastcall **)(float *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBCAA4);
  }
  return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 636))(a1);
}
