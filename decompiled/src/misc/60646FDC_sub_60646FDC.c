/* sub_60646FDC
 * address: 0x60646FDC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60646FDC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB5EF0 & ~(1617194996 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5EF0) )
  {
    dword_60CB5EEC = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB5EF0);
  }
  return a2 == &dword_60CB5EEC || sub_60027FB0(a2);
}
