/* sub_60398A08
 * address: 0x60398A08   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60398A08(int a1)
{
  float v2; // r1
  float v3; // r2
  int *result; // r0
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r1
  Vec3 v8; // [sp+8h] [bp-20h] BYREF

  sub_6039AF5C(a1, 0, 0.0);
  if ( FIELD_U8(a1, 6520)
    || FIELD_S16(a1, 6338) > 0
    || FIELD_S16(a1, 6340) > 0
    || (FIELD_U32(a1, 6408) | 4) == 6 )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = FIELD_F32(a1, 116);
    v8.x = FIELD_F32(a1, 108);
    v8.y = v2;
    v8.z = v3;
    EffectWrapper_update((EffectWrapper *)(a1 + 12672), 597, &v8, 0, 0);
  }
  result = (int *)FIELD_U8(a1, 6321);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v5 = sub_60378E30(a1 + 6444);
    v6 = FIELD_U32(a1, 6452);
    if ( v6 >= 2 )
      v6 = 0;
    v7 = *(_DWORD *)(v5 + 8 * v6);
    result = &dword_60C971A0;
    if ( v7 == 2 && (FIELD_U32(a1, 6320) & 1) != 0 )
    {
      if ( sub_6039D50C(a1, FIELD_U32(a1, 6320) & 1) || sub_6039D624(a1) == 1 )
        result = &dword_60C971C0;
      else
        result = &dword_60C971A0;
    }
    FIELD_U32(a1, 6392) = result;
  }
  return result;
}
