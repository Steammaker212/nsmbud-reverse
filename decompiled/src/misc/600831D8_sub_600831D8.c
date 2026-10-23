/* sub_600831D8
 * address: 0x600831D8   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600831D8(int a1)
{
  int v2; // r0
  char v3; // r12
  int v4; // r5
  StateMgr *v5; // r5
  StateBase *CurrentState; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r5
  int *v10; // r0
  int *v11; // r1
  int v12; // r1
  float v13; // s0
  int v14; // r4
  _DWORD v16[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 7100);
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = "lkp_jumpA";
  sub_60421AE4(v2, v16, 0);
  v4 = FIELD_U32(a1, 7244);
  if ( !v4 )
    goto LABEL_9;
  FIELD_F32(a1, 120) = (float)(FIELD_F32(v4, 108) - FIELD_F32(a1, 108)) / 60.0;
  if ( ((unsigned int)&dword_60C81104 & ~(1611149908 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81100) == 1
    && (FIELD_U32(v4, 15240) < 4u
     || (v5 = (StateMgr *)(v4 + 6084),
         CurrentState = StateMgr__getCurrentState(v5),
         v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
         v7 != (*(int (**)(void))(dword_60C82220 + 8))())
     && (v8 = StateMgr__getCurrentState(v5),
         v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
         v9 != (*(int (**)(void))(dword_60C82080 + 8))())) )
  {
    v10 = &dword_60C81F30;
    v11 = &dword_60C81F54;
  }
  else
  {
LABEL_9:
    v10 = &dword_60C81F2C;
    v11 = &dword_60C81F50;
  }
  v12 = *v11;
  FIELD_U32(a1, 124) = v12;
  FIELD_U32(a1, 100) = *v10;
  v13 = FIELD_F32(a1, 120);
  FIELD_F32(a1, 132) = v13;
  FIELD_U32(a1, 136) = v12 ^ 0x80000000;
  FIELD_U32(a1, 80) = v13 < 0.0;
  FIELD_U32(a1, 6276) = 3932200;
  v14 = a1 + 6332;
  sub_60813430(v14, "SE_BOSS_JR_JUMP_L", 0);
  return sub_60813430(v14, "SE_VOC_JR_JUMP", 0);
}
