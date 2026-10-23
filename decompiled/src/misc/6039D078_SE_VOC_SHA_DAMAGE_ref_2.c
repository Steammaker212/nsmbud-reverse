/* SE_VOC_SHA_DAMAGE_ref_2
 * address: 0x6039D078   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_SHA_DAMAGE_ref_2(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r5
  float v8; // r1
  Vec2 v10; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 6384) = 0;
  FIELD_U32(a1, 6388) = 1083703296;
  StateMgr__changeState((StateMgr *)(a1 + 6496), (StateBase *)&dword_60C96570);
  FIELD_U32(a1, 6404) = 3;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C971C0 + 8))()
    || (v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4),
        v5 == (*(int (**)(void))(dword_60C971E0 + 8))())
    || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
        v7 == (*(int (**)(void))(dword_60C97620 + 8))()) )
  {
    FIELD_U8(a1, 6396) = 1;
  }
  v8 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v8;
  mapPositionToScreen(&v10, &position);
  sub_60813570(a1 + 12988, "SE_VOC_SHA_DAMAGE", &v10, 0);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C972A0);
}
