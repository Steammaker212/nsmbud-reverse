/* sub_6013C978
 * address: 0x6013C978   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013C978(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)dword_60C87BD0 & ~(1611909528 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C87BD0) )
    {
      dword_60C87BCC = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C87BD0);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C87BCC)(&dword_60C87BCC, a2);
}
