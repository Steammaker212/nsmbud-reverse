/* sub_602FCB6C
 * address: 0x602FCB6C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FCB6C(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C92B04 & ~(1613745036 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C92B04) )
    {
      dword_60C92B00 = (int)&off_60BE7F9C;
      _cxa_guard_release(&dword_60C92B04);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C92B00)(&dword_60C92B00, a2);
}
