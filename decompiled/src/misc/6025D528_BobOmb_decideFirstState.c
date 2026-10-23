/* BobOmb_decideFirstState
 * address: 0x6025D528   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_decideFirstState(Enemy *a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0

  FIELD_U32(a1, 0x0)._._.maxSpeed.y = -4.0;
  result = LODWORD(a1[1]._._._.maxSpeed.z);
  switch ( result )
  {
    case 0:
      v3 = StageActor__directionToPlayerX((StateActor *)a1, &FIELD_U32(a1, 0x0)._._.position);
      FIELD_U32(a1, 0x0)._._.direction = v3;
      FIELD_U32(a1, 0x0)._._.rotation.y = Enemy_CommonRotations[v3];
      result = (*(int (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &BobOmb_StateID_Walk);
      break;
    case 1:
      result = (*(int (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &BobOmb_StateID_EnemyGenerator);
      break;
    case 2:
      result = (*(int (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &stru_60C8E18C);
      break;
    case 3:
      v4 = LODWORD(a1[1]._._._.scale.x) & 1;
      FIELD_U32(a1, 0x0)._._.direction = v4;
      FIELD_U32(a1, 0x0)._._.rotation.y = Enemy_CommonRotations[v4];
      result = (*(int (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &BobOmb_StateID_Cannon);
      break;
    case 4:
      a1[1]._._.collisionMgr[112] = 1;
      FIELD_U32(a1, 0x0)._._.direction = StageActor__directionToPlayerX((StateActor *)a1, &FIELD_U32(a1, 0x0)._._.position);
      ActiveCollider__init(
        (ActiveCollider *)&a1[1]._._._.aCollider.field_10C,
        &FIELD_U32(a1, 0x0)._._,
        (ActiveColliderInfo *)&unk_60BDB1B8,
        0);
      result = (*(int (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &BobOmb_StateID_BowserJrW7_1);
      break;
    case 5:
      a1[1]._._.collisionMgr[112] = 1;
      *(_DWORD *)&a1[1]._._.collisionMgr[116] = ((unsigned int)FIELD_U32(a1, 0x0)._._._.settings1 >> 20) & 0xF;
      FIELD_U32(a1, 0x0)._._.direction = StageActor__directionToPlayerX((StateActor *)a1, &FIELD_U32(a1, 0x0)._._.position);
      ActiveCollider__init(
        (ActiveCollider *)&a1[1]._._._.aCollider.field_10C,
        &FIELD_U32(a1, 0x0)._._,
        (ActiveColliderInfo *)&unk_60BDB1B8,
        0);
      result = (*(int (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &BobOmb_StateID_BowserJrW7_2);
      break;
    case 6:
      result = (*(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 0xC0))(a1, &BobOmb_StateID_Kameck);
      break;
    default:
      return result;
  }
  return result;
}
