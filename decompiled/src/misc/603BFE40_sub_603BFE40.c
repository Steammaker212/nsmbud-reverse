/* sub_603BFE40
 * address: 0x603BFE40   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603BFE40(int a1)
{
  Vec3 a2; // [sp+14h] [bp-14h] BYREF

  if ( !FIELD_U16(a1, 6278) )
    FIELD_U8(a1, 19) = 1;
  a2.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  a2.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  a2.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  return LightSource_update2((LightSource *)(a1 + 6836), &a2, 0, 0, 0, 0, 0, 0);
}
