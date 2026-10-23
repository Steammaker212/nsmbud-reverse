/* sub_6056A28C
 * address: 0x6056A28C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056A28C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAE65C & ~(1616290468 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE65C) )
  {
    dword_60CAE658 = (int)&off_60C02538;
    _cxa_guard_release(&dword_60CAE65C);
  }
  if ( a2 == &dword_60CAE658 )
    return 1;
  else
    return sub_6056A434(a2);
}
