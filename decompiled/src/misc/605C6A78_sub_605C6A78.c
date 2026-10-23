/* sub_605C6A78
 * address: 0x605C6A78   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605C6A78(int a1, int a2)
{
  char v2; // r12
  int v5; // r6

  if ( (FIELD_U32(a2, 136) | 2) == 2 )
  {
    v5 = FIELD_U32(a2, 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1616669352 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v5 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1164))(v5, a1, a2);
    }
  }
}
