/* sub_603D8A44
 * address: 0x603D8A44   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D8A44(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int v4; // r1
  int v5; // r2
  bool v6; // zf
  unsigned int v7; // r3
  unsigned int v8; // r1
  StateBase *v9; // r0
  int v10; // r7
  StateBase *v11; // r0
  int v12; // r5
  float v13; // s4
  float v14; // s6
  float v15; // s0

  FIELD_U32(a1, 312) = 1093664768;
  FIELD_U32(a1, 316) = 1093664768;
  FIELD_U32(a1, 11728) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 11732) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 11736) = FIELD_U32(a1, 116);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() && FIELD_U8(a1, 11812) )
  {
    v4 = FIELD_U32(a1, 80);
    v5 = FIELD_U32(a1, 160) + dword_60AF2140[v4];
    FIELD_U32(a1, 160) = v5;
    FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 0.05;
    if ( v5 < 0 && v5 != 0x80000000 )
      v5 = -v5;
    v6 = v4 == 0;
    v7 = dword_60AF1EC0[v4];
    v8 = v7;
    if ( !v6 )
      v8 = -v7;
    if ( v5 >= v8 )
    {
      FIELD_U32(a1, 116) = FIELD_U32(a1, 11748);
      FIELD_U32(a1, 160) = v7;
      FIELD_U8(a1, 11812) = 0;
    }
  }
  v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 12940));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 == (*(int (**)(void))(dword_60C99218 + 8))()
    || (v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
        v12 == (*(int (**)(void))(dword_60C99074 + 8))()) )
  {
    StageActor__cullCheck((StageActor *)a1, 0);
  }
  ActorScaler_execute((ActorScaler *)(a1 + 18616));
  body_center_ref(a1);
  v13 = FIELD_F32(a1, 112);
  v14 = FIELD_F32(a1, 11768);
  v15 = FIELD_F32(a1, 11764) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 304) = v15;
  FIELD_F32(a1, 308) = v14 - v13;
  FIELD_F32(a1, 18428) = v15;
  FIELD_F32(a1, 18432) = v14 - v13;
  sub_603DAD18(a1 + 11872);
  sub_603D8874(a1);
  return 1;
}
