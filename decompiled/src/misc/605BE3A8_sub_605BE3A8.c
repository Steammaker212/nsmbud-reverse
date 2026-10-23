/* sub_605BE3A8
 * address: 0x605BE3A8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BE3A8(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)dword_60CB0898 & ~(1616634824 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CB0898) )
    {
      dword_60CB0894 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60CB0898);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB0894)(&dword_60CB0894, a2);
}
