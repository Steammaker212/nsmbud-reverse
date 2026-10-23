/* sub_60247BF0
 * address: 0x60247BF0   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60247BF0(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r5
  StateBase *CurrentState; // r0
  int v8; // r7
  char v9; // r12
  int v10; // r6

  if ( (FIELD_U32(a1, 6320) == 1 || (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) != 0)
    && FIELD_U8(dword_60C99D88, 31)
    && FIELD_S32(a1, 6480) <= 0
    && !FIELD_U8(a1, 6484) )
  {
    v6 = FIELD_U32(a2, 64);
    if ( ((unsigned int)&dword_60C8DC20 & ~(1613003904 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
    {
      dword_60C8DC1C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DC20);
    }
    if ( v6 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8DC1C) == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v8 != (*(int (**)(void))(dword_60C8DBE4 + 8))() )
        {
          v10 = FIELD_U32(a3, 64);
          if ( ((unsigned int)&dword_60C7B408 & ~(1613004080 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
          {
            dword_60C7B404 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B408);
          }
          if ( v10
            && (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C7B404) == 1
            && FIELD_U8(v10, 84) != 255 )
          {
            ((void (__fastcall *)(int, int, int))loc_6024778C)(a1, v10, v6);
            FIELD_U8(a1, 6476) = 1;
          }
        }
      }
    }
  }
}
