/* sub_60186A8C
 * address: 0x60186A8C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60186A8C(float *a1)
{
  float *result; // r0
  float v3; // s2
  float v4; // s4
  float v5[5]; // [sp+4h] [bp-14h] BYREF

  result = (float *)sub_601CF9C0(dword_60C8AEF0);
  if ( result )
  {
    v3 = result[21] + a1[21];
    v4 = (float)(result[22] + a1[22]) * 0.5;
    v5[0] = (float)(result[20] + a1[20]) * 0.5;
    v5[2] = v4;
    v5[1] = a1[86] + (float)(v3 * 0.5);
    return (float *)(*(int (__fastcall **)(float *, float *))(*(_DWORD *)a1 + 120))(a1, v5);
  }
  return result;
}
