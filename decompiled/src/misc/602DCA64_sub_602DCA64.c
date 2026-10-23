/* sub_602DCA64
 * address: 0x602DCA64   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DCA64(Enemy *a1, int a2, int a3)
{
  char v5; // r12
  int v6; // r5
  int (__fastcall ***v7)(_DWORD, int *); // r6
  _BOOL4 v8; // r0
  int v9; // r7
  StateBase *CurrentState; // r0
  int v11; // r6
  StateBase *v12; // r0
  int v13; // r5

  v6 = 0;
  if ( Enemy__vfC8(a1, a2, a3) == 1 )
  {
    v7 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613613716 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v7 && (**v7)(v7, &dword_60C7B378) == 1 )
    {
      v8 = sub_6000AED0((int)a1, (int)v7);
      FIELD_U32(a1, 0x0)._._.direction = v8;
      v9 = (unsigned __int8)byte_60AFE3F4[v8];
      FIELD_U32(a1, 0x0)._._.rotation.y = v9 << 29;
      CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v11 == (*(int (**)(void))(dword_60C91C88 + 8))() )
      {
        FIELD_U32(a1, 0x0)._._.speed.x = (float)(char)v9 * 0.5;
      }
      else
      {
        v12 = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
        v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
        if ( v13 == (*(int (**)(void))(dword_60C91CA8 + 8))() )
          (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C91C88);
      }
      sub_602DADF4((int)a1);
      return 1;
    }
  }
  return v6;
}
