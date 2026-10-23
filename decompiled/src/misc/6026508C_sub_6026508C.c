/* sub_6026508C
 * address: 0x6026508C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026508C(int result)
{
  _BYTE *v1; // r4
  float v2; // r2
  int v3; // r0
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v1 = (_BYTE *)(result + 12120);
  if ( FIELD_U8(result, 12120) )
  {
    v2 = FIELD_F32(result, 112);
    v4.x = FIELD_F32(result, 108);
    v4.y = v2;
    v4.z = 4500.0;
    switch ( FIELD_U8(result, 5957) )
    {
      case 1:
        v3 = 519;
        break;
      case 2:
        v3 = 518;
        break;
      case 4:
        v3 = 517;
        break;
      case 0xB:
        v3 = 520;
        break;
      default:
        v3 = 516;
        break;
    }
    EffectData_create(v3, &v4, 0, 0);
    *v1 = 0;
    return 0;
  }
  return result;
}
