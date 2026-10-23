/* sub_60293DFC
 * address: 0x60293DFC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60293DFC(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C8FA4C & ~(1613315612 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8FA4C) )
    {
      dword_60C8FA48 = (int)&off_60BDEC6C;
      _cxa_guard_release(&dword_60C8FA4C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C8FA48)(&dword_60C8FA48, a2);
}
