/* SE_VOC_SHA_DAMAGE_ref
 * address: 0x6039BE2C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_SHA_DAMAGE_ref(int a1, int a2)
{
  float v3; // r1
  float v4; // r1
  StateBase *CurrentState; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r5
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  if ( a2 )
  {
    v3 = FIELD_F32(a1, 276);
    position.x = FIELD_F32(a1, 272);
    position.y = v3;
    position.z = 0.0;
    sub_602A38A4(a1, &position.x);
  }
  v4 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  sub_60813570(a1 + 12988, "SE_VOC_SHA_DAMAGE", &out, 0);
  FIELD_U32(a1, 6384) = 0;
  FIELD_U32(a1, 6388) = 1083703296;
  StateMgr__changeState((StateMgr *)(a1 + 6496), (StateBase *)&dword_60C96570);
  FIELD_U8(a1, 6054) = 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C971C0 + 8))()
    || (v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v8 == (*(int (**)(void))(dword_60C971E0 + 8))())
    || (v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        v10 == (*(int (**)(void))(dword_60C97620 + 8))()) )
  {
    FIELD_U8(a1, 6396) = 1;
  }
  FIELD_U32(a1, 6512) = 0;
  FIELD_U32(a1, 6556) = 0;
  FIELD_U32(a1, 6552) = 0;
  FIELD_U32(a1, 6548) = 0;
  FIELD_U32(a1, 6544) = 0;
  FIELD_U32(a1, 6540) = 0;
  FIELD_U32(a1, 6536) = 0;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C972A0);
}
