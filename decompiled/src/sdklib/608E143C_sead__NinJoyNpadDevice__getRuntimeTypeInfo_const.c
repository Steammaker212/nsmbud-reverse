/* sead__NinJoyNpadDevice__getRuntimeTypeInfo_const
 * address: 0x608E143C   size: 92   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sead__NinJoyNpadDevice__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9CFA8 & ~(1619924048 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFA8) )
  {
    dword_60C9CFA4 = (int)&off_60BFB1D8;
    _cxa_guard_release(&dword_60C9CFA8);
  }
  return &dword_60C9CFA4;
}
