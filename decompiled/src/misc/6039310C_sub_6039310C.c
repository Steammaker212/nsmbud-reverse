/* sub_6039310C
 * address: 0x6039310C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6039310C(int a1)
{
  float v2; // r1
  float v3; // r2
  int *result; // r0
  Vec3 v5; // [sp+8h] [bp-20h] BYREF

  sub_6039AF5C(a1, 0, 0.0);
  if ( FIELD_U8(a1, 6520)
    || FIELD_S16(a1, 6338) > 0
    || FIELD_S16(a1, 6340) > 0
    || (FIELD_U32(a1, 6408) | 4) == 6 )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = FIELD_F32(a1, 116);
    v5.x = FIELD_F32(a1, 108);
    v5.y = v2;
    v5.z = v3;
    EffectWrapper_update((EffectWrapper *)(a1 + 12672), 597, &v5, 0, 0);
  }
  result = (int *)FIELD_U8(a1, 6321);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 6392) = &dword_60C971E0;
    return &dword_60C971E0;
  }
  return result;
}
