/* sub_608CAEDC
 * address: 0x608CAEDC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *sub_608CAEDC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC9840 & ~(1619832560 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC9840) )
  {
    byte_60CC9844 = 0;
    dword_60CC9848 = (int)&dword_60CC9848;
    dword_60CC984C = (int)&dword_60CC9848;
    dword_60CC9850 = (int)&dword_60CC9850;
    dword_60CC9854 = (int)&dword_60CC9850;
    _cxa_guard_release(&dword_60CC9840);
  }
  return &byte_60CC9844;
}
