/* sead__NinJoyNpadDevice__checkDerivedRuntimeTypeInfo_const
 * address: 0x608E133C   size: 208   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sead__NinJoyNpadDevice__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9CFA8 & ~(1619923796 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFA8) )
  {
    dword_60C9CFA4 = (int)&off_60BFB1D8;
    _cxa_guard_release(&dword_60C9CFA8);
  }
  if ( a2 == &dword_60C9CFA4 )
    return 1;
  if ( ((unsigned int)&dword_60C9CFB0 & ~(1619923888 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9CFB0) )
    {
      dword_60C9CFAC = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C9CFB0);
    }
  }
  return a2 == &dword_60C9CFAC;
}
