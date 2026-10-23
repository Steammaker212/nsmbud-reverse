/* sub_6062B004
 * address: 0x6062B004   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6062B004(int a1, int a2)
{
  int v2; // r4
  int v3; // r0
  char v4; // r12

  v2 = FIELD_U32(a1, 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( !FIELD_U8(v3, 533) && Actor__getProfileId((Actor *)v3) == 714 )
  {
    if ( ((unsigned int)&dword_60CB3E38 & ~(1617080412 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3E38) )
    {
      dword_60CB3E34 = (int)&off_60C0B7A4;
      _cxa_guard_release(&dword_60CB3E38);
    }
    if ( v2 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60CB3E34) == 1 )
        FIELD_U8(v2, 7264) = 1;
    }
  }
}
