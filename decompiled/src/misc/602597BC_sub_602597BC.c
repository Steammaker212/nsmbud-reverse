/* sub_602597BC
 * address: 0x602597BC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602597BC(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C8E108 & ~(1613076436 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E108) )
  {
    dword_60C8E104 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8E108);
  }
  if ( v3 && (**v3)(v3, &dword_60C8E104) == 1 )
    sub_6025985C(v3);
  return 1;
}
