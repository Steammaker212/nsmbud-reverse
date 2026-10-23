/* sub_6028B6A8
 * address: 0x6028B6A8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028B6A8(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C8F38C & ~(1613280968 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8F38C) )
    {
      dword_60C8F388 = (int)&off_60BDE36C;
      _cxa_guard_release(&dword_60C8F38C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C8F388)(&dword_60C8F388, a2);
}
