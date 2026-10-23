/* sub_607CBC00
 * address: 0x607CBC00   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CBC00(int a1)
{
  char v1; // r12
  int v2; // r4
  int result; // r0

  v2 = FIELD_U32(a1, 11368);
  if ( ((unsigned int)&dword_60CC4B70 & ~(1618787356 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4B70) )
  {
    dword_60CC4B6C = (int)&off_60C23E58;
    _cxa_guard_release(&dword_60CC4B70);
  }
  if ( !v2 )
    return 0;
  result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v2 + 8))(v2, &dword_60CC4B6C);
  if ( result )
    return v2;
  return result;
}
