/* sub_608DC84C
 * address: 0x608DC84C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DC84C(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int v6; // r7
  int result; // r0
  bool v8; // zf

  v5 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619904632 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v6 = (int)(v5 + 48);
  if ( !(**v5)(v5, &dword_60CC6AE4) )
    v6 = 192;
  result = *(unsigned __int8 *)v6;
  v8 = result == 0;
  if ( *(_BYTE *)v6 )
  {
    FIELD_U32(a1, 552) = a2;
    v8 = a2 == 0;
  }
  if ( !v8 )
  {
    result = sub_608DC930(a1);
    if ( result )
      return sub_608DD90C(FIELD_U32(a1, 552), a1);
  }
  return result;
}
