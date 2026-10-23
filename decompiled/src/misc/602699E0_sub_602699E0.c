/* sub_602699E0
 * address: 0x602699E0   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602699E0(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r6

  v6 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B408 & ~(1613142528 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B404) == 1 )
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 1164))(v6, a2, a3);
  return 1;
}
