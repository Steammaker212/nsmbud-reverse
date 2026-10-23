/* sub_60295B1C
 * address: 0x60295B1C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60295B1C(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C8FB30 & ~(1613323068 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8FB30) )
    {
      dword_60C8FB2C = (int)&off_60BDEFC0;
      _cxa_guard_release(&dword_60C8FB30);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C8FB2C)(&dword_60C8FB2C, a2);
}
