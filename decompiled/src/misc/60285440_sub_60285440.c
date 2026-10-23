/* sub_60285440
 * address: 0x60285440   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60285440(int a1, int a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C7B37C & ~(1613255768 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v4 = 0;
  if ( a2 && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378) == 1 )
  {
    sub_6075FFC4(a2, 8);
    v4 = FIELD_S8(a2, 1313);
  }
  sub_6040A298(dword_60C9A1F0);
  return v4;
}
