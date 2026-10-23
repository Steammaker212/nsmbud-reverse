/* skl_root_ref_1C4EA0
 * address: 0x601C4EA0   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall skl_root_ref_1C4EA0(float *result)
{
  float *v1; // r4
  float *v2; // r0
  int v3; // r5
  float v4; // r1
  float v5; // r2
  float v6; // s0
  float v7; // s0
  void (__fastcall *v8)(float *, _DWORD *, _DWORD *); // r3
  _DWORD v9[2]; // [sp+4h] [bp-7Ch] BYREF
  _DWORD v10[3]; // [sp+Ch] [bp-74h] BYREF
  _BYTE v11[12]; // [sp+18h] [bp-68h] BYREF
  int v12; // [sp+24h] [bp-5Ch]
  int v13; // [sp+34h] [bp-4Ch]
  int v14; // [sp+44h] [bp-3Ch]
  float v15; // [sp+48h] [bp-38h] BYREF
  float v16; // [sp+4Ch] [bp-34h]
  float v17; // [sp+50h] [bp-30h]

  v1 = result;
  if ( result[29] != 0.0 || result[30] != 0.0 || result[31] != 0.0 )
  {
    v2 = result + 29;
    v3 = 893;
    if ( (*((_DWORD *)v1 + 66) | 1) != 7 )
      v3 = dword_60AFC25C[dword_60AFC268[*((_DWORD *)v1 + 67)]];
    v4 = *v2;
    v5 = v1[30];
    v17 = v1[31];
    v16 = v5;
    v15 = v4;
    v6 = sqrtf((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v17 * v17));
    if ( v6 > 0.0 )
    {
      v7 = 1.0 / v6;
      v15 = v7 * v4;
      v16 = v7 * v5;
      v17 = v7 * v17;
    }
    result = (float *)sub_6004C420((int)v11, (float *)&dword_60B3B974, &v15);
    if ( result == (float *)1 )
    {
      v8 = *(void (__fastcall **)(float *, _DWORD *, _DWORD *))(*(_DWORD *)v1 + 136);
      v9[0] = &sead__SafeStringBase__vtable;
      v9[1] = "skl_root";
      v8(v1, v10, v9);
      v12 = v10[0];
      v13 = v10[1];
      v14 = v10[2];
      return (float *)sub_602372C0(v1 + 195, v3, v11, 0);
    }
  }
  return result;
}
