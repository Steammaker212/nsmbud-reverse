/* gbuffer_texture_ref_2
 * address: 0x6071D7D4   size: 1108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall gbuffer_texture_ref_2(int a1, int a2)
{
  int v3; // r5
  int *v4; // r7
  _DWORD *v5; // r10
  unsigned int v6; // r5
  int v7; // r1
  int *v8; // r3
  int *v9; // r6
  int v10; // r6
  unsigned int v11; // r4
  int v12; // r0
  signed int v13; // r1
  float v14; // s0
  _WORD *v15; // r4
  _BYTE *v16; // r9
  int v17; // r8
  int v18; // r3
  int v19; // r5
  int v20; // r6
  int v21; // r7
  int v22; // r3
  int v23; // r5
  int v24; // r6
  int v25; // r7
  int v26; // r3
  int v27; // r5
  int v28; // r6
  int v29; // r7
  __int16 v30; // r2
  unsigned int *v31; // r0
  unsigned int v32; // r1
  unsigned int v33; // r1
  unsigned int v34; // r1
  int v35; // r1
  int v36; // r2
  int v37; // r4
  int v38; // r3
  int v39; // r5
  int v40; // r6
  int v41; // r7
  int v42; // r3
  int v43; // r5
  int v44; // r6
  int v45; // r7
  int v46; // r3
  int v47; // r5
  int v48; // r6
  int v49; // r7
  int v50; // r3
  int v51; // r5
  int v52; // r6
  int v53; // r7
  int v54; // r3
  int v55; // r5
  int v56; // r6
  int v57; // r7
  int v58; // r3
  int v59; // r5
  int v60; // r6
  int v61; // r7
  int v62; // r4
  int v63; // r3
  int v64; // r5
  int v65; // r6
  int v66; // r7
  int v67; // r3
  int v68; // r5
  int v69; // r6
  int v70; // r7
  int v71; // r3
  int v72; // r5
  int v73; // r6
  int v74; // r7
  __int16 v75; // r2
  int v76; // r3
  int v77; // r5
  int v78; // r6
  int v79; // r7
  int v80; // r3
  int v81; // r5
  int v82; // r6
  int v83; // r7
  int v84; // r3
  int v85; // r5
  int v86; // r6
  int v87; // r7
  int v88; // r0
  int result; // r0
  int v90; // r1
  int v91; // [sp+20h] [bp-B0h]
  int v92; // [sp+24h] [bp-ACh]
  int v94; // [sp+30h] [bp-A0h]
  int v95; // [sp+34h] [bp-9Ch] BYREF
  int v96; // [sp+38h] [bp-98h]
  int v97; // [sp+3Ch] [bp-94h]
  int v98; // [sp+40h] [bp-90h]
  int v99; // [sp+44h] [bp-8Ch] BYREF
  int v100; // [sp+48h] [bp-88h]
  int v101; // [sp+4Ch] [bp-84h]
  int v102; // [sp+60h] [bp-70h]

  v4 = (int *)(a1 + 6216);
  v3 = FIELD_U32(a1, 6216);
  if ( v3 )
  {
    v5 = (_DWORD *)(a2 + 40);
  }
  else
  {
    v6 = 1;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    v5 = (_DWORD *)(a2 + 40);
    v7 = FIELD_U32(a2, 40);
    v95 = (int)&sead__SafeStringBase__vtable;
    v96 = (int)"gbuffer_texture";
    v8 = dword_6071DC34;
    v9 = dword_6071DC3C;
    if ( FIELD_U32(dword_60C9BB38, 684) == 1 )
    {
      v8 = &dword_6071DC34[1];
      v9 = &dword_6071DC3C[1];
    }
    v10 = sub_6093E884(
            dword_60CD09F8,
            v7,
            &v95,
            29,
            (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * *(float *)v8),
            (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * *(float *)v9),
            FIELD_U32(dword_60CD0B40, 20),
            &v99,
            0,
            1,
            0);
    *v4 = v10;
    v11 = FIELD_U16(v10, 24);
    v12 = sub_609200A0(v10);
    v13 = FIELD_U16(v10, 26);
    if ( v11 > 1 )
      v6 = v11;
    v14 = (float)v6;
    if ( v12 > v13 )
      v13 = v12;
    FIELD_F32(a1, 6572) = v14;
    FIELD_F32(a1, 6576) = (float)(unsigned int)v13;
    FIELD_U32(a1, 6580) = 0;
    FIELD_U32(a1, 6584) = 0;
    FIELD_F32(a1, 6588) = v14;
    FIELD_F32(a1, 6592) = (float)(unsigned int)v13;
    v15 = (_WORD *)(a1 + 6500);
    v91 = FIELD_U16(a1, 6500);
    v16 = (_BYTE *)(a1 + 6502);
    v92 = FIELD_U8(a1, 6502);
    v17 = *v4;
    v94 = a1 + 6224;
    v18 = *(_DWORD *)(*v4 + 4);
    v19 = *(_DWORD *)(*v4 + 8);
    v20 = *(_DWORD *)(*v4 + 12);
    v21 = *(_DWORD *)(*v4 + 16);
    FIELD_U32(a1, 6224) = *(_DWORD *)v17;
    FIELD_U32(a1, 6228) = v18;
    FIELD_U32(a1, 6232) = v19;
    FIELD_U32(a1, 6236) = v20;
    FIELD_U32(a1, 6240) = v21;
    v22 = FIELD_U32(v17, 24);
    v23 = FIELD_U32(v17, 28);
    v24 = FIELD_U32(v17, 32);
    v25 = FIELD_U32(v17, 36);
    FIELD_U32(a1, 6244) = FIELD_U32(v17, 20);
    FIELD_U32(a1, 6248) = v22;
    FIELD_U32(a1, 6252) = v23;
    FIELD_U32(a1, 6256) = v24;
    FIELD_U32(a1, 6260) = v25;
    v26 = FIELD_U32(v17, 44);
    v27 = FIELD_U32(v17, 48);
    v28 = FIELD_U32(v17, 52);
    v29 = FIELD_U32(v17, 56);
    FIELD_U32(a1, 6264) = FIELD_U32(v17, 40);
    FIELD_U32(a1, 6268) = v26;
    FIELD_U32(a1, 6272) = v27;
    FIELD_U32(a1, 6276) = v28;
    FIELD_U32(a1, 6280) = v29;
    v30 = FIELD_U16(v17, 60);
    FIELD_U8(a1, 6286) = FIELD_U8(v17, 62);
    FIELD_U16(a1, 6284) = v30;
    sub_60917754(a1 + 6288, v17 + 64);
    FIELD_U32(a1, 6488) = FIELD_U32(v17, 264);
    v31 = (unsigned int *)(a1 + 6496);
    do
      v32 = __ldrex(v31);
    while ( __strex(v32 | 4, v31) );
    if ( (unsigned __int16)*v15 != v91 )
    {
      do
        v33 = __ldrex(v31);
      while ( __strex(v33 | 2, v31) );
      *v15 = v91;
    }
    if ( (unsigned __int8)*v16 != v92 )
    {
      do
        v34 = __ldrex(v31);
      while ( __strex(v34 | 1, v31) );
      *v16 = v92;
    }
    sub_6091AC94(v94);
    v35 = v100;
    v36 = v101;
    FIELD_U32(a1, 6512) = v99;
    FIELD_U32(a1, 6516) = v35;
    FIELD_U32(a1, 6520) = v36;
    v37 = *(_DWORD *)(FIELD_U32(a2, 12) + 28);
    v38 = FIELD_U32(v37, 4);
    v39 = FIELD_U32(v37, 8);
    v40 = FIELD_U32(v37, 12);
    v41 = FIELD_U32(v37, 16);
    FIELD_U32(a1, 5528) = *(_DWORD *)v37;
    FIELD_U32(a1, 5532) = v38;
    FIELD_U32(a1, 5536) = v39;
    FIELD_U32(a1, 5540) = v40;
    FIELD_U32(a1, 5544) = v41;
    v42 = FIELD_U32(v37, 24);
    v43 = FIELD_U32(v37, 28);
    v44 = FIELD_U32(v37, 32);
    v45 = FIELD_U32(v37, 36);
    FIELD_U32(a1, 5548) = FIELD_U32(v37, 20);
    FIELD_U32(a1, 5552) = v42;
    FIELD_U32(a1, 5556) = v43;
    FIELD_U32(a1, 5560) = v44;
    FIELD_U32(a1, 5564) = v45;
    v46 = FIELD_U32(v37, 44);
    v47 = FIELD_U32(v37, 48);
    v48 = FIELD_U32(v37, 52);
    v49 = FIELD_U32(v37, 56);
    FIELD_U32(a1, 5568) = FIELD_U32(v37, 40);
    FIELD_U32(a1, 5572) = v46;
    FIELD_U32(a1, 5576) = v47;
    FIELD_U32(a1, 5580) = v48;
    FIELD_U32(a1, 5584) = v49;
    LOWORD(v36) = FIELD_U16(v37, 60);
    FIELD_U8(a1, 5590) = FIELD_U8(v37, 62);
    FIELD_U16(a1, 5588) = v36;
    sub_60917754(a1 + 5592, v37 + 64);
    FIELD_U32(a1, 5792) = FIELD_U32(v37, 264);
    FIELD_U32(a1, 5800) = FIELD_U32(v37, 272);
    FIELD_U32(a1, 5804) = FIELD_U32(v37, 276);
    v50 = FIELD_U32(v37, 284);
    v51 = FIELD_U32(v37, 288);
    v52 = FIELD_U32(v37, 292);
    v53 = FIELD_U32(v37, 296);
    FIELD_U32(a1, 5808) = FIELD_U32(v37, 280);
    FIELD_U32(a1, 5812) = v50;
    FIELD_U32(a1, 5816) = v51;
    FIELD_U32(a1, 5820) = v52;
    FIELD_U32(a1, 5824) = v53;
    v54 = FIELD_U32(v37, 308);
    v55 = FIELD_U32(v37, 312);
    v56 = FIELD_U32(v37, 316);
    v57 = FIELD_U32(v37, 320);
    FIELD_U32(a1, 5832) = FIELD_U32(v37, 304);
    FIELD_U32(a1, 5836) = v54;
    FIELD_U32(a1, 5840) = v55;
    FIELD_U32(a1, 5844) = v56;
    FIELD_U32(a1, 5848) = v57;
    v58 = FIELD_U32(v37, 328);
    v59 = FIELD_U32(v37, 332);
    v60 = FIELD_U32(v37, 336);
    v61 = FIELD_U32(v37, 340);
    FIELD_U32(a1, 5852) = FIELD_U32(v37, 324);
    FIELD_U32(a1, 5856) = v58;
    FIELD_U32(a1, 5860) = v59;
    FIELD_U32(a1, 5864) = v60;
    FIELD_U32(a1, 5868) = v61;
    v62 = *(_DWORD *)(FIELD_U32(a2, 12) + 60);
    v63 = FIELD_U32(v62, 4);
    v64 = FIELD_U32(v62, 8);
    v65 = FIELD_U32(v62, 12);
    v66 = FIELD_U32(v62, 16);
    FIELD_U32(a1, 5872) = *(_DWORD *)v62;
    FIELD_U32(a1, 5876) = v63;
    FIELD_U32(a1, 5880) = v64;
    FIELD_U32(a1, 5884) = v65;
    FIELD_U32(a1, 5888) = v66;
    v67 = FIELD_U32(v62, 24);
    v68 = FIELD_U32(v62, 28);
    v69 = FIELD_U32(v62, 32);
    v70 = FIELD_U32(v62, 36);
    FIELD_U32(a1, 5892) = FIELD_U32(v62, 20);
    FIELD_U32(a1, 5896) = v67;
    FIELD_U32(a1, 5900) = v68;
    FIELD_U32(a1, 5904) = v69;
    FIELD_U32(a1, 5908) = v70;
    v71 = FIELD_U32(v62, 44);
    v72 = FIELD_U32(v62, 48);
    v73 = FIELD_U32(v62, 52);
    v74 = FIELD_U32(v62, 56);
    FIELD_U32(a1, 5912) = FIELD_U32(v62, 40);
    FIELD_U32(a1, 5916) = v71;
    FIELD_U32(a1, 5920) = v72;
    FIELD_U32(a1, 5924) = v73;
    FIELD_U32(a1, 5928) = v74;
    v75 = FIELD_U16(v62, 60);
    FIELD_U8(a1, 5934) = FIELD_U8(v62, 62);
    FIELD_U16(a1, 5932) = v75;
    sub_60917754(a1 + 5936, v62 + 64);
    FIELD_U32(a1, 6136) = FIELD_U32(v62, 264);
    FIELD_U32(a1, 6144) = FIELD_U32(v62, 272);
    FIELD_U32(a1, 6148) = FIELD_U32(v62, 276);
    v76 = FIELD_U32(v62, 284);
    v77 = FIELD_U32(v62, 288);
    v78 = FIELD_U32(v62, 292);
    v79 = FIELD_U32(v62, 296);
    FIELD_U32(a1, 6152) = FIELD_U32(v62, 280);
    FIELD_U32(a1, 6156) = v76;
    FIELD_U32(a1, 6160) = v77;
    FIELD_U32(a1, 6164) = v78;
    FIELD_U32(a1, 6168) = v79;
    v80 = FIELD_U32(v62, 308);
    v81 = FIELD_U32(v62, 312);
    v82 = FIELD_U32(v62, 316);
    v83 = FIELD_U32(v62, 320);
    FIELD_U32(a1, 6176) = FIELD_U32(v62, 304);
    FIELD_U32(a1, 6180) = v80;
    FIELD_U32(a1, 6184) = v81;
    FIELD_U32(a1, 6188) = v82;
    FIELD_U32(a1, 6192) = v83;
    v84 = FIELD_U32(v62, 328);
    v85 = FIELD_U32(v62, 332);
    v86 = FIELD_U32(v62, 336);
    v87 = FIELD_U32(v62, 340);
    FIELD_U32(a1, 6196) = FIELD_U32(v62, 324);
    FIELD_U32(a1, 6200) = v84;
    FIELD_U32(a1, 6204) = v85;
    FIELD_U32(a1, 6208) = v86;
    FIELD_U32(a1, 6212) = v87;
    FIELD_U32(a1, 6596) = a1 + 5528;
    FIELD_U32(a1, 6600) = v94;
    FIELD_U32(a1, 6628) = a1 + 5872;
    v3 = 0;
  }
  sub_6090B260(a1 + 6568, *v5);
  v88 = sub_6090B350(&v99);
  v100 &= 0xFFFFFFFC;
  v102 = 255;
  result = sub_6090B4B0(v88, *v5);
  if ( !v3 )
  {
    v90 = *v5;
    v95 = 1056964608;
    v96 = 1056964608;
    v97 = 1065353216;
    v98 = 0;
    return sub_6091A764(a1 + 6568, v90, 1, 1, 1.0, &v95, 0);
  }
  return result;
}
