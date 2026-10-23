/* sub_605B3700
 * address: 0x605B3700   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B3700(int a1, int a2)
{
  int v3; // r4
  unsigned int v4; // r1
  char v5; // r12
  int v6; // r0

  v3 = FIELD_U32(a1, 144);
  v4 = (unsigned __int8)(*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)a2 + 32))(a2) + 533) - 1);
  v6 = FIELD_U32(a2, 2556) & 0x8000;
  if ( v4 > 1 )
  {
    if ( v6 )
    {
      if ( ((unsigned int)&dword_60C7B384 & ~(1616590820 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
      {
        dword_60C7B380 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C7B384);
      }
      if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B380) == 1 )
        FIELD_U32(v3, 6828) = 1;
    }
    if ( (FIELD_U8(a2, 2558) & 1) != 0 )
    {
      if ( ((unsigned int)&dword_60C7B384 & ~(1616590956 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
      {
        dword_60C7B380 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C7B384);
      }
      if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B380) == 1 )
        goto LABEL_22;
    }
  }
  else if ( v6 )
  {
    if ( ((unsigned int)&dword_60C7B384 & ~(1616590680 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B380) == 1 )
    {
      FIELD_U32(a2, 2224) |= 0x20u;
LABEL_22:
      FIELD_U8(v3, 6841) = 1;
      FIELD_U32(v3, 6824) = 3;
    }
  }
}
