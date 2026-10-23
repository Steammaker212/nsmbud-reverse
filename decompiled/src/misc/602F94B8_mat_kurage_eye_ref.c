/* mat_kurage_eye_ref
 * address: 0x602F94B8   size: 1324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall mat_kurage_eye_ref(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2
  float *v5; // r5
  float *v6; // r7
  float *v7; // r3
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float v11; // s12
  float v12; // s5
  float v13; // s8
  float v14; // s1
  float v15; // s9
  float v16; // s13
  int v17; // r5
  char v18; // r12
  int v19; // r6
  int (__fastcall *v20)(int, int); // r7
  int v21; // r0
  int v22; // r0
  int v23; // r5
  float v24; // s16
  float v25; // s2
  float v26; // s4
  float v27; // s6
  float v28; // s0
  int v29; // r5
  int v30; // r0
  int v31; // r6
  float v32; // s0
  _DWORD v34[3]; // [sp+14h] [bp-7Ch] BYREF
  int v35; // [sp+20h] [bp-70h]
  Vec3 a3; // [sp+24h] [bp-6Ch] BYREF
  float v37; // [sp+30h] [bp-60h] BYREF
  float v38; // [sp+34h] [bp-5Ch]
  float v39; // [sp+38h] [bp-58h]
  float v40; // [sp+3Ch] [bp-54h]
  float v41; // [sp+40h] [bp-50h]
  float v42; // [sp+44h] [bp-4Ch]
  float v43; // [sp+48h] [bp-48h]
  float y; // [sp+4Ch] [bp-44h]
  float v45; // [sp+50h] [bp-40h]
  float v46; // [sp+54h] [bp-3Ch]
  float v47; // [sp+58h] [bp-38h]
  float v48; // [sp+5Ch] [bp-34h]
  _DWORD v49[12]; // [sp+60h] [bp-30h] BYREF

  v49[2] = FIELD_U32(a1, 11916);
  v49[1] = FIELD_U32(a1, 11912);
  v49[0] = FIELD_U32(a1, 11908);
  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v6 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v8 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v9 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v10 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v11 = v7[2] + (float)(v8 * v7[3]);
  v12 = v5[2] + (float)(v9 * v5[3]);
  v13 = *v7 + (float)(v8 * v7[1]);
  v14 = *v5 + (float)(v9 * v5[1]);
  v15 = *v6 + (float)(v10 * v6[1]);
  v16 = v6[2] + (float)(v10 * v6[3]);
  v37 = (float)(v12 * v11) + (float)(v15 * (float)(v14 * v13));
  v41 = v16 * v13;
  v45 = (float)(v15 * (float)(v12 * v13)) - (float)(v14 * v11);
  v38 = (float)(v15 * (float)(v14 * v11)) - (float)(v12 * v13);
  v42 = v16 * v11;
  v46 = (float)(v14 * v13) + (float)(v15 * (float)(v12 * v11));
  v39 = v16 * v14;
  v43 = -v15;
  v47 = v16 * v12;
  v40 = FIELD_F32(a1, 108);
  y = FIELD_F32(a1, 112);
  v48 = FIELD_F32(a1, 116);
  v17 = **(_DWORD **)(a1 + 6304);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v17 + 60))(v17, &v37);
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v17 + 68))(v17, v49);
  (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 52))(v17);
  if ( FIELD_U32(a1, 6448) != 1 )
  {
    FIELD_U32(a1, 6440) = 0;
    FIELD_U32(a1, 6444) = 0;
  }
  if ( ((unsigned int)&dword_60C929F4[3] & ~(1613731460 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C929F4[3]) )
  {
    dword_60C92A14 = (int)&sead__SafeStringBase__vtable;
    dword_60C92A18 = (int)"mat_kurage_eye";
    _cxa_guard_release(&dword_60C929F4[3]);
  }
  v19 = **(_DWORD **)(a1 + 6304);
  v20 = *(int (__fastcall **)(int, int))(*(_DWORD *)v19 + 132);
  v21 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v19 + 124))(v19, &dword_60C92A14);
  v22 = v20(v19, v21);
  if ( v22 )
  {
    v34[0] = 0;
    (*(void (__fastcall **)(int, _DWORD, int *, _DWORD *, int))(*(_DWORD *)v22 + 4))(
      v22,
      0,
      &dword_60B3B954,
      v34,
      a1 + 6440);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 56))(v17);
  v37 = 1.0;
  v38 = 0.0;
  v39 = 0.0;
  v41 = 0.0;
  v42 = 1.0;
  v43 = 0.0;
  v45 = 0.0;
  v46 = 0.0;
  v47 = 1.0;
  v40 = FIELD_F32(a1, 108);
  y = FIELD_F32(a1, 112);
  v48 = FIELD_F32(a1, 116);
  v23 = **(_DWORD **)(a1 + 6308);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v23 + 60))(v23, &v37);
  (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 52))(v23);
  (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 56))(v23);
  FIELD_U32(a1, 6324) = FIELD_U32(a1, 6360);
  FIELD_U32(a1, 6332) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6336) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6340) = FIELD_U32(a1, 116);
  LightMask__update((LightMask *)(a1 + 6320));
  v24 = 0.0;
  v25 = FIELD_F32(a1, 108);
  v26 = FIELD_F32(a1, 112);
  v27 = FIELD_F32(a1, 116);
  v28 = FIELD_F32(a1, 6460);
  v37 = 1.0;
  v38 = 0.0;
  v39 = 0.0;
  v41 = 0.0;
  v42 = 1.0;
  v43 = 0.0;
  v45 = 0.0;
  v46 = 0.0;
  v47 = 1.0;
  a3.x = v25 + 0.0;
  v40 = v25 + 0.0;
  a3.y = (float)(v28 + 10.0) + v26;
  y = a3.y;
  a3.z = v27 + 0.0;
  v48 = v27 + 0.0;
  v29 = **(_DWORD **)(a1 + 6312);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v29 + 60))(v29, &v37);
  (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 52))(v29);
  v30 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v29 + 132))(v29, 0);
  v31 = v30;
  if ( v30 )
  {
    memset(v34, 0, sizeof(v34));
    v35 = 1065353216;
    (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v30 + 16))(v30, 0, v34);
    v32 = FIELD_F32(a1, 6516);
    if ( v32 >= 0.0 )
    {
      v24 = FIELD_F32(a1, 6516);
      if ( v32 > 1.0 )
        v24 = 1.0;
    }
    v35 = LODWORD(v24);
    (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v31 + 12))(v31, 0, v34);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 56))(v29);
  v34[0] = (int)(float)((float)dword_60C929F4[0]
                      + (float)((float)(dword_60C929F0 - dword_60C929F4[0]) * (float)(FIELD_F32(a1, 6524) / 240.0)));
  return LightSource_update1((LightSource *)(a1 + 6368), 22, &a3, 0, 0, 0, 0, v34, 0);
}
