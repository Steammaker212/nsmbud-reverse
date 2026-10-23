/* sub_60101770
 * address: 0x60101770   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60101770(float *a1)
{
  unsigned int v1; // r1
  float *v2; // r4
  float v3; // s16
  float result; // s0

  v1 = *((_DWORD *)a1 + 1740);
  if ( v1 <= 3 )
  {
    v2 = a1 + 2356;
    v3 = **(float **)(dword_60CBF354 + 4 * v1 + 32);
    result = v3 + (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 912))(a1);
    *v2 = result;
  }
  return result;
}
