/* sub_6098DF8C
 * address: 0x6098DF8C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098DF8C(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CD0C94 & ~(1620631468 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CD0C94) )
    {
      dword_60CD0C90 = (int)&off_60BFB228;
      _cxa_guard_release(&dword_60CD0C94);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CD0C90)(&dword_60CD0C90, a2);
}
