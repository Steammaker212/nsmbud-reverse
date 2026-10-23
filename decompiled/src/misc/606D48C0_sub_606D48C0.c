/* sub_606D48C0
 * address: 0x606D48C0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D48C0(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int *), int a3)
{
  char v3; // r12
  int v7; // r7

  if ( ((unsigned int)&dword_60CB10A0 & ~(1617774816 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB10A0) )
  {
    dword_60CB109C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB10A0);
  }
  v7 = 0;
  if ( a2 && (**a2)(a2, &dword_60CB109C) == 1 )
  {
    v7 = 1;
    *a1 = sub_605CE9B4((int)(a2 + 161), a3) + 0x40000000;
  }
  return v7;
}
