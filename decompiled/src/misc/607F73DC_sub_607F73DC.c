/* sub_607F73DC
 * address: 0x607F73DC   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607F73DC(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CC62F4 & ~(1618965616 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC62F4) )
  {
    dword_60CC62F0 = (int)&off_60C278A4;
    _cxa_guard_release(&dword_60CC62F4);
  }
  v4 = 1;
  if ( a2 != &dword_60CC62F0 )
  {
    if ( ((unsigned int)&dword_60CC5820 & ~(1618965712 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5820) )
    {
      dword_60CC581C = (int)&off_60C266E0;
      _cxa_guard_release(&dword_60CC5820);
    }
    if ( a2 != &dword_60CC581C )
    {
      if ( ((unsigned int)&dword_60CC5828 & ~(1618965804 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5828) )
      {
        dword_60CC5824 = (int)&off_60C266EC;
        _cxa_guard_release(&dword_60CC5828);
      }
      if ( a2 != &dword_60CC5824 )
      {
        if ( ((unsigned int)&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo
            & ~(1618965896 << v2)
            & 1) == 0
          && _cxa_guard_acquire(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo) )
        {
          sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo = (int)&off_60BC00A4;
          _cxa_guard_release(&`guard variable for'sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo);
        }
        return a2 == &sead__TaskBase__getRuntimeTypeInfoStatic(void)::typeInfo;
      }
    }
  }
  return v4;
}
