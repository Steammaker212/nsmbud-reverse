/* sub_6025000C
 * address: 0x6025000C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6025000C(int a1, int a2, int a3)
{
  char v3; // r12
  _BOOL4 result; // r0
  int v7; // r6

  result = 0;
  if ( FIELD_U32(a3, 136) != 15 )
  {
    v7 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613037628 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    return v7
        && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) == 1
        && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 1164))(v7, a2, a3) != 0;
  }
  return result;
}
