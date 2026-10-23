/* sub_606C8408
 * address: 0x606C8408   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606C8408(int a1, int a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C88A50 & ~(1617724452 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A50) )
  {
    dword_60C88A4C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C88A50);
  }
  if ( a1 && (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C88A4C) == 1 && (FIELD_U8(a1, 6252) & 1) != 0 )
  {
    if ( FIELD_U8(a1, 7097) )
    {
      FIELD_U8(a1, 7088) = FIELD_U8(a2, 84);
      FIELD_U32(a1, 7084) = FIELD_U8(a2, 533) == 2;
    }
  }
}
