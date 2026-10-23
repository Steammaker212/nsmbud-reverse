/* tongue_1_ref
 * address: 0x607CD1D4   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall tongue_1_ref(int a1)
{
  float v2; // s4
  float v3; // s6
  int v5; // [sp+4h] [bp-4Ch] BYREF
  int v6[2]; // [sp+8h] [bp-48h] BYREF
  float v7; // [sp+10h] [bp-40h] BYREF
  float v8; // [sp+14h] [bp-3Ch]
  float v9[3]; // [sp+18h] [bp-38h] BYREF
  float v10; // [sp+24h] [bp-2Ch]
  float v11; // [sp+28h] [bp-28h]
  float v12; // [sp+2Ch] [bp-24h]
  float v13; // [sp+30h] [bp-20h]
  float v14; // [sp+34h] [bp-1Ch]
  float v15; // [sp+38h] [bp-18h]
  float v16; // [sp+3Ch] [bp-14h]
  float v17; // [sp+40h] [bp-10h]
  float v18; // [sp+44h] [bp-Ch]

  v7 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v8 = COERCE_FLOAT("tongue_1");
  (*(void (__fastcall **)(_DWORD, float *, float *))(**(_DWORD **)(a1 + 11368) + 144))(FIELD_U32(a1, 11368), v9, &v7);
  v10 = v10 + (float)((float)((float)(v9[1] * 3.0) + (float)(v9[0] * 5.0)) + (float)(v9[2] * 0.0));
  v14 = v14 + (float)((float)((float)(v12 * 3.0) + (float)(v11 * 5.0)) + (float)(v13 * 0.0));
  v18 = v18 + (float)((float)((float)(v16 * 3.0) + (float)(v15 * 5.0)) + (float)(v17 * 0.0));
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v6[0] = 1082130432;
  v6[1] = 1082130432;
  v5 = 16;
  v7 = v10 - v2;
  v8 = v14 - v3;
  return sub_60764C2C((_DWORD *)a1, (int *)&v7, v6, &v5);
}
