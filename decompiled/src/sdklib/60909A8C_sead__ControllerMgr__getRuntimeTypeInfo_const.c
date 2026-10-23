/* sead__ControllerMgr__getRuntimeTypeInfo_const
 * address: 0x60909A8C   size: 92   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sead__ControllerMgr__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCEBF8 & ~(1620089504 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBF8) )
  {
    dword_60CCEBF4 = (int)&off_60BD83BC;
    _cxa_guard_release(&dword_60CCEBF8);
  }
  return &dword_60CCEBF4;
}
