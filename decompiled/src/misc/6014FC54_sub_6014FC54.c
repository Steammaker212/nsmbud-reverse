/* sub_6014FC54
 * address: 0x6014FC54   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6014FC54(int a1, float *a2, float *a3, float *a4, int a5, int a6, int a7)
{
  float *v11; // r0
  float v12; // s4
  float v13; // s6
  float *v14; // r0
  float v15; // s2
  float *v16; // r0
  float v17; // s0
  float v18; // s2
  float v19; // s4
  float result; // s0
  float v21; // [sp+0h] [bp-30h] BYREF
  float v22; // [sp+4h] [bp-2Ch]
  float v23[10]; // [sp+8h] [bp-28h] BYREF

  if ( a7 > 1 )
  {
    sub_60153134(a5, v23);
    sub_60153134(a6, &v21);
  }
  else
  {
    sub_60153190(a5, v23);
    sub_60153190(a6, &v21);
  }
  v11 = *(float **)(a1 + 2208);
  v12 = *v11;
  v13 = v11[1];
  v14 = (float *)((char *)&unk_60AF4A10 + 8 * a7);
  v15 = (float)(v13 + v23[1]) + v14[1];
  *a2 = (float)(v12 + v23[0]) + *v14;
  a2[1] = v15;
  v16 = *(float **)(a1 + 2204);
  v17 = v21;
  v18 = v22;
  v19 = v16[1] + v22;
  *a3 = *v16 + v21;
  a3[1] = v19;
  if ( a7 == 3 )
    a3[1] = v19 + FIELD_F32(a1, 2328);
  result = -v17;
  *a4 = result;
  a4[1] = -v18;
  return result;
}
