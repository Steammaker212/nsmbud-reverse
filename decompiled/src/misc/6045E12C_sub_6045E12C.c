/* sub_6045E12C
 * address: 0x6045E12C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045E12C(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C9D168 & ~(1615192396 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9D168) )
    {
      dword_60C9D164 = (int)&off_60BFB4F0;
      _cxa_guard_release(&dword_60C9D168);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C9D164)(&dword_60C9D164, a2);
}
