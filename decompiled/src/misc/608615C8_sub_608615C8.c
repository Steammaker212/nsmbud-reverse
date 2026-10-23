/* sub_608615C8
 * address: 0x608615C8   size: 1492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608615C8(int a1, int a2)
{
  float v4; // s20
  float v5; // s22
  float v6; // s24
  float v7; // s26
  __n64 v8; // kr00_8
  int v9; // r0
  int result; // r0
  int v11; // r10
  int v12; // r7
  _DWORD *v13; // r9
  void (__fastcall *v14)(int, int, int, _DWORD, int, int, int, int, int); // r6
  int v15; // r4
  int v16; // r0
  int v17; // r4
  int v18; // r0
  float *v19; // r0
  float v20; // s6
  float v21; // s2
  float v22; // s10
  float v23; // s12
  float v24; // s4
  float v25; // s0
  float v26; // s10
  float v27; // s12
  int v28; // r4
  void (__fastcall *v29)(int, int, int, int, int, int, int, int, int); // r7
  int v30; // r6
  int v31; // r0
  int v32; // [sp+Ch] [bp-84h]
  unsigned __int64 v33; // [sp+18h] [bp-78h] BYREF
  float v34; // [sp+20h] [bp-70h] BYREF
  float v35; // [sp+24h] [bp-6Ch]
  float v36; // [sp+28h] [bp-68h]
  float v37; // [sp+2Ch] [bp-64h]
  float v38; // [sp+30h] [bp-60h] BYREF
  float v39; // [sp+34h] [bp-5Ch]
  float v40; // [sp+38h] [bp-58h] BYREF
  float v41; // [sp+3Ch] [bp-54h]

  v4 = (float)FIELD_U16(a1, 178);
  v34 = v4;
  v5 = (float)FIELD_U16(a1, 180);
  v35 = v5;
  v6 = (float)FIELD_U16(a1, 182);
  v36 = v6;
  v7 = (float)FIELD_U16(a1, 184);
  v37 = v7;
  v8.n64_u64[0] = sub_60858B20(a1).n64_u64[0];
  v33 = v8.n64_u64[0];
  v9 = FIELD_S8(a1, 213);
  switch ( v9 )
  {
    case 8:
      sub_608630C8(a1, a2, &v33, FIELD_U32(a1, 216), &v34, FIELD_U8(a1, 66));
      break;
    case 4:
      sub_60862B20(a1, a2, &v33, FIELD_U32(a1, 216), &v34, FIELD_U8(a1, 66));
      break;
    case 1:
      sub_608624D4(a1, a2, &v33, FIELD_U32(a1, 216), &v34, FIELD_U8(a1, 66));
      break;
  }
  result = FIELD_U8(a1, 214);
  if ( (result & 4) == 0 )
  {
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
      && FIELD_U8(a1, 203) == 255
      && FIELD_U8(a1, 66) == 255 )
    {
      v13 = (_DWORD *)(a1 + 220);
      v28 = FIELD_U32(a1, 220);
      v29 = *(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)v28 + 16);
      v30 = sub_608597F0(a1);
      v31 = sub_608597C0(a1);
      v29(v28, a2, 255, 1, 1, a1 + 80, a1 + 56, v30, v31);
      v17 = 0;
    }
    else
    {
      v11 = FIELD_U8(a1, 66);
      v13 = (_DWORD *)(a1 + 220);
      v12 = FIELD_U32(a1, 220);
      v14 = *(void (__fastcall **)(int, int, int, _DWORD, int, int, int, int, int))(*(_DWORD *)v12 + 16);
      v15 = sub_608597F0(a1);
      v16 = sub_608597C0(a1);
      v32 = v15;
      v17 = 0;
      v14(v12, a2, v11, 0, 1, a1 + 80, a1 + 56, v32, v16);
      LOBYTE(v14) = FIELD_U8(a1, 214);
      v18 = sub_60867E38(FIELD_U32(a1, 220), a2);
      if ( ((unsigned __int8)v14 & 1) != 0 )
      {
        FIELD_U32(v18, 432) = FIELD_U32(a1, 56);
        FIELD_U32(v18, 436) = FIELD_U32(a1, 60);
        FIELD_F32(v18, 416) = v4;
        FIELD_F32(v18, 420) = v5;
        FIELD_F32(v18, 424) = v6;
        FIELD_F32(v18, 428) = v7;
        v19 = (float *)sub_60867E38(FIELD_U32(a1, 220), a2);
        v17 = 3328;
        v19[116] = (float)FIELD_U8(a1, 188);
        v19[117] = (float)FIELD_U8(a1, 189);
        v19[118] = (float)FIELD_U8(a1, 190);
        v19[119] = (float)FIELD_U8(a1, 191);
        v19[120] = (float)FIELD_U8(a1, 192);
        v19[121] = (float)FIELD_U8(a1, 193);
        v19[122] = (float)FIELD_U8(a1, 194);
        v19[123] = (float)FIELD_U8(a1, 195);
        v19[124] = (float)FIELD_U8(a1, 196);
        v19[125] = (float)FIELD_U8(a1, 197);
        v19[126] = (float)FIELD_U8(a1, 198);
        v19[127] = (float)FIELD_U8(a1, 199);
        v19[128] = (float)FIELD_U8(a1, 200);
        v19[129] = (float)FIELD_U8(a1, 201);
        v19[130] = (float)FIELD_U8(a1, 202);
        v19[131] = (float)FIELD_U8(a1, 203);
        v4 = v34;
        v5 = v35;
        v6 = v36;
        v7 = v37;
        v8.n64_u64[0] = v33;
      }
      else
      {
        FIELD_F32(v18, 464) = (float)FIELD_U8(a1, 188);
        FIELD_F32(v18, 468) = (float)FIELD_U8(a1, 189);
        FIELD_F32(v18, 472) = (float)FIELD_U8(a1, 190);
        FIELD_F32(v18, 476) = (float)FIELD_U8(a1, 191);
        FIELD_F32(v18, 480) = (float)FIELD_U8(a1, 192);
        FIELD_F32(v18, 484) = (float)FIELD_U8(a1, 193);
        FIELD_F32(v18, 488) = (float)FIELD_U8(a1, 194);
        FIELD_F32(v18, 492) = (float)FIELD_U8(a1, 195);
        FIELD_F32(v18, 496) = (float)FIELD_U8(a1, 196);
        FIELD_F32(v18, 500) = (float)FIELD_U8(a1, 197);
        FIELD_F32(v18, 504) = (float)FIELD_U8(a1, 198);
        FIELD_F32(v18, 508) = (float)FIELD_U8(a1, 199);
        FIELD_F32(v18, 512) = (float)FIELD_U8(a1, 200);
        FIELD_F32(v18, 516) = (float)FIELD_U8(a1, 201);
        FIELD_F32(v18, 520) = (float)FIELD_U8(a1, 202);
        FIELD_F32(v18, 524) = (float)FIELD_U8(a1, 203);
      }
    }
    *(_DWORD *)(sub_60867E38(*v13, a2) + 556) = v17;
    v40 = v8.n64_f32[0] + v4;
    v41 = v8.n64_f32[1] - v6;
    v20 = (float)(FIELD_F32(a1, 56) - v4) - v5;
    v21 = (float)(FIELD_F32(a1, 60) - v6) - v7;
    v38 = v20;
    v39 = v21;
    if ( (FIELD_U8(a1, 214) & 8) != 0 )
    {
      v22 = (float)FIELD_S16(a1, 170) * 0.0625;
      v23 = (float)FIELD_S16(a1, 174) * 0.0625;
      v24 = (float)(v8.n64_f32[0] + v4) - v22;
      v25 = (float)(v8.n64_f32[1] - v6) + v23;
      v26 = v22 + (float)((float)FIELD_S16(a1, 172) * 0.0625);
      v27 = v23 + (float)((float)FIELD_S16(a1, 176) * 0.0625);
      v40 = v24;
      v41 = v25;
      v38 = v20 + v26;
      v39 = v21 + v27;
    }
    return sub_608652A0(a2, FIELD_U32(a1, 220), &v40, &v38, FIELD_U8(a1, 205), FIELD_U32(a1, 208));
  }
  return result;
}
