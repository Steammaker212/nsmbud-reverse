/* sub_601B4B9C
 * address: 0x601B4B9C   size: 1352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601B4B9C(int a1, float *a2)
{
  int v4; // r2
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r2
  int v8; // s2
  float *v9; // r7
  int v10; // s0
  float *v11; // r2
  float *v12; // r1
  float v13; // s14
  float v14; // s0
  float v15; // s2
  float v16; // s10
  float v17; // s5
  float v18; // s6
  float v19; // s1
  float v20; // s13
  float v21; // s9
  unsigned int v22; // r0
  int v23; // r0
  float v24; // s10
  float v25; // s8
  int v26; // r0
  int v27; // r0
  float v28; // s10
  float v29; // s8
  int v30; // r0
  float v31; // s8
  float v32; // s4
  float v33; // s6
  float v34; // s0
  float *v35; // r1
  int v36; // r0
  float v37; // s10
  float v38; // s8
  float v39; // s16
  float v40; // s2
  int v41; // r0
  float v42; // s14
  float v43; // s12
  float v44; // s2
  float result; // s0
  int (**v46)(); // [sp+0h] [bp-A0h] BYREF
  const char *v47; // [sp+4h] [bp-9Ch]
  float v48; // [sp+8h] [bp-98h] BYREF
  float v49; // [sp+Ch] [bp-94h]
  float v50; // [sp+10h] [bp-90h]
  float v51; // [sp+14h] [bp-8Ch] BYREF
  float v52; // [sp+18h] [bp-88h]
  float v53; // [sp+1Ch] [bp-84h]
  float v54; // [sp+20h] [bp-80h]
  float v55; // [sp+24h] [bp-7Ch]
  float v56; // [sp+28h] [bp-78h]
  float v57; // [sp+2Ch] [bp-74h]
  float v58; // [sp+30h] [bp-70h]
  float v59; // [sp+34h] [bp-6Ch]
  float v60; // [sp+38h] [bp-68h]
  float v61; // [sp+3Ch] [bp-64h]
  float v62; // [sp+40h] [bp-60h]
  float v63; // [sp+44h] [bp-5Ch] BYREF
  float v64; // [sp+48h] [bp-58h]
  float v65; // [sp+4Ch] [bp-54h]
  float v66; // [sp+50h] [bp-50h]
  float v67; // [sp+54h] [bp-4Ch]
  float v68; // [sp+58h] [bp-48h]
  float v69; // [sp+5Ch] [bp-44h]
  float v70; // [sp+60h] [bp-40h]
  float v71; // [sp+64h] [bp-3Ch]
  float v72; // [sp+68h] [bp-38h]
  float v73; // [sp+6Ch] [bp-34h]
  float v74; // [sp+70h] [bp-30h]
  float v75; // [sp+74h] [bp-2Ch] BYREF
  float v76; // [sp+78h] [bp-28h]
  float v77; // [sp+7Ch] [bp-24h]

  v4 = a1 + 176;
  v5 = FIELD_U32(a1, 176);
  v6 = FIELD_U32(v4, 4);
  v7 = FIELD_U32(v4, 8);
  v8 = v6 & 0xFFFFFF;
  v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v10 = v7 & 0xFFFFFF;
  v11 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v12 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v13 = (float)(v5 & 0xFFFFFF);
  v14 = (float)(unsigned int)v10 * 0.000000059605;
  v15 = (float)(unsigned int)v8 * 0.000000059605;
  v16 = v11[2] + (float)(v14 * v11[3]);
  v17 = v9[2] + (float)(v15 * v9[3]);
  v18 = *v11 + (float)(v14 * v11[1]);
  v19 = *v9 + (float)(v15 * v9[1]);
  v20 = v12[2] + (float)((float)(v13 * 0.000000059605) * v12[3]);
  v21 = *v12 + (float)((float)(v13 * 0.000000059605) * v12[1]);
  v63 = v17 * v16;
  v67 = v17 * v18;
  v71 = -v19;
  v64 = (float)((float)(v21 * v19) * v16) - (float)(v20 * v18);
  v68 = (float)(v20 * v16) + (float)((float)(v21 * v19) * v18);
  v72 = v21 * v17;
  v65 = (float)(v19 * (float)(v20 * v16)) + (float)(v21 * v18);
  v69 = (float)(v19 * (float)(v20 * v18)) - (float)(v21 * v16);
  v73 = v20 * v17;
  v66 = FIELD_F32(a1, 80);
  v70 = FIELD_F32(a1, 84);
  v74 = FIELD_F32(a1, 88);
  sub_601B59CC(&v51, &v63);
  v22 = FIELD_U32(a1, 1248);
  if ( v22 > 1 )
  {
    v27 = *(_DWORD *)(a1 + 920 + 4 * v22);
    v48 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
    v49 = COERCE_FLOAT("wrist_r1");
    sub_60793F04(FIELD_U32(v27, 4), &v75, &v48);
    v28 = v76;
    v29 = v75;
    v75 = v54 + (float)((float)((float)(v76 * v52) + (float)(v75 * v51)) + (float)(v77 * v53));
    v76 = v58 + (float)((float)((float)(v76 * v56) + (float)(v29 * v55)) + (float)(v77 * v57));
    v77 = v62 + (float)((float)((float)(v28 * v60) + (float)(v29 * v59)) + (float)(v77 * v61));
    v30 = *(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1248));
    v46 = &sead__SafeStringBase__vtable;
    v47 = "wrist_l1";
    sub_60793F04(FIELD_U32(v30, 4), &v48, &v46);
    v31 = v48;
    v32 = (float)(v49 * v56) + (float)(v48 * v55);
    v48 = v54 + (float)((float)((float)(v49 * v52) + (float)(v48 * v51)) + (float)(v50 * v53));
    v33 = (float)(v49 * v60) + (float)(v31 * v59);
    v49 = v58 + (float)(v32 + (float)(v50 * v57));
    v50 = v62 + (float)(v33 + (float)(v50 * v61));
    v34 = (float)(v76 + v49) * 0.5;
    v75 = (float)(v75 + v48) * 0.5;
    v76 = v34;
    v77 = (float)(v77 + v50) * 0.5;
    v26 = FIELD_U32(a1, 1248);
    if ( v26 == 5 )
      v35 = (float *)&unk_60AFC0EC;
    else
      v35 = (float *)((char *)&unk_60AFC0F0 + 4 * FIELD_U32(a1, 268));
    v76 = *v35 + v34;
  }
  else
  {
    v23 = *(_DWORD *)(a1 + 4 * v22 + 920);
    v48 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
    v49 = COERCE_FLOAT("CapPosition");
    sub_60793F04(FIELD_U32(v23, 4), &v75, &v48);
    v24 = v76;
    v25 = v75;
    v75 = v54 + (float)((float)((float)(v76 * v52) + (float)(v75 * v51)) + (float)(v77 * v53));
    v76 = v58 + (float)((float)((float)(v76 * v56) + (float)(v25 * v55)) + (float)(v77 * v57));
    v77 = v62 + (float)((float)((float)(v24 * v60) + (float)(v25 * v59)) + (float)(v77 * v61));
    v26 = FIELD_U32(a1, 1248);
  }
  v36 = *(_DWORD *)(a1 + 920 + 4 * v26);
  v46 = &sead__SafeStringBase__vtable;
  v47 = "wrist_r1";
  sub_60793F04(FIELD_U32(v36, 4), &v48, &v46);
  v37 = v49;
  v38 = v48;
  v40 = (float)(v49 * v56) + (float)(v48 * v55);
  v48 = v54 + (float)((float)((float)(v49 * v52) + (float)(v48 * v51)) + (float)(v50 * v53));
  v39 = v48;
  v49 = v58 + (float)(v40 + (float)(v50 * v57));
  v50 = v62 + (float)((float)((float)(v37 * v60) + (float)(v38 * v59)) + (float)(v50 * v61));
  v41 = *(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1248));
  v46 = &sead__SafeStringBase__vtable;
  v47 = "wrist_l1";
  sub_60793F04(FIELD_U32(v41, 4), &v48, &v46);
  v42 = v77;
  v43 = v76;
  v44 = (float)(v39 + (float)(v54 + (float)((float)((float)(v49 * v52) + (float)(v48 * v51)) + (float)(v50 * v53))))
      * 0.5;
  *a2 = v66 + (float)((float)((float)(v76 * v64) + (float)(v44 * v63)) + (float)(v77 * v65));
  a2[1] = v70 + (float)((float)((float)(v43 * v68) + (float)(v44 * v67)) + (float)(v42 * v69));
  result = v74 + (float)((float)((float)(v43 * v72) + (float)(v44 * v71)) + (float)(v42 * v73));
  a2[2] = result;
  return result;
}
