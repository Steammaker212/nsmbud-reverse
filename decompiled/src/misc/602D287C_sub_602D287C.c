/* sub_602D287C
 * address: 0x602D287C   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D287C(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r7
  int v8; // r5
  int v9; // r7
  float v10; // s0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r7
  unsigned int v15; // r0
  int v16; // r1
  int result; // r0
  bool v18; // zf
  StateBase *CurrentState; // r0
  int v20; // r6
  StateBase *v21; // r0
  int v22; // r5

  v7 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613572256 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
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
  sub_602CFFDC((_BYTE *)a1);
  v9 = FIELD_U32(v8, 1208);
  if ( (v9 & 0x28000000) == 0 )
  {
    if ( (FIELD_U8(a2, 104) & 1) != 0 )
    {
      if ( sub_602D0278(a1, (float *)(v8 + 108)) == 1 )
      {
        v9 = FIELD_U32(v8, 1208);
        goto LABEL_21;
      }
    }
    else if ( (FIELD_U8(v8, 6900) & 1) == 0 )
    {
      goto LABEL_21;
    }
    return sub_602D040C(a1, a2, a3);
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
          return sub_602D040C(a1, a2, a3);
      }
    }
  }
LABEL_21:
  sub_602D025C(a1);
  v14 = v9 & 0x10000;
  if ( !(*(int (__fastcall **)(int, int, _DWORD, int, float, float))(*(_DWORD *)v8 + 748))(
          v8,
          1,
          0,
          2,
          *(float *)&dword_60CC4B7C + 0.2815,
          FIELD_F32(v8, 88)) )
  {
    v15 = FIELD_U8(v8, 84);
    v16 = 0;
    if ( v15 < 4 )
      v16 = (char)v15;
    *(_WORD *)(a1 + 2 * v16 + 6140) = 0;
  }
  FIELD_U32(v8, 9592) = 1;
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 392))(a1, v8);
  v18 = v14 == 0;
  if ( !v14 )
  {
    result = FIELD_U32(v8, 1320);
    v18 = result == 3;
  }
  if ( !v18 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v20 == (*(int (**)(void))(dword_60C91998 + 8))() )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C919B8);
    v21 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
    result = (*(int (**)(void))(dword_60C91A18 + 8))();
    if ( v22 == result )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C919B8);
  }
  return result;
}
