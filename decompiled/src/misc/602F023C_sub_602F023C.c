/* sub_602F023C
 * address: 0x602F023C   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602F023C(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r4
  int v8; // r0
  bool v9; // zf
  int v10; // r5
  int v11; // r0
  _BOOL4 v12; // r6
  StateBase *v13; // r0
  int v14; // r7
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r2
  StateBase *CurrentState; // r0
  int v21; // r7

  v7 = FIELD_U32(a1, 144);
  if ( ((unsigned int)&dword_60C7B39C & ~(1613693536 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
  {
    dword_60C7B398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7B39C);
  }
  if ( !v7 || (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B398) != 1 || FIELD_U8(v7, 7525) )
    return;
  v8 = FIELD_U32(v7, 7368);
  v9 = v8 == 0;
  if ( v8 )
    v9 = FIELD_U8(v8, 74) == 0;
  if ( !v9 )
    return;
  v10 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, a3);
  v11 = FIELD_U8(v10, 533);
  if ( (unsigned int)(v11 - 1) >= 2 )
  {
    if ( v11 != 4 )
    {
      v15 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 80))(v10);
      v16 = (FIELD_U8(v15, 2529) & 2) == 0;
      if ( (FIELD_U8(v15, 2529) & 2) != 0 )
        v16 = (FIELD_U8(v15, 2537) & 2) == 0;
      if ( v16 )
        return;
      v12 = FIELD_F32(v7, 108) < FIELD_F32(v10, 108);
      if ( sub_602F0A90(v7, v10, v12) )
        return;
      if ( FIELD_U8(v7, 7529) )
      {
        v17 = v7;
        v18 = v12;
        v19 = -1;
LABEL_30:
        sub_602EE7D8(v17, v18, v19, 0);
        return;
      }
      if ( FIELD_U8(v10, 84) <= 3u )
      {
        sub_602EEF20(v7, (StageActor *)v10, v12);
        return;
      }
LABEL_29:
      v19 = FIELD_S8(v7, 84);
      v17 = v7;
      v18 = v12;
      goto LABEL_30;
    }
    v12 = FIELD_F32(v7, 108) < FIELD_F32(v10, 108);
    if ( sub_605DD6E8(v10) != 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
      v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v21 != (*((int (**)(void))stru_60C92684.vtable + 2))() )
        return;
      sub_605D89BC(v10, v7, 3);
      goto LABEL_29;
    }
LABEL_19:
    sub_602F07A4(v7, v10, v12);
    return;
  }
  v12 = FIELD_F32(v7, 108) < FIELD_F32(v10, 108);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 1204))(v10) == 1 )
    goto LABEL_19;
  if ( (FIELD_U8(v10, 1216) & 0x10) != 0 )
  {
    sub_602F06BC(v7, v10, v12);
    return;
  }
  v13 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
  if ( v14 == (*((int (**)(void))stru_60C92684.vtable + 2))() )
  {
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 1168))(v10, v7, 4);
    goto LABEL_29;
  }
}
