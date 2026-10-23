/* sub_6034FAD8
 * address: 0x6034FAD8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034FAD8(int a1)
{
  _BYTE *v2; // r5
  int result; // r0
  float v4; // r1
  Vec3 v5; // [sp+0h] [bp-20h] BYREF

  v2 = (_BYTE *)(a1 + 6396);
  if ( FIELD_U8(a1, 6396) )
  {
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) == 0 )
    {
      result = 0;
      *v2 = 0;
    }
  }
  else
  {
    v4 = FIELD_F32(a1, 112);
    v5.x = FIELD_F32(a1, 108);
    v5.y = v4;
    v5.z = sub_600024C4(a1);
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      *v2 = 1;
      return EffectData_create(278, &v5, 0, 0);
    }
  }
  return result;
}
