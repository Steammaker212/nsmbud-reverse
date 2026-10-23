/* sub_608624D4
 * address: 0x608624D4   size: 1612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608624D4(int a1, int a2, float *a3, int a4, float *a5, int a6)
{
  unsigned __int8 *v10; // r6
  int result; // r0
  void (__fastcall *v12)(unsigned __int8 *, int, int, _DWORD, _DWORD, int, int, int, int); // r9
  int v13; // r7
  int v14; // r0
  _BYTE *v15; // r9
  _DWORD *v16; // r0
  float *v17; // r0
  float v18; // r0
  int v19; // r6
  char v20; // lr
  int v21; // r0
  int v22; // r7
  int v23; // r1
  int v24; // r0
  int v25; // r0
  int v26; // r1
  _DWORD *v27; // r6
  float v28; // s4
  float v29; // r0
  int v30; // r1
  int v31; // r0
  int v32; // r0
  int v33; // r1
  _DWORD *v34; // r6
  float v35; // s0
  float v36; // s6
  int v37; // r1
  int v38; // r0
  _DWORD *v39; // r6
  float v40; // s0
  void (__fastcall *v41)(unsigned __int8 *, int, int, int, _DWORD, int, int, int, int); // r9
  int v42; // r7
  int v43; // r0
  _DWORD *v44; // r0
  float v45; // [sp+18h] [bp-38h] BYREF
  float v46; // [sp+1Ch] [bp-34h]
  float v47; // [sp+20h] [bp-30h] BYREF
  float v48; // [sp+24h] [bp-2Ch]

  v10 = *(unsigned __int8 **)(a4 + 4);
  result = v10[16];
  if ( (result & 3) != 0 )
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
      v41 = *(void (__fastcall **)(unsigned __int8 *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)v10 + 16);
      v42 = sub_608597F0(a1);
      v43 = sub_608597C0(a1);
      v41(v10, a2, a6, 1, 0, a1 + 80, a1 + 56, v42, v43);
      v15 = (_BYTE *)(a1 + 214);
      if ( (FIELD_U8(a1, 214) & 1) != 0 )
      {
        v44 = (_DWORD *)sub_60867E38(FIELD_U32(a4, 4), a2);
        v44[108] = FIELD_U32(a1, 56);
        v44[109] = FIELD_U32(a1, 60);
        v44[104] = *(_DWORD *)a5;
        v44[105] = *((_DWORD *)a5 + 1);
        v44[106] = *((_DWORD *)a5 + 2);
        v44[107] = *((_DWORD *)a5 + 3);
      }
    }
    else
    {
      v12 = *(void (__fastcall **)(unsigned __int8 *, int, int, _DWORD, _DWORD, int, int, int, int))(*(_DWORD *)v10 + 16);
      v13 = sub_608597F0(a1);
      v14 = sub_608597C0(a1);
      v12(v10, a2, a6, 0, 0, a1 + 80, a1 + 56, v13, v14);
      v15 = (_BYTE *)(a1 + 214);
      if ( (FIELD_U8(a1, 214) & 1) != 0 )
      {
        v16 = (_DWORD *)sub_60867E38(FIELD_U32(a4, 4), a2);
        v16[108] = FIELD_U32(a1, 56);
        v16[109] = FIELD_U32(a1, 60);
        v16[104] = *(_DWORD *)a5;
        v16[105] = *((_DWORD *)a5 + 1);
        v16[106] = *((_DWORD *)a5 + 2);
        v16[107] = *((_DWORD *)a5 + 3);
        v17 = (float *)sub_60867E38(FIELD_U32(a4, 4), a2);
        v17[116] = (float)FIELD_U8(a1, 188);
        v17[117] = (float)FIELD_U8(a1, 189);
        v17[118] = (float)FIELD_U8(a1, 190);
        v17[119] = (float)FIELD_U8(a1, 191);
        v17[120] = (float)FIELD_U8(a1, 192);
        v17[121] = (float)FIELD_U8(a1, 193);
        v17[122] = (float)FIELD_U8(a1, 194);
        v17[123] = (float)FIELD_U8(a1, 195);
        v17[124] = (float)FIELD_U8(a1, 196);
        v17[125] = (float)FIELD_U8(a1, 197);
        v17[126] = (float)FIELD_U8(a1, 198);
        v17[127] = (float)FIELD_U8(a1, 199);
        v17[128] = (float)FIELD_U8(a1, 200);
        v17[129] = (float)FIELD_U8(a1, 201);
        v17[130] = (float)FIELD_U8(a1, 202);
        v17[131] = (float)FIELD_U8(a1, 203);
      }
    }
    v18 = *a3;
    v48 = a3[1];
    v47 = v18;
    v45 = FIELD_F32(a1, 56) - a5[1];
    v46 = a5[2];
    v19 = ((*v15 & 1) << 30) ^ 0x40000813;
    *(_DWORD *)(sub_60867E38(FIELD_U32(a4, 4), a2) + 556) = v19;
    sub_60865254(a2, FIELD_U32(a4, 4), &v47, &v45);
    v21 = FIELD_U32(a2, 192);
    v22 = (*(_DWORD *)(FIELD_U32(a2, 184) + 52) + 559) & -*(_DWORD *)(FIELD_U32(a2, 184) + 52);
    if ( (*(_BYTE *)v21 & 1) != 0 )
    {
      v24 = FIELD_U32(v21, 36);
      do
        v23 = v24 | (1619404820 << v20);
      while ( v24 | ((v23 + v22) << v20) );
    }
    else
    {
      v23 = FIELD_U32(v21, 36);
      FIELD_U32(v21, 36) = v23 + v22;
    }
    **(_DWORD **)(a1 + 224) = v23;
    v25 = FIELD_U32(a2, 192);
    v26 = FIELD_U32(v25, 32);
    if ( v26 )
    {
      v27 = (_DWORD *)(v26 + **(_DWORD **)(a1 + 224));
      if ( v27 )
      {
        qmemcpy(v27, (const void *)sub_60867E38(FIELD_U32(a4, 4), a2), 0x230u);
        v27[139] = ((*v15 & 1) << 30) ^ 0x40020923;
        v28 = a5[1];
        v47 = (float)(*a3 + FIELD_F32(a1, 56)) - v28;
        v29 = a3[1];
        v45 = v28;
        v48 = v29;
        v46 = FIELD_F32(a1, 60) - a5[3];
        sub_6086522C(a2, v27, &v47, &v45);
        v25 = FIELD_U32(a2, 192);
      }
    }
    if ( (*(_BYTE *)v25 & 1) != 0 )
    {
      v31 = FIELD_U32(v25, 36);
      do
        v30 = v31 | (1619405040 << v20);
      while ( v31 | ((v30 + v22) << v20) );
    }
    else
    {
      v30 = FIELD_U32(v25, 36);
      FIELD_U32(v25, 36) = v30 + v22;
    }
    *(_DWORD *)(FIELD_U32(a1, 224) + 4) = v30;
    v32 = FIELD_U32(a2, 192);
    v33 = FIELD_U32(v32, 32);
    if ( v33 )
    {
      v34 = (_DWORD *)(v33 + *(_DWORD *)(FIELD_U32(a1, 224) + 4));
      if ( v34 )
      {
        qmemcpy(v34, (const void *)sub_60867E38(FIELD_U32(a4, 4), a2), 0x230u);
        v34[139] = ((*v15 & 1) << 30) ^ 0x40060B17;
        v35 = *a5;
        v47 = *a3 + *a5;
        v36 = a5[3];
        v48 = (float)(a3[1] - FIELD_F32(a1, 60)) + v36;
        v45 = FIELD_F32(a1, 56) - v35;
        v46 = v36;
        sub_6086522C(a2, v34, &v47, &v45);
        v32 = FIELD_U32(a2, 192);
      }
    }
    if ( (*(_BYTE *)v32 & 1) != 0 )
    {
      v38 = FIELD_U32(v32, 36);
      do
        v37 = v38 | (1619405264 << v20);
      while ( v38 | ((v37 + v22) << v20) );
    }
    else
    {
      v37 = FIELD_U32(v32, 36);
      FIELD_U32(v32, 36) = v37 + v22;
    }
    *(_DWORD *)(FIELD_U32(a1, 224) + 8) = v37;
    result = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
    if ( result )
    {
      v39 = (_DWORD *)(result + *(_DWORD *)(FIELD_U32(a1, 224) + 8));
      if ( v39 )
      {
        qmemcpy(v39, (const void *)sub_60867E38(FIELD_U32(a4, 4), a2), 0x230u);
        v39[139] = ((*v15 & 1) << 30) ^ 0x40040A2B;
        v47 = *a3;
        v40 = a5[2];
        v48 = a3[1] - v40;
        v45 = *a5;
        v46 = FIELD_F32(a1, 60) - v40;
        return sub_6086522C(a2, v39, &v47, &v45);
      }
    }
  }
  return result;
}
