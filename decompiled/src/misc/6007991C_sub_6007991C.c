/* sub_6007991C
 * address: 0x6007991C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6007991C(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)dword_60C81768 & ~(1611110716 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C81768) )
    {
      dword_60C81764 = (int)&off_60BC2CB4;
      _cxa_guard_release(dword_60C81768);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C81764)(&dword_60C81764, a2);
}
