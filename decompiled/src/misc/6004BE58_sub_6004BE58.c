/* sub_6004BE58
 * address: 0x6004BE58   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004BE58(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C803B8 & ~(1610923640 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C803B8) )
    {
      dword_60C803B4 = (int)&off_60BC3170;
      _cxa_guard_release(&dword_60C803B8);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C803B4)(&dword_60C803B4, a2);
}
