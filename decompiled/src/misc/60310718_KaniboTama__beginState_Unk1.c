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

  FIELD_F32(a1, 0x78) = flt_60AF2060[LODWORD(a1[1]._._._.position.x)] * (float)byte_60AFE3F4[FIELD_U32(a1, 0x50)];
  FIELD_F32(a1, 0x74) = 3484.0;
  p_speed = &a1[1]._._._.speed;
  if ( !LOBYTE(a1[1]._._._.speed.x) )
  {
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0xBC))
      && !ActiveColliderMgr_isInCreateList(v3, &FIELD_U32(a1, 0xBC)) )
    {
      ActiveColliderMgr_addToCreateList(v3, &FIELD_U32(a1, 0xBC));
    }
    LOBYTE(FIELD_F32(p_speed, 0x0)) = 1;
  }
  FIELD_U32(a1, 0x26C) = (int)&a1[1]._._._.speed.z;
  FIELD_U32(a1, 0x270) = (int)&a1[1]._._._.rotation.z;
  return (Enemy *)((char *)a1 + 6428);
}
