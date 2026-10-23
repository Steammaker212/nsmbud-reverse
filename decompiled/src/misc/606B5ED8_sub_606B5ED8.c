/* sub_606B5ED8
 * address: 0x606B5ED8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B5ED8(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CBA464 & ~(1617649400 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CBA464) )
    {
      dword_60CBA460 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CBA464);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CBA460)(&dword_60CBA460, a2);
}
