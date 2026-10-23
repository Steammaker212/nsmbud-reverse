/* sub_60861BA0
 * address: 0x60861BA0   size: 1144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60861BA0(int a1, int a2)
{
  float v4; // s20
  float v5; // s22
  __n64 v6; // kr00_8
  int v7; // r0
  int result; // r0
  int v9; // r7
  int v10; // r6
  void (__fastcall *v11)(int, int, int, bool, _DWORD, int, int, int, int); // r9
  int v12; // r4
  int v13; // r0
  int v14; // r0
  float *v15; // r0
  float v16; // s26
  float v17; // s24
  char v18; // r4
  int v19; // r0
  int v20; // r1
  float v21; // s6
  float v22; // s2
  float v23; // s10
  float v24; // s12
  float v25; // s4
  float v26; // s0
  float v27; // s10
  float v28; // s12
  _BOOL4 v29; // [sp+14h] [bp-84h]
  unsigned __int64 v30; // [sp+18h] [bp-80h] BYREF
  float v31; // [sp+20h] [bp-78h] BYREF
  float v32; // [sp+24h] [bp-74h]
  float v33; // [sp+28h] [bp-70h]
  float v34; // [sp+2Ch] [bp-6Ch]
  float v35; // [sp+30h] [bp-68h] BYREF
  float v36; // [sp+34h] [bp-64h]
  float v37; // [sp+38h] [bp-60h] BYREF
  float v38; // [sp+3Ch] [bp-5Ch]

  v4 = (float)FIELD_U16(a1, 178);
  v31 = v4;
  v5 = (float)FIELD_U16(a1, 180);
  v32 = v5;
  v33 = 0.0;
  v34 = 0.0;
  FIELD_F32(a1, 60) = (float)FIELD_U16(a1, 182);
  FIELD_U8(a1, 64) |= 0x10u;
  v6.n64_u64[0] = sub_60858B20(a1).n64_u64[0];
  v30 = v6.n64_u64[0];
  v7 = FIELD_S8(a1, 213);
  if ( v7 == 2 )
  {
    sub_60863AB0(a1, a2, &v30, FIELD_U32(a1, 216), &v31, FIELD_U8(a1, 66));
  }
  else if ( v7 == 1 )
  {
    sub_6086365C(a1, a2, &v30, FIELD_U32(a1, 216), &v31, FIELD_U8(a1, 66));
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
      && FIELD_U8(a1, 196) == 255 )
    {
      v29 = 1;
      if ( FIELD_U8(a1, 197) == 255
        && FIELD_U8(a1, 198) == 255
        && FIELD_U8(a1, 199) == 255
        && FIELD_U8(a1, 200) == 255
        && FIELD_U8(a1, 201) == 255
        && FIELD_U8(a1, 202) == 255
        && FIELD_U8(a1, 203) == 255 )
      {
        v29 = FIELD_U8(a1, 66) != 255;
      }
    }
    else
    {
      v29 = 1;
    }
    v9 = FIELD_U32(a1, 220);
    v10 = FIELD_U8(a1, 66);
    v11 = *(void (__fastcall **)(int, int, int, bool, _DWORD, int, int, int, int))(*(_DWORD *)v9 + 16);
    v12 = sub_608597F0(a1);
    v13 = sub_608597C0(a1);
    v11(v9, a2, v10, !v29, 0, a1 + 80, a1 + 56, v12, v13);
    if ( !v29 )
    {
      v17 = 0.0;
      v16 = 0.0;
    }
    else
    {
      v14 = sub_60867E38(FIELD_U32(a1, 220), a2);
      FIELD_U32(v14, 432) = FIELD_U32(a1, 56);
      FIELD_U32(v14, 436) = FIELD_U32(a1, 60);
      FIELD_F32(v14, 416) = v4;
      FIELD_F32(v14, 420) = v5;
      FIELD_U32(v14, 424) = 0;
      FIELD_U32(v14, 428) = 0;
      v15 = (float *)sub_60867E38(FIELD_U32(a1, 220), a2);
      v15[116] = (float)FIELD_U8(a1, 188);
      v15[117] = (float)FIELD_U8(a1, 189);
      v15[118] = (float)FIELD_U8(a1, 190);
      v15[119] = (float)FIELD_U8(a1, 191);
      v15[120] = (float)FIELD_U8(a1, 192);
      v15[121] = (float)FIELD_U8(a1, 193);
      v15[122] = (float)FIELD_U8(a1, 194);
      v15[123] = (float)FIELD_U8(a1, 195);
      v15[124] = (float)FIELD_U8(a1, 196);
      v15[125] = (float)FIELD_U8(a1, 197);
      v15[126] = (float)FIELD_U8(a1, 198);
      v15[127] = (float)FIELD_U8(a1, 199);
      v15[128] = (float)FIELD_U8(a1, 200);
      v15[129] = (float)FIELD_U8(a1, 201);
      v15[130] = (float)FIELD_U8(a1, 202);
      v15[131] = (float)FIELD_U8(a1, 203);
      v4 = v31;
      v5 = v32;
      v16 = v33;
      v17 = v34;
      v6.n64_u64[0] = v30;
    }
    v18 = FIELD_U8(a1, 214);
    v19 = sub_60867E38(FIELD_U32(a1, 220), a2);
    v20 = v18 & 1;
    if ( (v18 & 1) != 0 )
      v20 = 3328;
    FIELD_U32(v19, 556) = v20;
    v37 = v6.n64_f32[0] + v4;
    v38 = v6.n64_f32[1] - v16;
    v21 = (float)(FIELD_F32(a1, 56) - v4) - v5;
    v22 = (float)(FIELD_F32(a1, 60) - v16) - v17;
    v35 = v21;
    v36 = v22;
    if ( (FIELD_U8(a1, 214) & 8) != 0 )
    {
      v23 = (float)FIELD_S16(a1, 170) * 0.0625;
      v24 = (float)FIELD_S16(a1, 174) * 0.0625;
      v25 = (float)(v6.n64_f32[0] + v4) - v23;
      v26 = (float)(v6.n64_f32[1] - v16) + v24;
      v27 = v23 + (float)((float)FIELD_S16(a1, 172) * 0.0625);
      v28 = v24 + (float)((float)FIELD_S16(a1, 176) * 0.0625);
      v37 = v25;
      v38 = v26;
      v35 = v21 + v27;
      v36 = v22 + v28;
    }
    return sub_608652A0(a2, FIELD_U32(a1, 220), &v37, &v35, FIELD_U8(a1, 205), FIELD_U32(a1, 208));
  }
  return result;
}
