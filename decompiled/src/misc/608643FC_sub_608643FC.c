/* sub_608643FC
 * address: 0x608643FC   size: 1248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608643FC(int a1, int a2, float *a3, int a4, float *a5, int a6)
{
  int v9; // r9
  int v10; // r11
  int v11; // r5
  void (__fastcall *v12)(int, int, int, int, _DWORD, int, int, int, int); // r10
  int v13; // r8
  int v14; // r0
  _DWORD *v15; // r0
  float *v16; // r0
  _DWORD *v17; // r0
  float v18; // s4
  int v19; // r0
  _DWORD *v20; // r5
  float v21; // r0
  int v22; // r5
  int result; // r0
  int v24; // [sp+28h] [bp-50h]
  int v25; // [sp+2Ch] [bp-4Ch]
  int v26; // [sp+30h] [bp-48h]
  int v27; // [sp+34h] [bp-44h]
  _BOOL4 v28; // [sp+38h] [bp-40h]
  float v30; // [sp+40h] [bp-38h] BYREF
  int v31; // [sp+44h] [bp-34h]
  float v32; // [sp+48h] [bp-30h] BYREF
  int v33; // [sp+4Ch] [bp-2Ch]

  v28 = 1;
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
    v28 = FIELD_U8(a1, 66) != 255;
  }
  v9 = 0;
  v27 = FIELD_U8(a1, 214) & 1;
  v26 = (v27 << 30) ^ 0x40000000;
  v25 = a1 + 56;
  v24 = a1 + 80;
  do
  {
    v10 = a4 + 8 * v9;
    v11 = FIELD_U32(v10, 4);
    v12 = *(void (__fastcall **)(int, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)v11 + 16);
    v13 = sub_608597F0(a1);
    v14 = sub_608597C0(a1);
    if ( v28 )
    {
      v12(v11, a2, a6, 0, 0, v24, v25, v13, v14);
      if ( v27 )
      {
        v15 = (_DWORD *)sub_60867E38(FIELD_U32(v10, 4), a2);
        v15[108] = FIELD_U32(a1, 56);
        v15[109] = FIELD_U32(a1, 60);
        v15[104] = *(_DWORD *)a5;
        v15[105] = *((_DWORD *)a5 + 1);
        v15[106] = *((_DWORD *)a5 + 2);
        v15[107] = *((_DWORD *)a5 + 3);
        v16 = (float *)sub_60867E38(FIELD_U32(v10, 4), a2);
        v16[116] = (float)FIELD_U8(a1, 188);
        v16[117] = (float)FIELD_U8(a1, 189);
        v16[118] = (float)FIELD_U8(a1, 190);
        v16[119] = (float)FIELD_U8(a1, 191);
        v16[120] = (float)FIELD_U8(a1, 192);
        v16[121] = (float)FIELD_U8(a1, 193);
        v16[122] = (float)FIELD_U8(a1, 194);
        v16[123] = (float)FIELD_U8(a1, 195);
        v16[124] = (float)FIELD_U8(a1, 196);
        v16[125] = (float)FIELD_U8(a1, 197);
        v16[126] = (float)FIELD_U8(a1, 198);
        v16[127] = (float)FIELD_U8(a1, 199);
        v16[128] = (float)FIELD_U8(a1, 200);
        v16[129] = (float)FIELD_U8(a1, 201);
        v16[130] = (float)FIELD_U8(a1, 202);
        v16[131] = (float)FIELD_U8(a1, 203);
        if ( !v9 )
          goto LABEL_29;
        goto LABEL_26;
      }
    }
    else
    {
      v12(v11, a2, a6, 1, 0, v24, v25, v13, v14);
      if ( v27 )
      {
        v17 = (_DWORD *)sub_60867E38(FIELD_U32(v10, 4), a2);
        v17[108] = FIELD_U32(a1, 56);
        v17[109] = FIELD_U32(a1, 60);
        v17[104] = *(_DWORD *)a5;
        v17[105] = *((_DWORD *)a5 + 1);
        v17[106] = *((_DWORD *)a5 + 2);
        v17[107] = *((_DWORD *)a5 + 3);
      }
    }
    if ( !v9 )
    {
LABEL_29:
      v21 = *a3;
      v33 = *((_DWORD *)a3 + 1);
      v32 = v21;
      v30 = *a5;
      v31 = FIELD_U32(a1, 60);
      goto LABEL_30;
    }
LABEL_26:
    v18 = a5[1];
    v32 = (float)(*a3 + FIELD_F32(a1, 56)) - v18;
    v19 = *((_DWORD *)a3 + 1);
    v30 = v18;
    v33 = v19;
    v31 = FIELD_U32(a1, 60);
    if ( v9 >= 1 && (FIELD_U8(a1, 214) & 2) != 0 )
    {
      v20 = (_DWORD *)sub_60867E38(FIELD_U32(v10, 4), a2);
      qmemcpy(v20, (const void *)sub_60867E38(FIELD_U32(a4, 4), a2), 0x230u);
      v20[139] = dword_60B150EC[v9] | v26 | dword_60B1510C[*(unsigned __int8 *)(a4 + 8 * v9)];
      sub_6086522C(a2, v20, &v32, &v30);
      goto LABEL_31;
    }
LABEL_30:
    v22 = dword_60B150EC[v9] | v26 | dword_60B1510C[*(unsigned __int8 *)(a4 + 8 * v9)];
    *(_DWORD *)(sub_60867E38(FIELD_U32(v10, 4), a2) + 556) = v22;
    sub_60865254(a2, FIELD_U32(v10, 4), &v32, &v30);
LABEL_31:
    result = FIELD_U8(a2, 213);
    ++v9;
    *(_BYTE *)(FIELD_U32(v10, 4) + 48) = result;
  }
  while ( v9 != 2 );
  return result;
}
