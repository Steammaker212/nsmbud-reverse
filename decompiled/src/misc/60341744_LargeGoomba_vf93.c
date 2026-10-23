/* LargeGoomba_vf93
 * address: 0x60341744   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf93(int a1, float *a2)
{
  char v2; // r12
  float *v4; // r0

  if ( ((unsigned int)&dword_60C7B37C & ~(1614026588 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v4 = (float *)(**(int (__fastcall ***)(float *, int *))a2)(a2, &dword_60C7B378);
  if ( v4 )
    v4 = a2;
  return (*(int (__fastcall **)(float *, int, int, int, float, float))(*(_DWORD *)v4 + 748))(
           v4,
           1,
           1,
           2,
           0.2815 + 3.628,
           v4[22]);
}
