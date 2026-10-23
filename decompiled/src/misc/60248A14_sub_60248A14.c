/* sub_60248A14
 * address: 0x60248A14   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60248A14(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6

  if ( (FIELD_U32(a1, 6320) == 1 || (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) != 0)
    && FIELD_U8(dword_60C99D88, 31) )
  {
    v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
    if ( ((unsigned int)&dword_60C8DC20 & ~(1613007488 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
    {
      dword_60C8DC1C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DC20);
    }
    if ( v3 )
    {
      if ( (**v3)(v3, &dword_60C8DC1C) == 1 )
        JUMPOUT(0x6024778C);
    }
  }
}
