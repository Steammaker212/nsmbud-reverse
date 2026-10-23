/* KaniboTama__executeState_Unk3
 * address: 0x60310ABC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall KaniboTama__executeState_Unk3(Enemy *result)
{
  float y; // r2
  float v2; // r2
  Vec3 *p_speed; // r6
  ActiveCollider *p_aCollider; // r5
  ActiveColliderMgr *v5; // r4

  y = result[1]._._._.speed.y;
  if ( y == 0.0 || (LODWORD(v2) = LODWORD(y) - 1, result[1]._._._.speed.y = v2, v2 == 0.0) )
  {
    p_speed = &result[1]._._._.speed;
    if ( !LOBYTE(result[1]._._._.speed.x) )
    {
      p_aCollider = &FIELD_U32(result, 0x0)._._.aCollider;
      v5 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(result, 0x0)._._.aCollider)
        && !ActiveColliderMgr_isInCreateList(v5, p_aCollider) )
      {
        ActiveColliderMgr_addToCreateList(v5, p_aCollider);
      }
      LOBYTE(FIELD_F32(p_speed, 0x0)) = 1;
    }
  }
}
