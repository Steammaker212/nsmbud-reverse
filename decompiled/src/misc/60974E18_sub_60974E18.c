/* sub_60974E18
 * address: 0x60974E18   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60974E18(int a1, float *a2)
{
  float *v3; // r2
  float *v4; // r12
  float *v5; // lr
  float v6; // s0
  float v7; // s2
  float v8; // r3
  float v9; // r0
  float v10; // r5
  float v11; // r5
  int result; // r0
  int v13; // r1
  _DWORD *v14; // r1
  _DWORD *v15; // r0

  v3 = *(float **)(a1 + 2300);
  if ( *a2 == (float)(v3[5] - v3[3]) )
  {
    if ( a2[1] == (float)(v3[6] - v3[4]) )
      goto LABEL_14;
    v5 = v3 + 4;
    v4 = v3 + 6;
  }
  else
  {
    v4 = v3 + 6;
    v5 = v3 + 4;
  }
  FIELD_U32(a1, 2352) |= 0x100u;
  v6 = *a2;
  v7 = a2[1];
  v8 = *a2;
  v9 = *a2;
  if ( *a2 > 0.0 )
    v9 = 0.0;
  v3[3] = v9;
  v10 = v7;
  if ( v7 > 0.0 )
    v10 = 0.0;
  *v5 = v10;
  v11 = 0.0;
  if ( v6 <= 0.0 )
    v8 = 0.0;
  if ( v7 > 0.0 )
    v11 = v7;
  v3[5] = v8;
  *v4 = v11;
  FIELD_F32(a1, 2288) = *a2;
  FIELD_F32(a1, 2292) = a2[1];
  v3 = *(float **)(a1 + 2300);
LABEL_14:
  ((void (__fastcall *)(int, float *))loc_6090E4EC)(a1 + 2304, v3);
  FIELD_U32(a1, 2332) = FIELD_U32(a1, 2308);
  FIELD_U32(a1, 2336) = FIELD_U32(a1, 2312);
  FIELD_U32(a1, 2340) = FIELD_U32(a1, 2316);
  FIELD_U32(a1, 2344) = FIELD_U32(a1, 2320);
  FIELD_U32(a1, 2348) = FIELD_U32(a1, 2324);
  result = FIELD_U32(a1, 8);
  if ( result )
  {
    v13 = FIELD_U32(a1, 2300);
    FIELD_U32(result, 4) = FIELD_U32(v13, 4);
    FIELD_U32(result, 8) = FIELD_U32(v13, 8);
    v14 = *(_DWORD **)(a1 + 2300);
    v15 = *(_DWORD **)(a1 + 8);
    v15[3] = v14[3];
    v15[4] = v14[4];
    v15[5] = v14[5];
    v15[6] = v14[6];
    FIELD_U8(a1, 2404) = 1;
    return 1;
  }
  return result;
}
