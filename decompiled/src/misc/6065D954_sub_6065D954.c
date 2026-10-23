/* sub_6065D954
 * address: 0x6065D954   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065D954(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  StateBase *CurrentState; // r0
  int v6; // r6
  int v7; // r6
  int v8; // r0
  int v9; // r1
  StateBase *v10; // r0
  int v11; // r5
  float *v12; // r4
  int v13; // t1
  float v14; // r0
  float v16[10]; // [sp+0h] [bp-28h] BYREF

  v4 = FIELD_U16(a1, 6946);
  v2 = (_WORD *)(a1 + 6946);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6992));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*(int (**)(void))(dword_60CB6790 + 8))() )
    FIELD_U32(a1, 112) = FIELD_U32(a1, 6924);
  StateMgr__execute((StateMgr *)(a1 + 6992));
  StateMgr__execute((StateMgr *)(a1 + 7028));
  v7 = sub_608337E0(a1 + 6360);
  FIELD_U32(a1, 164) = FIELD_U32(a1, 6912);
  v8 = sub_608337E0(a1 + 6396);
  v9 = FIELD_U32(a1, 6912);
  FIELD_U32(a1, 6300) = v7;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = v9 + v8;
  v16[2] = FIELD_F32(a1, 116);
  v16[1] = FIELD_F32(a1, 112);
  v16[0] = FIELD_F32(a1, 108);
  v16[0] = FIELD_F32(a1, 6900) + v16[0];
  sub_60645448(a1 + 6104, (int)v16, FIELD_F32(a1, 6904));
  v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 7028));
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
  if ( v11 == (*(int (**)(void))(dword_60CB67D0 + 8))() )
  {
    v13 = FIELD_U32(a1, 6776);
    v12 = (float *)(a1 + 6776);
    *(float *)v13 = 2.0 - (float)(v12[33] * v12[41]);
    FIELD_U32(v13, 4) = 1090519040;
    v14 = *v12;
    if ( *((_DWORD *)v12 - 1) > 1u )
      LODWORD(v14) += 8;
    *(float *)LODWORD(v14) = (float)(v12[33] * v12[41]) + 2.0;
    *(_DWORD *)(LODWORD(v14) + 4) = 1090519040;
    SolidOnTopCollider_execute((ColliderBase *)(v12 - 86));
  }
  return 1;
}
