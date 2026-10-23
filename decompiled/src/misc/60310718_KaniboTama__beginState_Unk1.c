/* KaniboTama__beginState_Unk1
 * address: 0x60310718   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall KaniboTama__beginState_Unk1(Enemy *a1)
{
  Vec3 *p_speed; // r7
  ActiveColliderMgr *v3; // r5

  FIELD_U32(a1, 0x0)._._.speed.x = flt_60AF2060[LODWORD(a1[1]._._._.position.x)] * (float)byte_60AFE3F4[FIELD_U32(a1, 0x0)._._.direction];
  FIELD_U32(a1, 0x0)._._.position.z = 3484.0;
  p_speed = &a1[1]._._._.speed;
  if ( !LOBYTE(a1[1]._._._.speed.x) )
  {
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0x0)._._.aCollider)
      && !ActiveColliderMgr_isInCreateList(v3, &FIELD_U32(a1, 0x0)._._.aCollider) )
    {
      ActiveColliderMgr_addToCreateList(v3, &FIELD_U32(a1, 0x0)._._.aCollider);
    }
    LOBYTE(FIELD_F32(p_speed, 0x0)) = 1;
  }
  FIELD_U32(a1, 0x0)._._.field_26C = (int)&a1[1]._._._.speed.z;
  FIELD_U32(a1, 0x0)._._.field_270 = (int)&a1[1]._._._.rotation.z;
  return (Enemy *)((char *)a1 + 6428);
}
