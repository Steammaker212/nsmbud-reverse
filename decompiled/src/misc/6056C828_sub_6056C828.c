/* sub_6056C828
 * address: 0x6056C828   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056C828(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  char v6; // r12

  v4 = FIELD_U32(a1, 144);
  v5 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( (unsigned __int8)(FIELD_U8(v5, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60CAE7B4 & ~(1616300152 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE7B4) )
    {
      dword_60CAE7B0 = (int)&off_60C012E8;
      _cxa_guard_release(&dword_60CAE7B4);
    }
    if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60CAE7B0) == 1 )
    {
      FIELD_U8(v4, 7468) = 1;
      sub_6056CEBC(v4, v5);
    }
  }
  return sub_605B3224(a1, a2);
}
