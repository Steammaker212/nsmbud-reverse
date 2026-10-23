/* sub_600612E8
 * address: 0x600612E8   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600612E8(int a1)
{
  int result; // r0
  bool v3; // zf
  float *v4; // r0
  float v5; // r2
  float v6; // r3
  float v7; // r4
  float v8; // r5
  float v9; // r6
  float v10; // r7
  float v11; // r3
  float v12; // r4
  float v13; // r5
  float v14; // r6
  float v15; // r7
  _DWORD **v16; // r9
  _DWORD *v17; // t1
  float v18; // [sp+4h] [bp-5Ch] BYREF
  float v19; // [sp+8h] [bp-58h]
  float v20; // [sp+Ch] [bp-54h]
  float v21; // [sp+10h] [bp-50h] BYREF
  float v22; // [sp+14h] [bp-4Ch]
  float v23; // [sp+18h] [bp-48h]
  float v24; // [sp+1Ch] [bp-44h]
  float v25; // [sp+20h] [bp-40h]
  float v26; // [sp+24h] [bp-3Ch]
  float v27; // [sp+28h] [bp-38h]
  float v28; // [sp+2Ch] [bp-34h]
  float v29; // [sp+30h] [bp-30h]
  float v30; // [sp+34h] [bp-2Ch]
  float v31; // [sp+38h] [bp-28h]
  float v32; // [sp+3Ch] [bp-24h]

  result = FIELD_U8(a1, 7248);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U32(a1, 7244);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    v4 = (float *)sub_600D17D0();
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    v9 = v4[4];
    v10 = v4[5];
    v4 += 6;
    v21 = v5;
    v22 = v6;
    v23 = v7;
    v24 = v8;
    v25 = v9;
    v26 = v10;
    v11 = v4[1];
    v12 = v4[2];
    v13 = v4[3];
    v14 = v4[4];
    v15 = v4[5];
    v27 = *v4;
    v28 = v11;
    v29 = v12;
    v30 = v13;
    v31 = v14;
    v32 = v15;
    (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 1160))(a1, &v18);
    v24 = v24 + (float)((float)((float)(v22 * v19) + (float)(v21 * v18)) + (float)(v23 * v20));
    v28 = v28 + (float)((float)((float)(v26 * v19) + (float)(v25 * v18)) + (float)(v27 * v20));
    v32 = v32 + (float)((float)((float)(v30 * v19) + (float)(v29 * v18)) + (float)(v31 * v20));
    v17 = *(_DWORD **)(a1 + 7100);
    v16 = (_DWORD **)(a1 + 7100);
    (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v17 + 60))(*v17, &v21);
    (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v16 + 68))(**v16, v16 - 1739);
    j_ModelWrapper_updateAnims(*v16);
    sub_604218E0(*v16);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v16 + 52))(**v16);
    return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v16 + 56))(**v16);
  }
  return result;
}
