/* sub_603BDBF8
 * address: 0x603BDBF8   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BDBF8(Enemy *a1, int a2, int a3)
{
  char v5; // r12
  int v6; // r5
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r0
  int v9; // r1
  StateBase *CurrentState; // r0
  int v11; // r6

  v6 = 0;
  if ( Enemy__vfC8(a1, a2, a3) == 1 && a1[1]._._._._.field_34 == 1 )
  {
    v7 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1614535740 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v6 = 1;
    if ( v7 )
    {
      if ( (**v7)(v7, &dword_60C7B378) == 1 )
      {
        v8 = sub_6000AED0((int)a1, (int)v7);
        if ( v8 != FIELD_U32(a1, 0x50) )
        {
          v9 = 786432000;
          FIELD_U32(a1, 0x50) = v8;
          if ( v8 == 1 )
            v9 = -786432000;
          FIELD_U32(a1, 0xA0) = v9;
          FIELD_F32(a1, 0x78) = -FIELD_F32(a1, 0x78);
          FIELD_F32(a1, 0x84) = -FIELD_F32(a1, 0x84);
          CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v11 == (*(int (**)(void))(dword_60C98390 + 8))() )
            (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C982F0);
          ((void (__fastcall *)(char *))*(&off_60BF6408 + 2 * a1[1]._._._._.field_34))((char *)a1 + ((int)*(&off_60BF6408 + 2 * a1[1]._._._._.field_34 + 1) >> 1));
        }
      }
    }
  }
  return v6;
}
