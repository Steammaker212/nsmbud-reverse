/* sub_60147EC8
 * address: 0x60147EC8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60147EC8(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v5; // r0

  v4 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C88164 & ~(1611955940 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88164) )
  {
    dword_60C88160 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C88164);
  }
  if ( v4 )
  {
    v5 = (**v4)(v4, &dword_60C88160);
    if ( v5 )
      v5 = (int)v4;
  }
  else
  {
    v5 = 0;
  }
  ((void (__fastcall *)(int))loc_60147BB0)(v5);
  FIELD_U8(a2, 110) |= 2u;
  return 1;
}
