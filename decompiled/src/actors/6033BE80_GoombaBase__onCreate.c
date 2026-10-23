/* GoombaBase__onCreate
 * address: 0x6033BE80   size: 312   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
signed int __fastcall GoombaBase__onCreate(Enemy *a1)
{
  ActiveCollider *p_aCollider; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  int v5; // r0
  int *v6; // r4
  double (__fastcall **v7)(int *); // t1
  int v8; // s2

  p_aCollider = &FIELD_U32(a1, 0xBC);
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), &FIELD_U32(a1, 0x0), &stru_60BED0A4, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider)
    && !ActiveColliderMgr_isInCreateList(v3, p_aCollider) )
  {
    ActiveColliderMgr_addToCreateList(v3, p_aCollider);
  }
  ActiveCollider__init((ActiveCollider *)&a1[1]._._._.direction, &FIELD_U32(a1, 0x0), &stru_60AFFB18, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&a1[1]._._._.direction)
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)&a1[1]._._._.direction) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)&a1[1]._._._.direction);
  }
  FIELD_F32(a1, 0x88) = -4.0;
  v5 = StageActor__directionToPlayerX((StateActor *)a1, &FIELD_U32(a1, 0x6C));
  FIELD_U32(a1, 0x50) = v5;
  FIELD_U32(a1, 0xA0) = Enemy_CommonRotations[v5];
  a1[1]._._._.aCollider.field_C8 = 0;
  FIELD_U8(a1, 0x1880) = 0;
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 0x270))(a1);
  v7 = (double (__fastcall **)(int *))a1[1]._._._.aCollider.field_12C;
  v6 = &a1[1]._._._.aCollider.field_12C;
  FIELD_F64(v6, 1) = (*v7)(v6);
  v6[3] = v8;
  return 1;
}
