/* sub_60397654
 * address: 0x60397654   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60397654(int a1)
{
  float v2; // s0
  int v3; // r0
  float v4; // r1
  int *result; // r0
  Vec3 v6; // [sp+8h] [bp-20h] BYREF

  sub_6039AF5C(a1, 0, FIELD_F32(a1, 6592));
  v2 = FIELD_F32(a1, 88);
  if ( (v2 > 0.05 || v2 < -0.05) && (FIELD_U8(a1, 6320) & 1) != 0 )
  {
    v3 = 1;
    switch ( FIELD_U8(a1, 5957) )
    {
      case 1:
        v3 = 3;
        break;
      case 2:
        v3 = 2;
        break;
      case 4:
        break;
      case 0xB:
        v3 = 4;
        break;
      default:
        v3 = 0;
        break;
    }
    v4 = FIELD_F32(a1, 108);
    v6.y = FIELD_F32(a1, 112);
    v6.x = v4;
    v6.z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 12880), dword_60B00994[v3], &v6, 0, 0);
  }
  result = (int *)FIELD_U8(a1, 6321);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 6392) = &dword_60C975C0;
    return &dword_60C975C0;
  }
  return result;
}
