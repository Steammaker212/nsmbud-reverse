/* sub_600B04D4
 * address: 0x600B04D4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600B04D4(int a1)
{
  Vec3 a3; // [sp+14h] [bp-1Ch] BYREF

  sub_600B9294((int *)a1);
  a3.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  a3.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  a3.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  LightSource_update1((LightSource *)(a1 + 6112), 54, &a3, 0, 0, 0, 0, 0, 0);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5808, 3);
  FIELD_U32(a1, 328) = 0;
  return 1;
}
