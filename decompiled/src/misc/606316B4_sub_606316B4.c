/* sub_606316B4
 * address: 0x606316B4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606316B4(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CB423C & ~(1617106644 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB423C) )
    {
      dword_60CB4238 = (int)&off_60C12704;
      _cxa_guard_release(&dword_60CB423C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB4238)(&dword_60CB4238, a2);
}
