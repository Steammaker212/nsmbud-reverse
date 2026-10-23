/* sub_602F6CEC
 * address: 0x602F6CEC   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F6CEC(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r6
  int v8; // r5
  StateMgr *v9; // r4
  StateBase *CurrentState; // r0
  int v11; // r6
  _BOOL4 v12; // r0
  int v13; // r0
  StateBase *v14; // r0
  int v15; // r5
  StateBase *v16; // r0
  int v17; // r4
  _DWORD v19[8]; // [sp+0h] [bp-20h]

  v7 = 0;
  v19[0] = FIELD_U32(a1, 6332);
  v19[1] = v19[0] ^ 0x80000000;
  if ( FIELD_U32(a3, 136) != 15 )
  {
    v8 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613720888 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v8
      && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) == 1
      && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 1164))(v8, a2, a3) == 1 )
    {
      if ( !FIELD_U8(a1, 6320)
        || (v9 = (StateMgr *)(a1 + 6084),
            CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
            v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
            v11 == (*(int (**)(void))(dword_60C92830 + 8))()) )
      {
        v12 = sub_6000AED0(a1, v8);
        FIELD_U32(a1, 80) = v12;
        if ( FIELD_U8(a1, 6320) )
          v13 = byte_60AFE3F4[v12] * FIELD_U32(a1, 6356);
        else
          v13 = Enemy_CommonRotations[v12];
        FIELD_U32(a1, 160) = v13;
        ((void (__fastcall *)(int))loc_602F6080)(a1);
        v9 = (StateMgr *)(a1 + 6084);
      }
      v14 = StateMgr__getCurrentState(v9);
      v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
      if ( v15 == (*(int (**)(void))(dword_60C928D0 + 8))() )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C928B0);
        return 1;
      }
      else
      {
        v16 = StateMgr__getCurrentState(v9);
        v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
        v7 = 1;
        if ( v17 == (*(int (**)(void))(dword_60C928B0 + 8))() )
          FIELD_U32(a1, 120) = v19[FIELD_U32(a1, 80)];
      }
    }
  }
  return v7;
}
