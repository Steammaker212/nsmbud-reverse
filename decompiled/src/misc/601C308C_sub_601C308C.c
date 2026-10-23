/* sub_601C308C
 * address: 0x601C308C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601C308C(int a1, float *a2)
{
  float *v4; // r0
  float v5; // r1
  float result; // s0
  float v7; // r3
  float *v8; // r0
  float v9; // s2
  int v10; // r2

  v4 = (float *)sub_601DFFE4(a1 + 1084);
  v5 = v4[18];
  result = -80.0;
  *a2 = v5;
  a2[1] = v4[19];
  v7 = v4[20];
  v8 = a2 + 2;
  a2[2] = v7;
  v9 = v7;
  v10 = FIELD_U32(a1, 1084);
  if ( (unsigned int)(v10 - 2) >= 2 && v10 != 5 )
  {
    if ( v10 )
      return result;
    result = 120.0;
    v9 = v5;
    v8 = a2;
  }
  result = result + v9;
  *v8 = result;
  return result;
}
