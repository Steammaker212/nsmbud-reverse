/* sub_607F02DC
 * address: 0x607F02DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607F02DC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9BB48 & ~(1618936560 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB48) )
  {
    sead__MethodTreeMgr__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C9BB48);
  }
  return &sead__MethodTreeMgr__getRuntimeTypeInfoStatic(void)::typeInfo;
}
