/* GiantWiggler_vf8
 * address: 0x60255F24   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GiantWiggler_vf8(int a1)
{
  StateMgr *v2; // r5
  float v3; // s6
  float v4; // s0
  float v5; // s10
  float v6; // s14
  int v7; // r0
  float v8; // s12
  float v9; // s10
  int v10; // r0
  float v11; // s12
  float v12; // s10
  int v13; // r0
  float v14; // s12
  float v15; // s10
  int v16; // r0
  float v17; // s12
  float v18; // s2
  int v19; // r7
  int v20; // r7
  int v21; // r7
  StateBase *CurrentState; // r0
  int v23; // r5
  int v24; // r0
  int v26; // [sp+4h] [bp-1Ch] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 6328);
  v6 = (float)(FIELD_F32(a1, 6324) + 0.0) - v3;
  FIELD_F32(a1, 10520) = v6;
  FIELD_F32(a1, 10524) = (float)(v5 + 32.0) - v4;
  FIELD_F32(a1, 10824) = v6;
  FIELD_F32(a1, 10828) = (float)(v5 + 10.0) - v4;
  v7 = FIELD_U32(a1, 6500);
  v8 = FIELD_F32(v7, 12);
  v9 = (float)(FIELD_F32(v7, 8) + 0.0) - v3;
  FIELD_F32(a1, 11128) = v9;
  FIELD_F32(a1, 11132) = (float)(v8 + 32.0) - v4;
  FIELD_F32(a1, 11432) = v9;
  FIELD_F32(a1, 11436) = (float)(v8 + 10.0) - v4;
  v10 = FIELD_U32(v7, 184);
  v11 = FIELD_F32(v10, 12);
  v12 = (float)(FIELD_F32(v10, 8) + 0.0) - v3;
  FIELD_F32(a1, 11736) = v12;
  FIELD_F32(a1, 11740) = (float)(v11 + 32.0) - v4;
  FIELD_F32(a1, 12040) = v12;
  FIELD_F32(a1, 12044) = (float)(v11 + 10.0) - v4;
  v13 = FIELD_U32(v10, 184);
  v14 = FIELD_F32(v13, 12);
  v15 = (float)(FIELD_F32(v13, 8) + 0.0) - v3;
  FIELD_F32(a1, 12344) = v15;
  FIELD_F32(a1, 12348) = (float)(v14 + 32.0) - v4;
  FIELD_F32(a1, 12648) = v15;
  FIELD_F32(a1, 12652) = (float)(v14 + 10.0) - v4;
  v16 = FIELD_U32(v13, 184);
  v17 = FIELD_F32(v16, 12);
  v18 = (float)(FIELD_F32(v16, 8) + 0.0) - v3;
  FIELD_F32(a1, 12952) = v18;
  FIELD_F32(a1, 12956) = (float)(v17 + 32.0) - v4;
  FIELD_F32(a1, 13256) = v18;
  FIELD_F32(a1, 13260) = (float)(v17 + 10.0) - v4;
  sub_60258188(a1 + 6316);
  v19 = FIELD_U32(a1, 6500);
  sub_60258188(v19);
  v20 = FIELD_U32(v19, 184);
  sub_60258188(v20);
  v21 = FIELD_U32(v20, 184);
  sub_60258188(v21);
  sub_60258188(FIELD_U32(v21, 184));
  sub_602547D8(a1 + 6316);
  CurrentState = StateMgr__getCurrentState(v2);
  v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v23 == (*(int (**)(void))(dword_60C8E008 + 8))() )
  {
    StageActor__cullCheck((StageActor *)a1, 0);
    if ( v24 == 1 )
      FIELD_U8(a1, 19) = 1;
  }
  sub_602A33AC((_BYTE *)a1);
  v26 = 0;
  sub_602561CC(a1, &v26);
  return 1;
}
