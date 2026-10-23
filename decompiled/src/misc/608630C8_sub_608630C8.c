/* sub_608630C8
 * address: 0x608630C8   size: 1412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608630C8(int a1, int a2, float *a3, int a4, float *a5, int a6)
{
  float v8; // s0
  float v9; // s2
  float v10; // s6
  float v11; // s12
  float v12; // s8
  float v13; // s10
  float v14; // s14
  float v15; // s1
  char v16; // r0
  int v17; // r9
  float *v18; // r8
  int v19; // r10
  unsigned __int8 *v20; // r7
  int result; // r0
  void (__fastcall *v22)(unsigned __int8 *, int, int, int, _DWORD, int, int, int, int); // r11
  int v23; // r4
  int v24; // r0
  unsigned __int8 *v25; // r0
  int v26; // r7
  _DWORD *v27; // r0
  float *v28; // r0
  unsigned __int8 *v29; // r0
  _DWORD *v30; // r0
  int v31; // r0
  _DWORD *v32; // r7
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r4
  int v40; // r1
  int v41; // r2
  int v42; // r2
  int v43; // [sp+10h] [bp-F8h]
  int v44; // [sp+10h] [bp-F8h]
  int v45; // [sp+2Ch] [bp-DCh]
  int v46; // [sp+30h] [bp-D8h]
  int v47; // [sp+34h] [bp-D4h]
  int v48; // [sp+38h] [bp-D0h]
  _BOOL4 v49; // [sp+3Ch] [bp-CCh]
  int v50; // [sp+40h] [bp-C8h]
  _DWORD v52[2]; // [sp+48h] [bp-C0h] BYREF
  int v53; // [sp+50h] [bp-B8h] BYREF
  int v54; // [sp+54h] [bp-B4h]
  int v55; // [sp+58h] [bp-B0h]
  int v56; // [sp+5Ch] [bp-ACh]
  float v57; // [sp+64h] [bp-A4h]
  float v58; // [sp+68h] [bp-A0h]
  float v59[7]; // [sp+6Ch] [bp-9Ch] BYREF
  float v60; // [sp+88h] [bp-80h]
  float v61; // [sp+8Ch] [bp-7Ch]
  float v62; // [sp+90h] [bp-78h]
  float v63; // [sp+94h] [bp-74h]
  float v64; // [sp+98h] [bp-70h]
  float v65; // [sp+9Ch] [bp-6Ch]
  float v66; // [sp+A0h] [bp-68h]
  float v67; // [sp+A4h] [bp-64h]
  float v68; // [sp+A8h] [bp-60h]
  float v69; // [sp+ACh] [bp-5Ch]
  float v70; // [sp+B0h] [bp-58h]
  float v71; // [sp+B4h] [bp-54h]
  float v72; // [sp+B8h] [bp-50h]
  float v73; // [sp+BCh] [bp-4Ch]
  float v74; // [sp+C0h] [bp-48h]
  float v75; // [sp+C4h] [bp-44h]
  float v76; // [sp+C8h] [bp-40h]
  float v77; // [sp+CCh] [bp-3Ch]
  float v78; // [sp+D0h] [bp-38h]
  float v79; // [sp+D4h] [bp-34h]
  float v80; // [sp+D8h] [bp-30h]
  float v81; // [sp+DCh] [bp-2Ch]
  float v82; // [sp+E0h] [bp-28h]

  v8 = FIELD_F32(a1, 56);
  v9 = FIELD_F32(a1, 60);
  v10 = a3[1];
  v11 = a5[2];
  v12 = *a5;
  v13 = a5[1];
  v14 = a5[3];
  v15 = *a3 + v8;
  v57 = *a3;
  v58 = v10;
  v59[0] = v12;
  v59[1] = v11;
  v59[2] = v15 - v13;
  v59[3] = v10;
  v59[4] = v13;
  v59[5] = v11;
  v59[6] = v57;
  v60 = (float)(v10 - v9) + v14;
  v61 = v12;
  v62 = v14;
  v63 = v15 - v13;
  v64 = v60;
  v65 = v13;
  v66 = v14;
  v67 = v57;
  v68 = v10 - v11;
  v69 = v12;
  v70 = (float)(v9 - v11) - v14;
  v71 = v15 - v13;
  v72 = v10 - v11;
  v73 = v13;
  v74 = v70;
  v75 = v57 + v12;
  v76 = v10;
  v77 = (float)(v8 - v12) - v13;
  v78 = v11;
  v79 = v57 + v12;
  v80 = v60;
  v81 = v77;
  v82 = v14;
  v16 = FIELD_U8(a1, 214);
  v50 = v16 & 1;
  v49 = 1;
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
    v49 = FIELD_U8(a1, 66) != 255;
  }
  v17 = 0;
  v48 = a1 + 56;
  v47 = v16 & 2;
  v46 = (v50 << 30) ^ 0x40000000;
  v18 = v59;
  v45 = a1 + 80;
  do
  {
    v19 = a4 + 8 * v17;
    v20 = *(unsigned __int8 **)(v19 + 4);
    result = v20[16];
    if ( (result & 3) != 0 )
    {
      v22 = *(void (__fastcall **)(unsigned __int8 *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)v20 + 16);
      v23 = sub_608597F0(a1);
      v24 = sub_608597C0(a1);
      if ( v49 )
      {
        v43 = v24;
        v25 = v20;
        v26 = a2;
        v22(v25, a2, a6, 0, 0, v45, v48, v23, v43);
        if ( v50 )
        {
          v27 = (_DWORD *)sub_60867E38(FIELD_U32(v19, 4), a2);
          v27[108] = FIELD_U32(a1, 56);
          v27[109] = FIELD_U32(a1, 60);
          v27[104] = *(_DWORD *)a5;
          v27[105] = *((_DWORD *)a5 + 1);
          v27[106] = *((_DWORD *)a5 + 2);
          v27[107] = *((_DWORD *)a5 + 3);
          v28 = (float *)sub_60867E38(FIELD_U32(v19, 4), a2);
          v28[116] = (float)FIELD_U8(a1, 188);
          v28[117] = (float)FIELD_U8(a1, 189);
          v28[118] = (float)FIELD_U8(a1, 190);
          v28[119] = (float)FIELD_U8(a1, 191);
          v28[120] = (float)FIELD_U8(a1, 192);
          v28[121] = (float)FIELD_U8(a1, 193);
          v28[122] = (float)FIELD_U8(a1, 194);
          v28[123] = (float)FIELD_U8(a1, 195);
          v28[124] = (float)FIELD_U8(a1, 196);
          v28[125] = (float)FIELD_U8(a1, 197);
          v28[126] = (float)FIELD_U8(a1, 198);
          v28[127] = (float)FIELD_U8(a1, 199);
          v28[128] = (float)FIELD_U8(a1, 200);
          v28[129] = (float)FIELD_U8(a1, 201);
          v28[130] = (float)FIELD_U8(a1, 202);
          v28[131] = (float)FIELD_U8(a1, 203);
        }
      }
      else
      {
        v44 = v24;
        v29 = v20;
        v26 = a2;
        v22(v29, a2, a6, 1, 0, v45, v48, v23, v44);
        if ( v50 )
        {
          v30 = (_DWORD *)sub_60867E38(FIELD_U32(v19, 4), a2);
          v30[108] = FIELD_U32(a1, 56);
          v30[109] = FIELD_U32(a1, 60);
          v30[104] = *(_DWORD *)a5;
          v30[105] = *((_DWORD *)a5 + 1);
          v30[106] = *((_DWORD *)a5 + 2);
          v30[107] = *((_DWORD *)a5 + 3);
        }
      }
      v31 = FIELD_U32(v19, 4);
      if ( v47 && v17 >= 1 )
      {
        v32 = (_DWORD *)sub_60867E38(v31, v26);
        v33 = v32[113];
        v34 = v32[114];
        v35 = v32[115];
        v53 = v32[112];
        v54 = v33;
        v55 = v34;
        v56 = v35;
        qmemcpy(v32, (const void *)sub_60867E38(FIELD_U32(a4, 4), a2), 0x230u);
        v36 = v54;
        v37 = v55;
        v38 = v56;
        v32[112] = v53;
        v32[113] = v36;
        v32[114] = v37;
        v32[115] = v38;
        v32[139] = dword_60B15124[v17] | v46 | dword_60B15144[*(unsigned __int8 *)(a4 + 8 * v17)];
        v26 = a2;
      }
      else
      {
        v39 = dword_60B15124[v17] | v46 | dword_60B15144[*(unsigned __int8 *)(a4 + 8 * v17)];
        *(_DWORD *)(sub_60867E38(v31, v26) + 556) = v39;
      }
      v40 = FIELD_U32(v19, 4);
      v41 = *((_DWORD *)v18 - 1);
      v53 = *((_DWORD *)v18 - 2);
      v54 = v41;
      v42 = *((_DWORD *)v18 + 1);
      *(float *)v52 = *v18;
      v52[1] = v42;
      result = sub_60865254(v26, v40, &v53, v52);
    }
    ++v17;
    v18 += 4;
  }
  while ( v17 != 8 );
  return result;
}
