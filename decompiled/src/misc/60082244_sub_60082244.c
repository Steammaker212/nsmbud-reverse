/* sub_60082244
 * address: 0x60082244   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60082244(float *a1)
{
  int result; // r0
  float v3; // s0

  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1068))(a1);
  result = (int)(a1 + 1790);
  v3 = a1[1790];
  if ( a1[28] < (float)(v3 + 1.0) )
  {
    a1[28] = v3;
    return (*(int (__fastcall **)(float *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81A28);
  }
  return result;
}
