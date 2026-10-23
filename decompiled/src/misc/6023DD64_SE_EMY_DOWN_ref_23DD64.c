/* SE_EMY_DOWN_ref_23DD64
 * address: 0x6023DD64   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_23DD64(int a1, float *a2)
{
  int v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r7
  ActiveColliderMgr *v9; // r7
  int v10; // r8
  float v11; // r1
  float x; // s18
  float v13; // s16
  Vec2 out; // [sp+8h] [bp-50h] BYREF
  Vec3 position; // [sp+10h] [bp-48h] BYREF
  int v17; // [sp+1Ch] [bp-3Ch]
  char v18; // [sp+20h] [bp-38h]
  char v19; // [sp+21h] [bp-37h]
  __int16 v20; // [sp+22h] [bp-36h]
  __int16 v21; // [sp+24h] [bp-34h]
  char v22; // [sp+26h] [bp-32h]

  v4 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v7 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
      ActiveColldierMgr_removeFromCreateList(v7, (ActiveCollider *)(a1 + 188));
      ActiveColldierMgr_removeFromList3(v7, a1 + 188);
      v8 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6300));
      ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 6300));
      ActiveColldierMgr_removeFromList3(v8, a1 + 6300);
      v9 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 12348));
      ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(a1 + 12348));
      ActiveColldierMgr_removeFromList3(v9, a1 + 12348);
      v10 = Global_BasicSoundActor1;
      v11 = a2[1];
      position.x = *a2;
      position.y = v11;
      mapPositionToScreen(&out, &position);
      v4 = 1;
      sub_60813810(v10, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
      v13 = *a2;
      position = *(Vec3 *)(a1 + 108);
      x = position.x;
      v17 = 0;
      v18 = 3;
      v19 = FIELD_U8(a1, 86);
      v21 = 0;
      v20 = 0;
      v22 = 0;
      sub_60583000(dword_60CAF15C, &position, 3);
      sub_602A6024(a1, x < v13, -1, -1);
    }
  }
  return v4;
}
