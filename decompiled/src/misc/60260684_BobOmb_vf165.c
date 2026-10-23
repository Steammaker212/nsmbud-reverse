/* BobOmb_vf165
 * address: 0x60260684   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf165(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  _DWORD *v4; // r0
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r5

  v3 = FIELD_U32(a1, 6360);
  v2 = (_DWORD *)(a1 + 6360);
  if ( v3 == 2 )
  {
    v4 = *(_DWORD **)(a1 + 6352);
    v5 = (int *)v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += v7;
    v8 = *v5;
    if ( *(float *)(*v5 + 24) < 0.0 )
      sub_6041838C((ModelAnimation *)(v8 + 4));
    FIELD_U32(v8, 24) = 1065353216;
  }
  else
  {
    *v2 = 2;
    sub_60421AD4(FIELD_U32(a1, 6352));
  }
  return CarryableEnemy__vf294(a1);
}
