/* sub_600E2D20
 * address: 0x600E2D20   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600E2D20(int a1, int a2)
{
  _DWORD *v2; // r4
  int v3; // r5
  char v4; // r12
  char v5; // r12
  int v6; // r0

  v2 = *(_DWORD **)(a1 + 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( FIELD_U8(v3, 533) == 1 )
  {
    if ( ((unsigned int)&dword_60C84B54 & ~(1611541864 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B54) )
    {
      dword_60C84B50 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C84B54);
    }
    if ( v2 && (*(int (__fastcall **)(_DWORD *, int *))*v2)(v2, &dword_60C84B50) == 1 && !v2[1637] )
    {
      if ( (v2[1632] & 0x20) != 0 || *((float *)v2 + 1630) == 0.0 )
      {
        sub_6041838C((ModelAnimation *)(v2 + 1626));
        v2[1631] = 1065353216;
        *((_BYTE *)v2 + 6532) = 1;
      }
      if ( ((unsigned int)&dword_60C7B374 & ~(1611542080 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
      {
        v6 = *v2;
        if ( FIELD_U32(v3, 1320) == 3 )
          (*(void (__fastcall **)(_DWORD *))(v6 + 212))(v2);
        else
          (*(void (__fastcall **)(_DWORD *))(v6 + 208))(v2);
        (*(void (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 748))(v3, 1, 2, 0);
        (*(void (__fastcall **)(_DWORD *))(*v2 + 232))(v2);
        (*(void (__fastcall **)(_DWORD *))(*v2 + 228))(v2);
      }
    }
  }
}
