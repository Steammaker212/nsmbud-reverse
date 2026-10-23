/* sub_602B49D8
 * address: 0x602B49D8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B49D8(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r5

  v5 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613449716 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1168))(v5, a1, 4);
  return 1;
}
