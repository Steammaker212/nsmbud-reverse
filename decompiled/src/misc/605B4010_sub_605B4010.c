/* sub_605B4010
 * address: 0x605B4010   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B4010(int a1, _DWORD *a2)
{
  int v3; // r4
  unsigned int v4; // r1
  char v5; // r12
  int v6; // r0

  v3 = FIELD_U32(a1, 144);
  v4 = (unsigned __int8)(*(_BYTE *)((*(int (__fastcall **)(_DWORD *))(*a2 + 32))(a2) + 533) - 1);
  v6 = a2[637];
  if ( v4 >= 2 )
  {
    if ( (v6 & 0x18000) == 0 )
      return;
  }
  else if ( (v6 & 0x8000) == 0 )
  {
    return;
  }
  if ( ((unsigned int)&dword_60C7B384 & ~(1616593008 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
  {
    dword_60C7B380 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B384);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B380) == 1 )
    {
      FIELD_U32(v3, 6824) = 2;
      FIELD_U8(v3, 6843) = 1;
      FIELD_U8(v3, 6841) = 1;
    }
  }
}
