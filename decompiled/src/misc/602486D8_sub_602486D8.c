/* sub_602486D8
 * address: 0x602486D8   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602486D8(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r6
  int v8; // r7
  StateBase *CurrentState; // r0
  int v10; // r6
  bool v11; // zf

  if ( FIELD_U32(a1, 6320) != 1 && (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) == 0 )
    return 0;
  v6 = 0;
  if ( FIELD_U8(dword_60C99D88, 31) )
  {
    if ( FIELD_S32(a1, 6480) > 0 || FIELD_U8(a1, 6484) )
      return 1;
    v8 = FIELD_U32(a2, 64);
    if ( ((unsigned int)&dword_60C8DC20 & ~(1613006720 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
    {
      dword_60C8DC1C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DC20);
    }
    if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C8DC1C) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v11 = v10 == (*(int (**)(void))(dword_60C8DBE4 + 8))();
      v6 = 1;
      if ( !v11 )
      {
        ((void (__fastcall *)(int, _DWORD, int))loc_6024778C)(a1, FIELD_U32(a3, 64), v8);
        v6 = 1;
        FIELD_U8(a1, 6476) = 1;
      }
    }
  }
  return v6;
}
