/* sub_606DD2E4
 * address: 0x606DD2E4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DD2E4(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  float v4; // r1
  Vec3 v6; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(a1, 535) = 1;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = FIELD_F32(a1, 112);
  v6.x = FIELD_F32(a1, 108);
  v6.y = v4;
  v6.z = 4500.0;
  return EffectData_create(41, &v6, 0, 0);
}
