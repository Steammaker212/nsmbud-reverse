/* sub_6057E188
 * address: 0x6057E188   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057E188(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CAEEC4 & ~(1616372136 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CAEEC4) )
    {
      dword_60CAEEC0 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CAEEC4);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CAEEC0)(&dword_60CAEEC0, a2);
}
