/* sub_605BC984
 * address: 0x605BC984   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BC984(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  int v4; // r5

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60CB07D0 & ~(1616628124 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB07D0) )
  {
    dword_60CB07CC = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB07D0);
  }
  v4 = 0;
  if ( v3 && (**v3)(v3, &dword_60CB07CC) == 1 )
  {
    sub_602A3EFC((int)(v3 + 1785), 24, 0.0625);
    return 1;
  }
  return v4;
}
