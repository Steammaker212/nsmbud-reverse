/* sub_600EFCA8
 * address: 0x600EFCA8   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600EFCA8(int a1, int a2)
{
  char v2; // r12
  int v4; // r5

  v4 = FIELD_U32(a2, 64);
  if ( v4 && FIELD_U8(v4, 533) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1611594972 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B370) == 1 )
    {
      (*(void (__fastcall **)(int, int, bool, int, float, float, _DWORD))(*(_DWORD *)v4 + 1176))(
        v4,
        2,
        FIELD_F32(v4, 108) > FIELD_F32(dword_60CC6484, 116),
        1,
        4.5,
        1.0,
        0);
      FIELD_U8(a2, 110) |= 2u;
    }
  }
}
