/* sub_60569314
 * address: 0x60569314   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60569314(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CAE2EC & ~(1616286516 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CAE2EC) )
    {
      dword_60CAE2E8 = (int)&off_60C012E8;
      _cxa_guard_release(&dword_60CAE2EC);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CAE2E8)(&dword_60CAE2E8, a2);
}
