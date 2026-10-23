/* sub_607F0850
 * address: 0x607F0850   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607F0850(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CC5828 & ~(1618937960 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5828) )
  {
    dword_60CC5824 = (int)&off_60C266EC;
    _cxa_guard_release(&dword_60CC5828);
  }
  if ( a2 == &dword_60CC5824 )
    return 1;
  if ( ((unsigned int)&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo
      & ~(1618938052 << v2)
      & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo) )
    {
      sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BC00A4;
      _cxa_guard_release(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo);
    }
  }
  return a2 == &sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo;
}
