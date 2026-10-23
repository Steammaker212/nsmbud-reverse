/* sub_60863FA0
 * address: 0x60863FA0   size: 1116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60863FA0(int a1, int a2, float *a3, int a4, float *a5, int a6)
{
  unsigned __int8 *v10; // r6
  int result; // r0
  void (__fastcall *v12)(unsigned __int8 *, int, int, _DWORD, _DWORD, int, int, int, int); // r11
  int v13; // r7
  int v14; // r0
  float *v15; // r0
  _BYTE *v16; // r7
  float *v17; // r4
  void (__fastcall *v18)(unsigned __int8 *, int, int, int, _DWORD, int, int, int, int); // r11
  int v19; // r7
  int v20; // r0
  _DWORD *v21; // r0
  int v22; // r6
  float v23; // r0
  char v24; // lr
  int v25; // r1
  int v26; // r0
  int v27; // r2
  int v28; // r1
  _DWORD *v29; // r6
  float v30; // s4
  int v31; // r0
  float v32; // [sp+18h] [bp-38h] BYREF
  int v33; // [sp+1Ch] [bp-34h]
  float v34; // [sp+20h] [bp-30h] BYREF
  int v35; // [sp+24h] [bp-2Ch]

  v10 = *(unsigned __int8 **)(a4 + 4);
  result = v10[16];
  if ( (result & 3) == 0 )
    return result;
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
    v18 = *(void (__fastcall **)(unsigned __int8 *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)v10 + 16);
    v19 = sub_608597F0(a1);
    v20 = sub_608597C0(a1);
    v18(v10, a2, a6, 1, 0, a1 + 80, a1 + 56, v19, v20);
    v16 = (_BYTE *)(a1 + 214);
    if ( (FIELD_U8(a1, 214) & 1) == 0 )
    {
      v17 = a5;
      goto LABEL_24;
    }
LABEL_23:
    v21 = (_DWORD *)sub_60867E38(FIELD_U32(a4, 4), a2);
    v17 = a5;
    v21[108] = FIELD_U32(a1, 56);
    v21[109] = FIELD_U32(a1, 60);
    v21[104] = *(_DWORD *)a5;
    v21[105] = *((_DWORD *)a5 + 1);
    v21[106] = *((_DWORD *)a5 + 2);
    v21[107] = *((_DWORD *)a5 + 3);
    goto LABEL_24;
  }
  v12 = *(void (__fastcall **)(unsigned __int8 *, int, int, _DWORD, _DWORD, int, int, int, int))(*(_DWORD *)v10 + 16);
  v13 = sub_608597F0(a1);
  v14 = sub_608597C0(a1);
  v12(v10, a2, a6, 0, 0, a1 + 80, a1 + 56, v13, v14);
  v15 = (float *)sub_60867E38(FIELD_U32(a4, 4), a2);
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
  v16 = (_BYTE *)(a1 + 214);
  if ( (FIELD_U8(a1, 214) & 1) != 0 )
    goto LABEL_23;
  v17 = a5;
LABEL_24:
  v22 = ((*v16 & 1) << 30) ^ 0x40000C13;
  *(_DWORD *)(sub_60867E38(FIELD_U32(a4, 4), a2) + 556) = v22;
  v23 = *a3;
  v35 = *((_DWORD *)a3 + 1);
  v34 = v23;
  v32 = *v17;
  v33 = FIELD_U32(a1, 60);
  sub_60865254(a2, FIELD_U32(a4, 4), &v34, &v32);
  v25 = FIELD_U32(a2, 192);
  v26 = (*(_DWORD *)(FIELD_U32(a2, 184) + 52) + 559) & -*(_DWORD *)(FIELD_U32(a2, 184) + 52);
  if ( (*(_BYTE *)v25 & 1) != 0 )
  {
    v28 = FIELD_U32(v25, 36);
    do
      v27 = v28 | (1619411788 << v24);
    while ( v28 | ((v27 + v26) << v24) );
  }
  else
  {
    v27 = FIELD_U32(v25, 36);
    FIELD_U32(v25, 36) = v27 + v26;
  }
  **(_DWORD **)(a1 + 224) = v27;
  result = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
  if ( result )
  {
    v29 = (_DWORD *)(result + **(_DWORD **)(a1 + 224));
    if ( v29 )
    {
      qmemcpy(v29, (const void *)sub_60867E38(FIELD_U32(a4, 4), a2), 0x230u);
      v29[139] = ((*v16 & 1) << 30) ^ 0x40020503;
      v30 = v17[1];
      v34 = (float)(*a3 + FIELD_F32(a1, 56)) - v30;
      v31 = *((_DWORD *)a3 + 1);
      v32 = v30;
      v35 = v31;
      v33 = FIELD_U32(a1, 60);
      return sub_6086522C(a2, v29, &v34, &v32);
    }
  }
  return result;
}
