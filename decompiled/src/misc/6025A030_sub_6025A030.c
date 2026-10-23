/* sub_6025A030
 * address: 0x6025A030   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6025A030(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  _DWORD *v4; // r0
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r5
  float result; // s0

  v3 = FIELD_U32(a1, 6360);
  v2 = (_DWORD *)(a1 + 6360);
  if ( v3 )
  {
    *v2 = 0;
    sub_60421AD4(FIELD_U32(a1, 6352));
  }
  else
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
  FIELD_F32(a1, 116) = (float)((float)(FIELD_U8(a1, 23) & 0xF) * 16.0) + 1500.0;
  FIELD_U8(a1, 84) = -1;
  result = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.5;
  FIELD_F32(a1, 120) = result;
  return result;
}
