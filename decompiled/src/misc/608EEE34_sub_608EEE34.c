/* sub_608EEE34
 * address: 0x608EEE34   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608EEE34(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEBE0 & ~(1619979852 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBE0) )
  {
    dword_60CCEBDC = (int)&off_60C5C3A8;
    _cxa_guard_release(&dword_60CCEBE0);
  }
  if ( a2 == &dword_60CCEBDC )
    return 1;
  if ( ((unsigned int)&dword_60C9BB48 & ~(1619979944 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9BB48) )
    {
      sead__MethodTreeMgr__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C9BB48);
    }
  }
  return a2 == &sead__MethodTreeMgr__getRuntimeTypeInfoStatic(void)::typeInfo;
}
