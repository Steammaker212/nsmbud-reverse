/* IceActor_setScale_helper_2EE580
 * address: 0x602EE580   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall IceActor_setScale_helper_2EE580(int a1)
{
  int v2; // r7
  StateBase *CurrentState; // r0
  int v4; // r6
  float v5; // s0
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r5
  float v12; // s0
  float v13; // s2
  float v14; // s2
  float v15; // s0

  v2 = FIELD_U32(a1, 56);
  FIELD_U8(a1, 86) = FIELD_U8(v2, 86);
  ((void (__fastcall *)(int))loc_602EF368)(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))stru_60C925A4.vtable + 2))()
    || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
        v7 == (*(int (**)(void))(dword_60C92544 + 8))())
    || (v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
        v9 == (*(int (**)(void))(dword_60C92564 + 8))())
    || (v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
        v11 == (*((int (**)(void))stru_60C92584.vtable + 2))()) )
  {
    CollisionMgr_process((_BYTE *)(a1 + 648), v5);
  }
  v12 = FIELD_F32(a1, 7404);
  FIELD_U32(a1, 304) = 0;
  FIELD_F32(a1, 308) = v12 * 0.5;
  v13 = FIELD_F32(a1, 7400) * 0.5;
  FIELD_F32(a1, 312) = v13 + 0.0;
  FIELD_F32(a1, 316) = (float)(v12 * 0.5) + -1.0;
  FIELD_U32(a1, 256) = v2;
  v14 = v13 * 0.125;
  v15 = v12 * 0.125;
  if ( FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 9;
  FIELD_U32(a1, 6764) = 0;
  FIELD_U32(a1, 6768) = 0;
  FIELD_F32(a1, 6772) = v14;
  FIELD_F32(a1, 6776) = v15;
  ShapedCollider_init((ShapedCollider *)(a1 + 6104), (StageActor *)a1, (ShapedColliderInfo *)algn_60C9271C);
  FIELD_U32(a1, 6440) = a1 + 6760;
  FIELD_U32(a1, 6416) = sub_602EF894;
  FIELD_U32(a1, 6420) = sub_602EFC88;
  FIELD_U32(a1, 6424) = sub_602F023C;
  ColliderBase_setType((ColliderBase *)(a1 + 6104), 31);
  FIELD_U32(a1, 6328) = 1;
  FIELD_U8(a1, 6780) = 1;
  return 6780;
}
