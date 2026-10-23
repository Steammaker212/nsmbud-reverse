/* sub_6023E194
 * address: 0x6023E194   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6023E194(float *a1, int a2)
{
  int v4; // r6
  float v5; // s16
  float v6; // s18
  int v7; // r0
  float v8; // s14
  float v9; // s8
  float v10; // s10
  float v11; // s16
  float v12; // s18
  float v13; // s0
  float v14; // s2
  float v15; // [sp+0h] [bp-38h] BYREF
  float v16; // [sp+4h] [bp-34h]
  int v17; // [sp+8h] [bp-30h]
  float v18[11]; // [sp+Ch] [bp-2Ch] BYREF

  v4 = FIELD_U32(a2, 116);
  v5 = FIELD_F32(a2, 112);
  v6 = FIELD_F32(a2, 108);
  v7 = FIELD_U32(a2, 648);
  v15 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v16 = COERCE_FLOAT("spin");
  sub_60793F04(FIELD_U32(v7, 4), v18, &v15);
  v8 = a1[2996];
  v9 = v18[0] - v6;
  v10 = v18[1] - v5;
  v11 = a1[27] - a1[146];
  v12 = a1[28] - a1[147];
  v15 = v11 + (float)(a1[2995] - v9);
  v16 = v12 + (float)(v8 - v10);
  v17 = v4;
  sub_60833454(a2 + 108, &v15, 4.0, 2.0, 1.0);
  v13 = v15;
  v14 = v16;
  if ( (float)((float)(v12 * (float)(FIELD_F32(a2, 112) - v16)) + (float)(v11 * (float)(FIELD_F32(a2, 108) - v15))) <= 0.0 )
  {
    FIELD_U32(a2, 116) = v4;
    FIELD_F32(a2, 108) = v13;
    FIELD_F32(a2, 112) = v14;
  }
}
