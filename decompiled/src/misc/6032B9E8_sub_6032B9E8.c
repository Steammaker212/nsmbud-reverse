/* sub_6032B9E8
 * address: 0x6032B9E8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6032B9E8(int a1)
{
  signed int *v2; // r6
  LightSource *v3; // r5
  signed int result; // r0
  Vec3 a2; // [sp+14h] [bp-1Ch] BYREF

  v2 = (signed int *)(a1 + 13072);
  v3 = (LightSource *)(a1 + 13160);
  ++FIELD_U32(a1, 13072);
  a2.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  a2.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  a2.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  LightSource_update2((LightSource *)(a1 + 13160), &a2, 0, 0, 0, 0, 0, 0);
  LightSource_unkUpdate3(v3);
  result = *v2;
  if ( *v2 == 30 )
  {
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
