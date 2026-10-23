/* sub_602D040C
 * address: 0x602D040C   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D040C(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r7
  int v9; // r6
  float v10; // s0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int result; // r0
  bool v15; // zf
  StateBase *CurrentState; // r0
  int v17; // r6
  StateBase *v18; // r0
  int v19; // r5

  v7 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613562928 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &dword_60C7B378);
    if ( v8 )
      v8 = (int)v7;
  }
  else
  {
    v8 = 0;
  }
  FIELD_U8(a1, 6710) |= 2u;
  FIELD_U8(a1, 7014) |= 2u;
  FIELD_U8(a1, 7318) |= 2u;
  FIELD_U8(a1, 7622) |= 2u;
  FIELD_U8(a1, 7926) |= 2u;
  FIELD_U8(a1, 8230) |= 2u;
  FIELD_U8(a1, 8534) |= 2u;
  FIELD_U8(a1, 8838) |= 2u;
  FIELD_U8(a1, 9142) |= 2u;
  FIELD_U8(a1, 9446) |= 2u;
  v9 = FIELD_U32(v8, 1208);
  if ( (v9 & 0x28000000) == 0 )
  {
    if ( (FIELD_U8(a2, 104) & 1) != 0 )
    {
      if ( sub_602D0278(a1, (float *)(v8 + 108)) )
        goto LABEL_20;
    }
    else if ( (FIELD_U8(v8, 6900) & 1) == 0 )
    {
      goto LABEL_20;
    }
    return Enemy__collisionPlayer(a1, a2, a3);
  }
  v10 = FIELD_F32(v8, 112);
  if ( v10 < FIELD_F32(a1, 6328) )
  {
    v11 = FIELD_U32(a1, 6436);
    if ( v10 < FIELD_F32(v11, 12) )
    {
      v12 = FIELD_U32(v11, 120);
      if ( v10 < FIELD_F32(v12, 12) )
      {
        v13 = FIELD_U32(v12, 120);
        if ( v10 < FIELD_F32(v13, 12) && v10 < *(float *)(FIELD_U32(v13, 120) + 12) )
          return Enemy__collisionPlayer(a1, a2, a3);
      }
    }
  }
LABEL_20:
  FIELD_U16(a1, 6564) = 24;
  FIELD_U32(a1, 6568) = 1065353216;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 372))(a1, v8);
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 392))(a1, v8);
  v15 = (v9 & 0x10000) == 0;
  if ( (v9 & 0x10000) == 0 )
  {
    result = FIELD_U32(v8, 1320);
    v15 = result == 3;
  }
  if ( !v15 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v17 == (*(int (**)(void))(dword_60C91998 + 8))() )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C919B8);
    v18 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
    result = (*(int (**)(void))(dword_60C91A18 + 8))();
    if ( v19 == result )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C919B8);
  }
  return result;
}
