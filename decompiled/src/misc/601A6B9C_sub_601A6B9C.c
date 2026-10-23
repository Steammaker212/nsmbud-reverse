/* sub_601A6B9C
 * address: 0x601A6B9C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A6B9C(float *a1)
{
  float *v2; // r0
  float v3; // r2
  float v4; // r1
  int result; // r0
  float *v6; // r6
  float *v7; // r0
  float v8; // s0
  float v9; // s2
  int v10; // s4

  if ( *((_DWORD *)a1 + 79) == 6 )
  {
    v2 = (float *)sub_601E0040(a1 + 75);
    v3 = *v2;
    a1[20] = *v2;
    v4 = v2[1];
    a1[21] = v4;
    result = *((_DWORD *)v2 + 2);
  }
  else
  {
    v6 = (float *)sub_601DFFE4(a1 + 75);
    v7 = (float *)sub_601E039C(a1 + 75, *((_DWORD *)a1 + 79));
    v8 = (float)(v6[18] + v7[18]) * 0.5;
    v9 = (float)(v6[19] + v7[19]) * 0.5;
    *(float *)&v10 = (float)(v6[20] + v7[20]) * 0.5;
    a1[20] = v8;
    a1[21] = v9;
    v4 = v9;
    v3 = v8;
    result = v10;
  }
  *((_DWORD *)a1 + 22) = result;
  a1[23] = v3;
  a1[24] = v4;
  *((_DWORD *)a1 + 25) = result;
  return result;
}
