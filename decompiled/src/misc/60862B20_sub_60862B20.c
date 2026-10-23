/* sub_60862B20
 * address: 0x60862B20   size: 1432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60862B20(int a1, int a2, float *a3, int a4, float *a5, int a6)
{
  float v8; // r3
  float v9; // s0
  float v10; // s2
  float v11; // r2
  float v12; // s0
  float v13; // s6
  char v14; // r2
  _DWORD *v15; // r7
  float *v16; // r4
  int v17; // r8
  int result; // r0
  int v19; // r9
  unsigned __int8 *v20; // r5
  bool v21; // zf
  int v22; // r6
  int v23; // r0
  _DWORD *v24; // r0
  float *v25; // r0
  _DWORD *v26; // r0
  int v27; // r0
  _DWORD *v28; // r5
  int v29; // r5
  int v30; // [sp+24h] [bp-9Ch]
  int v31; // [sp+28h] [bp-98h]
  int v32; // [sp+2Ch] [bp-94h]
  int v33; // [sp+30h] [bp-90h]
  _BOOL4 v34; // [sp+34h] [bp-8Ch]
  int v35; // [sp+38h] [bp-88h]
  int v36; // [sp+3Ch] [bp-84h]
  void (__fastcall *v38)(unsigned __int8 *, int, int, int, _DWORD, int, int, int, int); // [sp+44h] [bp-7Ch]
  int v39; // [sp+48h] [bp-78h]
  int v40; // [sp+4Ch] [bp-74h]
  int v41; // [sp+50h] [bp-70h]
  int v42; // [sp+54h] [bp-6Ch]
  float v43; // [sp+58h] [bp-68h] BYREF
  float v44; // [sp+5Ch] [bp-64h]
  float v45; // [sp+60h] [bp-60h]
  float v46; // [sp+64h] [bp-5Ch]
  float v47; // [sp+68h] [bp-58h]
  float v48; // [sp+6Ch] [bp-54h]
  float v49; // [sp+70h] [bp-50h]
  float v50; // [sp+74h] [bp-4Ch]
  _DWORD v51[18]; // [sp+78h] [bp-48h] BYREF

  v8 = *a3;
  *(float *)&v51[1] = a3[1];
  *(float *)v51 = v8;
  v9 = a5[1];
  v10 = FIELD_F32(a1, 56);
  v43 = v10 - v9;
  v44 = a5[2];
  *(float *)&v51[2] = (float)(v8 + v10) - v9;
  v11 = a3[1];
  v45 = v9;
  *(float *)&v51[3] = v11;
  v12 = a5[3];
  v13 = FIELD_F32(a1, 60);
  *(float *)&v51[4] = v8;
  v46 = v13 - v12;
  *(float *)&v51[5] = v11 - v44;
  v47 = *a5;
  v48 = v13 - v44;
  *(float *)&v51[6] = v8 + v47;
  v49 = v10 - v47;
  *(float *)&v51[7] = (float)(v11 - v13) + v12;
  v50 = v12;
  v14 = FIELD_U8(a1, 214);
  v36 = v14 & 1;
  v34 = 1;
  if ( FIELD_U8(a1, 188) == 255
    && FIELD_U8(a1, 189) == 255
    && FIELD_U8(a1, 190) == 255
    && FIELD_U8(a1, 191) == 255
    && FIELD_U8(a1, 192) == 255
    && FIELD_U8(a1, 193) == 255
    && FIELD_U8(a1, 194) == 255
    && FIELD_U8(a1, 195) == 255
    && FIELD_U8(a1, 196) == 255
    && FIELD_U8(a1, 197) == 255
    && FIELD_U8(a1, 198) == 255
    && FIELD_U8(a1, 199) == 255
    && FIELD_U8(a1, 200) == 255
    && FIELD_U8(a1, 201) == 255
    && FIELD_U8(a1, 202) == 255
    && FIELD_U8(a1, 203) == 255 )
  {
    v34 = FIELD_U8(a1, 66) != 255;
  }
  v15 = v51;
  v16 = &v43;
  v17 = 0;
  v35 = a4;
  v30 = a1 + 80;
  v33 = a1 + 56;
  v32 = v14 & 2;
  v31 = (v36 << 30) ^ 0x40000000;
  result = (int)dword_60B150A4;
  do
  {
    v19 = a4 + 8 * v17;
    v20 = *(unsigned __int8 **)(v19 + 4);
    v21 = v20 == 0;
    if ( v20 )
    {
      result = v20[16];
      v21 = (result & 3) == 0;
    }
    if ( !v21 )
    {
      v38 = *(void (__fastcall **)(unsigned __int8 *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)v20 + 16);
      v22 = sub_608597F0(a1);
      v23 = sub_608597C0(a1);
      if ( v34 )
      {
        v38(v20, a2, a6, 0, 0, v30, v33, v22, v23);
        if ( v36 )
        {
          v24 = (_DWORD *)sub_60867E38(FIELD_U32(v19, 4), a2);
          v24[108] = FIELD_U32(a1, 56);
          v24[109] = FIELD_U32(a1, 60);
          v24[104] = *(_DWORD *)a5;
          v24[105] = *((_DWORD *)a5 + 1);
          v24[106] = *((_DWORD *)a5 + 2);
          v24[107] = *((_DWORD *)a5 + 3);
          v25 = (float *)sub_60867E38(FIELD_U32(v19, 4), a2);
          v25[116] = (float)FIELD_U8(a1, 188);
          v25[117] = (float)FIELD_U8(a1, 189);
          v25[118] = (float)FIELD_U8(a1, 190);
          v25[119] = (float)FIELD_U8(a1, 191);
          v25[120] = (float)FIELD_U8(a1, 192);
          v25[121] = (float)FIELD_U8(a1, 193);
          v25[122] = (float)FIELD_U8(a1, 194);
          v25[123] = (float)FIELD_U8(a1, 195);
          v25[124] = (float)FIELD_U8(a1, 196);
          v25[125] = (float)FIELD_U8(a1, 197);
          v25[126] = (float)FIELD_U8(a1, 198);
          v25[127] = (float)FIELD_U8(a1, 199);
          v25[128] = (float)FIELD_U8(a1, 200);
          v25[129] = (float)FIELD_U8(a1, 201);
          v25[130] = (float)FIELD_U8(a1, 202);
          v25[131] = (float)FIELD_U8(a1, 203);
        }
      }
      else
      {
        v38(v20, a2, a6, 1, 0, v30, v33, v22, v23);
        if ( v36 )
        {
          v26 = (_DWORD *)sub_60867E38(FIELD_U32(v19, 4), a2);
          v26[108] = FIELD_U32(a1, 56);
          v26[109] = FIELD_U32(a1, 60);
          v26[104] = *(_DWORD *)a5;
          v26[105] = *((_DWORD *)a5 + 1);
          v26[106] = *((_DWORD *)a5 + 2);
          v26[107] = *((_DWORD *)a5 + 3);
        }
      }
      v27 = FIELD_U32(v19, 4);
      a4 = v35;
      if ( v32 && v17 >= 1 )
      {
        v28 = (_DWORD *)sub_60867E38(v27, a2);
        v39 = v28[112];
        v40 = v28[113];
        v41 = v28[114];
        v42 = v28[115];
        qmemcpy(v28, (const void *)sub_60867E38(FIELD_U32(v35, 4), a2), 0x230u);
        v28[112] = v39;
        v28[113] = v40;
        v28[114] = v41;
        v28[115] = v42;
        v29 = dword_60B150A4[v17] | v31 | dword_60B150B4[*(unsigned __int8 *)(v35 + 8 * v17)];
        v27 = FIELD_U32(v19, 4);
      }
      else
      {
        v29 = dword_60B150A4[v17] | v31 | dword_60B150B4[*(unsigned __int8 *)(v35 + 8 * v17)];
      }
      *(_DWORD *)(sub_60867E38(v27, a2) + 556) = v29;
      result = sub_60865254(a2, FIELD_U32(v19, 4), v15, v16);
    }
    ++v17;
    v16 += 2;
    v15 += 2;
  }
  while ( v17 != 4 );
  return result;
}
