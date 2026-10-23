/* sub_602FB560
 * address: 0x602FB560   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FB560(int a1, int a2, int a3)
{
  char v3; // r12
  float *v4; // r4
  int v5; // r5

  v4 = *(float **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B408 & ~(1613739384 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  v5 = 0;
  if ( v4 && (**(int (__fastcall ***)(float *, int *))v4)(v4, &dword_60C7B404) == 1 )
  {
    v5 = 1;
    (*(void (__fastcall **)(float *, int, int, int, float, float))(*(_DWORD *)v4 + 748))(v4, 1, 1, 1, 5.0, v4[22]);
  }
  return v5;
}
