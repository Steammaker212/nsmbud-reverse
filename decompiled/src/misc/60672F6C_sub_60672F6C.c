/* sub_60672F6C
 * address: 0x60672F6C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60672F6C(int a1, int a2)
{
  int v3; // r5
  char v4; // r12
  int result; // r0
  int v6; // r1

  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 2);
  result = FIELD_U8(v3, 533);
  if ( result == 1 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1617375148 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v3 )
    {
      result = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378);
      if ( result )
        result = v3;
    }
    else
    {
      result = 0;
    }
    if ( FIELD_F32(result, 124) > 0.0 )
    {
      v6 = FIELD_U32(a1, 144);
      FIELD_F32(v6, 6120) = FIELD_F32(result, 108) - FIELD_F32(v6, 108);
      FIELD_U8(v6, 7618) = 1;
      return 7618;
    }
  }
  return result;
}
