/* tongue_tip_ref
 * address: 0x607CD09C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall tongue_tip_ref(_DWORD *a1)
{
  int *v2; // r6
  int *result; // r0
  float v4; // s6
  float v5; // s8
  float v6; // s12
  float v7; // s2
  float v8; // s0
  int v9; // [sp+4h] [bp-3Ch] BYREF
  float v10; // [sp+8h] [bp-38h] BYREF
  float v11; // [sp+Ch] [bp-34h]
  float v12; // [sp+10h] [bp-30h] BYREF
  float v13; // [sp+14h] [bp-2Ch]
  float v14; // [sp+18h] [bp-28h] BYREF
  float v15; // [sp+1Ch] [bp-24h]
  float v16; // [sp+24h] [bp-1Ch] BYREF
  float v17; // [sp+28h] [bp-18h]

  v14 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v15 = COERCE_FLOAT("tongue_tip");
  v2 = a1 + 2842;
  sub_60793F04(a1[2842], &v16);
  v12 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v13 = COERCE_FLOAT("tongue_1");
  sub_60793F04(*v2, &v14);
  result = v2 - 2814;
  v4 = (float)(v16 - v14) * 0.5;
  v5 = (float)((float)(v16 + v14) * 0.5) - *((float *)v2 - 2815);
  v6 = (float)((float)(v17 + v15) * 0.5) - *((float *)v2 - 2814);
  v7 = fabsf(v4);
  v8 = fabsf((float)(v17 - v15) * 0.5);
  v10 = v7;
  v11 = v8;
  v12 = v5;
  v13 = v6;
  if ( v4 != 0.0 )
  {
    v10 = v7 + 4.0;
    if ( v8 < 8.0 )
      v11 = 8.0;
    v9 = 15;
    return sub_60764C2C(a1, (int *)&v12, (int *)&v10, &v9);
  }
  return result;
}
