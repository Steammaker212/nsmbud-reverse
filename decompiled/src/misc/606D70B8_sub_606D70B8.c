/* sub_606D70B8
 * address: 0x606D70B8   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D70B8(int a1)
{
  int result; // r0
  float v3; // s0
  float v4; // s2
  float v5; // s18
  float v6; // s20
  int v7; // r0
  float v8; // s16
  _BOOL4 v9; // r5
  int v10; // r0
  StateMgr *v11; // r4
  StateBase *CurrentState; // r0
  int v13; // r5
  StateBase *v14; // r1
  StateBase *v15; // r0
  int v16; // r5
  StateMgr *v17; // r0
  StateBase *v18; // r0
  int v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r1
  int v23; // r1
  float v24; // s0

  sub_605C9D04(a1);
  result = sub_605CC390(a1);
  if ( !result )
    return result;
  FIELD_U32(a1, 160) -= 805306368 * byte_60B057DC[FIELD_U32(result, 80)];
  v3 = FIELD_F32(result, 108);
  v4 = FIELD_F32(result, 584);
  v5 = FIELD_F32(result, 112);
  v6 = FIELD_F32(result, 588);
  v7 = FIELD_U32(a1, 3192);
  v8 = v3 - v4;
  FIELD_U32(a1, 3192) = v7 & 0xFFFFFBFF;
  v9 = (float)(v3 - v4) < 0.0;
  if ( (FIELD_U8(a1, 6124) & 2) != 0 )
    FIELD_U32(a1, 3192) = v7 | 0x400;
  sub_605CC4D8(a1, v3);
  v10 = FIELD_U32(a1, 2872);
  if ( (v10 & 0x4000) == 0 )
  {
    if ( (float)(v5 - v6) > 0.0 )
    {
      if ( (v10 & 0x10400) == 0x400 )
      {
        v11 = (StateMgr *)(a1 + 6084);
        CurrentState = StateMgr__getCurrentState(v11);
        v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        result = (*(int (**)(void))(dword_60CBB75C + 8))();
        if ( v13 != result )
        {
          v14 = (StateBase *)&dword_60CBB75C;
LABEL_11:
          v17 = v11;
          return (int)StateMgr__changeState(v17, v14);
        }
        return result;
      }
      if ( sub_605C9ACC(a1, 2) == 1 )
      {
        v11 = (StateMgr *)(a1 + 6084);
        v18 = StateMgr__getCurrentState(v11);
        v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
        result = (*(int (**)(void))(dword_60CBB75C + 8))();
        if ( v19 != result )
        {
          v14 = (StateBase *)&dword_60CBB75C;
          goto LABEL_11;
        }
        return result;
      }
    }
    result = FIELD_U8(a1, 6124);
    if ( (result & 2) == 0 )
    {
      v20 = FIELD_U32(a1, 2872);
      v21 = 0x40000;
      if ( v8 < 0.0 )
        v21 = 0x80000;
      if ( (v20 & v21) != 0 )
        goto LABEL_25;
      v22 = 0x400000;
      if ( v8 < 0.0 )
        v22 = 0x800000;
      if ( (v20 & v22) != 0 )
      {
LABEL_25:
        v23 = 0x10000000;
        if ( v8 < 0.0 )
          v23 = 0x20000000;
        if ( (v20 & v23) == 0 )
          goto LABEL_27;
      }
      result = sub_605C9ACC(a1, v9);
      if ( result == 1 )
      {
LABEL_27:
        v24 = (float)byte_60B057DC[!v9];
        FIELD_U32(a1, 80) = !v9;
        FIELD_F32(a1, 120) = v24 * 1.25;
        FIELD_U32(a1, 124) = -1090519040;
        FIELD_U32(a1, 128) = 0;
        FIELD_U32(a1, 100) = -1095552205;
        v14 = &stru_60CBB738;
        v17 = (StateMgr *)(a1 + 6084);
        return (int)StateMgr__changeState(v17, v14);
      }
    }
    return result;
  }
  v11 = (StateMgr *)(a1 + 6084);
  v15 = StateMgr__getCurrentState(v11);
  v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
  result = (*(int (**)(void))(dword_60CBB75C + 8))();
  if ( v16 != result )
  {
    v14 = (StateBase *)&dword_60CBB75C;
    goto LABEL_11;
  }
  return result;
}
