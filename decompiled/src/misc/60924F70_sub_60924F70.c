/* sub_60924F70
 * address: 0x60924F70   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60924F70(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // r8
  float v10; // s20
  int v11; // r3
  int v12; // r4
  float v13; // r5
  int v14; // r6
  float v15; // s20
  int v16; // r3
  int v17; // r5
  int v18; // r6
  int v19; // r7
  int v20; // r4
  int v21; // r0
  int v22; // r0
  float v23; // s10
  float v24; // s14
  float v25; // s4
  float v26; // s0
  float v27; // s12
  float v28; // s4
  float v29; // s8
  float v30; // s0
  int v31; // r0
  float v33; // [sp+18h] [bp-1B8h] BYREF
  float v34; // [sp+1Ch] [bp-1B4h]
  float v35; // [sp+20h] [bp-1B0h]
  float v36; // [sp+24h] [bp-1ACh]
  float v37; // [sp+28h] [bp-1A8h]
  float v38; // [sp+2Ch] [bp-1A4h]
  float v39; // [sp+30h] [bp-1A0h]
  int v40; // [sp+34h] [bp-19Ch]
  float v41; // [sp+38h] [bp-198h]
  float v42; // [sp+3Ch] [bp-194h]
  float v43; // [sp+40h] [bp-190h]
  int v44; // [sp+44h] [bp-18Ch]
  __int16 v45; // [sp+48h] [bp-188h] BYREF
  int v46; // [sp+4Ch] [bp-184h]
  unsigned int v47; // [sp+64h] [bp-16Ch]
  char v48; // [sp+A0h] [bp-130h]
  _DWORD v49[3]; // [sp+B0h] [bp-120h] BYREF
  float v50; // [sp+BCh] [bp-114h]
  int v51; // [sp+C0h] [bp-110h]
  int v52; // [sp+C4h] [bp-10Ch]
  int v53; // [sp+C8h] [bp-108h]
  int v54; // [sp+CCh] [bp-104h]
  int v55; // [sp+D0h] [bp-100h]
  int v56; // [sp+D4h] [bp-FCh]
  int v57; // [sp+D8h] [bp-F8h]
  int v58; // [sp+DCh] [bp-F4h]
  _BYTE v59[236]; // [sp+E4h] [bp-ECh] BYREF

  v9 = a1[126];
  if ( a1[125] > a3 )
    v9 += 184 * a3;
  v10 = FIELD_F32(v9, 116) / FIELD_F32(v9, 96);
  sub_6090C77C((int)v59, -0.25, 0.25, 0.5, -0.5, v10 * -0.5, v10 * 0.5);
  v11 = FIELD_U32(v9, 4);
  v12 = FIELD_U32(v9, 8);
  v13 = FIELD_F32(v9, 12);
  v14 = FIELD_U32(v9, 16);
  v15 = v10 * 0.375;
  v49[0] = *(_DWORD *)v9;
  v49[1] = v11;
  v49[2] = v12;
  v50 = v13;
  v51 = v14;
  v16 = FIELD_U32(v9, 24);
  v17 = FIELD_U32(v9, 32);
  v18 = FIELD_U32(v9, 36);
  v19 = FIELD_U32(v9, 40);
  v52 = FIELD_U32(v9, 20);
  v53 = v16;
  v55 = v17;
  v56 = v18;
  v57 = v19;
  v50 = v15;
  v20 = a5;
  v54 = 1052770304;
  v58 = 0;
  if ( !FIELD_U32(v9, 168) )
  {
    sub_6090B350((int)&v45);
    v45 = 257;
    v48 = 8;
    v46 &= ~1u;
    v47 &= 0xFFFFFFF0;
    sub_6090B4B0((unsigned __int8 *)&v45, a2);
    v33 = 0.25;
    v34 = 0.0;
    v35 = 0.0;
    v37 = 0.0;
    v38 = 0.25;
    v39 = 0.0;
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0.25;
    v36 = v15;
    v40 = 1052770304;
    v44 = -1098907648;
    v21 = sub_6090BDE0((int)v59);
    sub_6093D054(a2, &dword_60B45CEC, &v33, v21);
    v48 = 2;
    v46 |= 1u;
    v47 = v47 & 0xFFFFFFF0 | 7;
    v20 = a5;
    sub_6090B4B0((unsigned __int8 *)&v45, a2);
    v22 = sub_6090BDE0((int)v59);
    sub_6093AC5C(a2, v49, v22);
    v36 = 0.0;
    v40 = 0;
    v44 = 0;
    v23 = (float)(-0.00030118 * 0.0) + 1.0;
    v24 = (float)(0.024541 * 0.0) + 0.0;
    v25 = (float)(-0.024541 * 1.0) + 0.024541;
    v26 = (float)(0.00030118 * 1.0) + 0.9997;
    v27 = v25 * v24;
    v28 = v25 * v23;
    v29 = v26 * v24;
    v30 = v26 * v23;
    v33 = (float)(v23 * v23) * 0.25;
    v37 = (float)(v24 * v23) * 0.25;
    v41 = v24 * -0.25;
    v34 = (float)((float)(v29 * v23) - v27) * 0.25;
    v38 = (float)(v28 + (float)(v24 * v29)) * 0.25;
    v42 = v30 * 0.25;
    v35 = (float)(v29 + (float)(v24 * v28)) * 0.25;
    v39 = (float)((float)(v24 * v27) - v30) * 0.25;
    v43 = v28 * 0.25;
    sub_6093D6A4(a2, &v33, (int)&dword_60B45D0C, 0x20u);
    v33 = 0.125;
    v34 = 0.0;
    v35 = 0.0;
    v37 = 0.0;
    v38 = 0.125;
    v39 = 0.0;
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0.125;
    v36 = 0.0;
    v40 = 0;
    v44 = 0;
    sub_6093B22C(a2, &v33, 1.0, 1.0, 1.0);
  }
  v31 = sub_6090BDE0((int)v59);
  ((void (__fastcall *)(int, int, int, int, float, int, _DWORD *, int, bool))loc_6093B3C0)(
    a2,
    v20,
    a6,
    a7,
    0.25,
    a8,
    v49,
    v31,
    a1[199] == FIELD_U32(v9, 168));
  ++FIELD_U32(v9, 168);
  nullsub_113();
}
