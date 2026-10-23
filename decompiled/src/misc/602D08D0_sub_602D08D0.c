/* sub_602D08D0
 * address: 0x602D08D0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D08D0(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r6
  int v6; // r5
  unsigned int v7; // r0
  int v8; // r1
  int v9; // r0
  _WORD *v10; // r0
  int v11; // t1
  StateBase *CurrentState; // r0
  int v13; // r6
  StateBase *v14; // r0
  int v15; // r6

  v4 = FIELD_U32(a3, 64);
  v6 = 0;
  if ( (unsigned __int8)(FIELD_U8(v4, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1613564164 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v6 = 1;
    if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1 )
    {
      v7 = FIELD_U8(v4, 84);
      v8 = 0;
      if ( v7 < 4 )
        v8 = (char)v7;
      v9 = a1 + 2 * v8;
      v11 = FIELD_U16(v9, 6140);
      v10 = (_WORD *)(v9 + 6140);
      if ( !v11 )
      {
        *v10 = 8;
        FIELD_U16(a1, 6564) = 24;
        FIELD_U32(a1, 6568) = 1065353216;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 392))(a1, v4);
        v6 = 1;
        (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)v4 + 748))(
          v4,
          1,
          0,
          0,
          4.0 + 0.2815,
          FIELD_F32(v4, 88));
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v13 == (*(int (**)(void))(dword_60C91998 + 8))()
          || (v14 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
              v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14),
              v15 == (*(int (**)(void))(dword_60C91A18 + 8))()) )
        {
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C919B8);
        }
      }
    }
  }
  return v6;
}
