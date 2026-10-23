/* Kanibo__onCreate
 * address: 0x6030F220   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Kanibo__onCreate(Enemy *a1)
{
  ActiveColliderMgr *v2; // r6
  float v3; // s2

  Kanibo__createModel(a1);
  FIELD_F32(a1, 0x23C) = 0.0;
  FIELD_F32(a1, 0x240) = 8.0;
  FIELD_F32(a1, 0x244) = 0.0;
  FIELD_F32(a1, 0x1EC) = 0.0;
  FIELD_U32(a1, 0x1F0) = 0;
  FIELD_F32(a1, 0x1F4) = 32.0;
  FIELD_F32(a1, 0x1F8) = 32.0;
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), &FIELD_U32(a1, 0x0), &stru_60BE9CA0, (int)&a1[1]._._._.field_A8);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0xBC))
    && !ActiveColliderMgr_isInCreateList(v2, &FIELD_U32(a1, 0xBC)) )
  {
    ActiveColliderMgr_addToCreateList(v2, &FIELD_U32(a1, 0xBC));
  }
  CollisionMgr_init(
    (CollisionMgr *)FIELD_U8(a1, 0x288),
    (StateActor *)a1,
    &Kanibo__sBelowSensor,
    &Kanibo__sAboveSensor,
    &Kanibo__sAdjacentSensor);
  FIELD_F32(a1, 0x84) = 0.0;
  FIELD_F32(a1, 0x88) = -4.0;
  FIELD_F32(a1, 0x8C) = 0.0;
  FIELD_F32(a1, 0x64) = -0.1875;
  a1[1]._._._.direction = 3;
  FIELD_U32(a1, 0x26C) = (int)&a1[1]._._._._.field_40;
  LODWORD(a1[1]._._._.speed.z) = 1;
  FIELD_U32(a1, 0x270) = (int)&a1[1]._._._.field_64;
  LOBYTE(FIELD_U32(a1, 0x17A8)) = 1;
  *(double *)&a1[1]._._._.maxSpeed.z = ((double (__fastcall *)(float *))*(_DWORD *)LODWORD(a1[1]._._._.maxSpeed.y))(&a1[1]._._._.maxSpeed.y);
  a1[1]._._._.scale.y = v3;
  (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0) + 0xC0))(a1, &Kanibo__StateID_Wait);
  Kanibo__updateModelMatrix(a1);
  return 1;
}
