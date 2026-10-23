/* sub_600D0B10
 * address: 0x600D0B10   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D0B10(int a1)
{
  char v1; // r12
  int (__fastcall ***v2)(_DWORD, int *); // r4
  int result; // r0

  v2 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 6772);
  if ( ((unsigned int)&dword_60C80048 & ~(1611467564 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C80048) )
  {
    dword_60C80044 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C80048);
  }
  if ( !v2 )
    return 0;
  result = (**v2)(v2, &dword_60C80044);
  if ( result )
    return (int)v2;
  return result;
}
