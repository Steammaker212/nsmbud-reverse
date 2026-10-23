/* sub_6056C91C
 * address: 0x6056C91C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6056C91C(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  char v4; // r12

  v2 = FIELD_U32(a1, 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 2);
  if ( (unsigned __int8)(FIELD_U8(v3, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60CAE7B4 & ~(1616300392 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE7B4) )
    {
      dword_60CAE7B0 = (int)&off_60C012E8;
      _cxa_guard_release(&dword_60CAE7B4);
    }
    if ( v2 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60CAE7B0) == 1 )
      {
        FIELD_U8(v2, 7468) = 2;
        FIELD_U8(v2, 7469) = FIELD_U8(v3, 84);
        FIELD_U8(v2, 84) = FIELD_U8(v3, 84);
        FIELD_U8(v2, 6843) = 8;
      }
    }
  }
}
