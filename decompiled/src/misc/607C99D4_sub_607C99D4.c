/* sub_607C99D4
 * address: 0x607C99D4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607C99D4(int a1, int a2)
{
  char v2; // r12
  int v4; // r5

  v4 = **(_DWORD **)(a1 + 240);
  if ( ((unsigned int)&dword_60C80400 & ~(1618778612 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v4 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C803FC) == 1 )
      FIELD_U32(v4, 312) = a2;
  }
}
