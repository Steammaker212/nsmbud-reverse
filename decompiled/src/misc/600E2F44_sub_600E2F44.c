/* sub_600E2F44
 * address: 0x600E2F44   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600E2F44(int a1, int a2)
{
  int v2; // r6
  int v3; // r7
  char v4; // r12
  char v5; // r12

  v2 = FIELD_U32(a1, 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 2);
  if ( FIELD_U8(v3, 533) == 1 )
  {
    if ( ((unsigned int)&dword_60C84B54 & ~(1611542412 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B54) )
    {
      dword_60C84B50 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C84B54);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C84B50) == 1 )
    {
      if ( (FIELD_U8(v2, 6528) & 0x20) != 0 || FIELD_F32(v2, 6520) == 0.0 )
      {
        sub_6041838C((ModelAnimation *)(v2 + 6504));
        FIELD_U32(v2, 6524) = 1065353216;
        FIELD_U8(v2, 6532) = 1;
      }
      if ( ((unsigned int)&dword_60C7B374 & ~(1611542604 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( v3 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
          JUMPOUT(0x600E310C);
      }
    }
  }
}
