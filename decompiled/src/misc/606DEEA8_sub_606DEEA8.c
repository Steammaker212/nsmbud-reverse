/* sub_606DEEA8
 * address: 0x606DEEA8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DEEA8(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CBBC70 & ~(1617817288 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CBBC70) )
    {
      dword_60CBBC6C = (int)&off_60C08AD0;
      _cxa_guard_release(&dword_60CBBC70);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CBBC6C)(&dword_60CBBC6C, a2);
}
