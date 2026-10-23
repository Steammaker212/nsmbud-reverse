/* sub_6056CEBC
 * address: 0x6056CEBC   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056CEBC(int a1, int a2)
{
  char v2; // r12
  int result; // r0
  int v6; // r0
  int v7; // r1
  int *v8; // r2

  FIELD_U8(a1, 7469) = FIELD_U8(a2, 84);
  if ( ((unsigned int)&dword_60C7B37C & ~(1616301796 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  result = (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378);
  if ( result == 1 )
  {
    result = FIELD_S8(a2, 84);
    if ( result != -1 )
    {
      v6 = 1 << result;
      if ( FIELD_U8(a2, 533) == 2 )
        v7 = 7480;
      else
        v7 = 7472;
      v8 = (int *)(a1 + v7);
      *v8 = *(_DWORD *)(a1 + v7) | v6;
      v8[1] |= v6;
      FIELD_U32(a1, 7488) |= v6;
      if ( (FIELD_U8(a2, 1210) & 1) != 0 )
        FIELD_U32(a1, 7496) |= v6;
      if ( (FIELD_U8(a2, 1212) & 0x40) != 0 )
        FIELD_U32(a1, 7500) |= v6;
      result = FIELD_U32(a2, 1220) | 0x80000;
      FIELD_U32(a2, 1220) = result;
    }
  }
  return result;
}
