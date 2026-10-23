/* sub_6012CECC
 * address: 0x6012CECC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6012CECC(int a1, int a2, int a3)
{
  float *v3; // r7
  char v4; // r12
  float *result; // r0
  bool v9; // zf

  result = (float *)(a1 + 6976);
  v9 = result == (float *)a2;
  if ( result != (float *)a2 )
  {
    v3 = *(float **)(a3 + 64);
    v9 = v3 == 0;
  }
  if ( !v9 )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1611845376 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    result = (float *)(**(int (__fastcall ***)(float *, int *))v3)(v3, &dword_60C7B370);
    if ( result == (float *)1 )
    {
      result = (float *)sub_607B7028(v3);
      if ( !result )
        result = v3;
      if ( result[31] >= 0.0 || (float)(result[28] - result[147]) >= 0.0 || FIELD_F32(a1, 124) < 0.0 )
        return (float *)Enemy__collisionPlayer(a1, a2, a3);
    }
  }
  return result;
}
