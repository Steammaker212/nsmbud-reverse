/* sub_607F09C8
 * address: 0x607F09C8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607F09C8(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CC5E54 & ~(1618938336 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5E54) )
  {
    dword_60CC5E50 = (int)&off_60C266E0;
    _cxa_guard_release(&dword_60CC5E54);
  }
  v4 = 1;
  if ( a2 != &dword_60CC5E50 )
  {
    if ( ((unsigned int)&dword_60CC5828 & ~(1618938432 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5828) )
    {
      dword_60CC5824 = (int)&off_60C266EC;
      _cxa_guard_release(&dword_60CC5828);
    }
    if ( a2 != &dword_60CC5824 )
    {
      if ( ((unsigned int)&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo
          & ~(1618938524 << v2)
          & 1) == 0
        && _cxa_guard_acquire(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo) )
      {
        sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BC00A4;
        _cxa_guard_release(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo);
      }
      return a2 == &sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo;
    }
  }
  return v4;
}
