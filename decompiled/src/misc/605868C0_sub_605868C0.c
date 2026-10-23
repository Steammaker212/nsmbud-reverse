/* sub_605868C0
 * address: 0x605868C0   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605868C0(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  char v7; // r12
  int v8; // r5
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60CAF1EC + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60CAF1CC + 8))() )
    {
      v8 = FIELD_U32(a1, 56);
      if ( ((unsigned int)&dword_60CAF218 & ~(1616406864 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF218) )
      {
        dword_60CAF214 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60CAF218);
      }
      if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60CAF214) == 1 )
      {
        if ( FIELD_U8(v8, 6341) )
        {
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF1CC);
        }
        else if ( FIELD_U8(v8, 6340) )
        {
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF1EC);
        }
        else
        {
          sub_60588188(v8, v9, FIELD_U8(a1, 7481));
          FIELD_U32(a1, 108) = v9[0];
          FIELD_U32(a1, 112) = v9[1];
          FIELD_U32(a1, 164) = -FIELD_U32(v8, 164);
        }
      }
    }
  }
}
