/* sub_60421598
 * address: 0x60421598   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60421598(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C9BB24 & ~(1614943672 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9BB24) )
    {
      dword_60C9BB20 = (int)&off_60BF9F40;
      _cxa_guard_release(&dword_60C9BB24);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C9BB20)(&dword_60C9BB20, a2);
}
