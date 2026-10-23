/* sub_6028AAA4
 * address: 0x6028AAA4   size: 916   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028AAA4(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int v7; // r6
  char v8; // r12
  int v9; // r7
  float *v10; // r0
  float v11; // s16
  StateMgr *v12; // r5
  StateBase *CurrentState; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r6
  StateBase *v17; // r0
  int v18; // r6
  StateBase *v19; // r0
  int v20; // r6
  StateBase *v21; // r0
  int v22; // r6
  StateBase *v23; // r0
  int v24; // r6
  StateBase *v25; // r0
  int v26; // r6
  StateBase *v27; // r0
  int v28; // r5

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C8F37C & ~(1613277896 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F37C) )
  {
    dword_60C8F378 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8F37C);
  }
  v7 = 0;
  if ( v5 && (**v5)(v5, &dword_60C8F378) == 1 )
  {
    v9 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C8E648 & ~(1613278020 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E648) )
    {
      dword_60C8E644 = (int)&off_60BDBC48;
      _cxa_guard_release(&dword_60C8E648);
    }
    if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C8E644) == 1 )
    {
      if ( sub_605DBD64(v9) != 1 || sub_60678E1C(v9) != 1 )
        return 1;
      v10 = (float *)sub_605DBD7C(v9);
      if ( v10 )
      {
        v11 = (float)(v10[27] + v10[143]) - FIELD_F32(a1, 108);
        if ( sqrtf(
               (float)((float)((float)((float)(v10[28] + v10[144]) - FIELD_F32(a1, 112))
                             * (float)((float)(v10[28] + v10[144]) - FIELD_F32(a1, 112)))
                     + (float)(v11 * v11))
             + 0.0) < (float)(FIELD_F32(v9, 8132) * 0.5) )
        {
          v12 = (StateMgr *)(v5 + 1521);
          CurrentState = StateMgr__getCurrentState(v12);
          v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v14 == (*(int (**)(void))(dword_60C8F1CC + 8))() )
            goto LABEL_23;
          v15 = StateMgr__getCurrentState(v12);
          v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
          if ( v16 == (*(int (**)(void))(dword_60C8F1EC + 8))() )
            goto LABEL_23;
          v17 = StateMgr__getCurrentState(v12);
          v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
          if ( v18 == (*(int (**)(void))(dword_60C8F20C + 8))() )
            goto LABEL_23;
          v19 = StateMgr__getCurrentState(v12);
          v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
          if ( v20 == (*(int (**)(void))(dword_60C8F22C + 8))() )
            goto LABEL_23;
          v21 = StateMgr__getCurrentState(v12);
          v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
          if ( v22 == (*(int (**)(void))(dword_60C8F24C + 8))()
            || (v23 = StateMgr__getCurrentState(v12),
                v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23),
                v24 == (*(int (**)(void))(dword_60C8F26C + 8))())
            || (v25 = StateMgr__getCurrentState(v12),
                v26 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v25, 0x0) + 2))(v25),
                v26 == (*(int (**)(void))(dword_60C8F28C + 8))())
            || (v27 = StateMgr__getCurrentState(v12),
                v28 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v27, 0x0) + 2))(v27),
                v28 == (*(int (**)(void))(dword_60C8F2AC + 8))()) )
          {
LABEL_23:
            FIELD_U32(a1, 80) = v11 <= 0.0;
            FIELD_U32(a1, 6584) = 150;
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F30C);
          }
        }
        return 1;
      }
    }
  }
  return v7;
}
