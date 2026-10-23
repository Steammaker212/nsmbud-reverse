/* gbuffer_texture_ref
 * address: 0x603F32B4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall gbuffer_texture_ref(int a1, int *a2)
{
  int result; // r0
  int v3; // r9
  int *v4; // r10
  int v5; // r1
  int *v6; // r3
  int *v7; // r6
  unsigned int v8; // r5
  int v9; // r6
  unsigned int v10; // r7
  int v11; // r0
  signed int v12; // r1
  float v13; // s0
  _WORD *v14; // r5
  int v15; // r8
  _BYTE *v16; // r11
  int v17; // r10
  int v18; // r3
  int v19; // r4
  int v20; // r6
  int v21; // r7
  int v22; // r3
  int v23; // r4
  int v24; // r6
  int v25; // r7
  int v26; // r3
  int v27; // r4
  int v28; // r6
  int v29; // r7
  __int16 v30; // r2
  unsigned int *v31; // r0
  unsigned int v32; // r1
  unsigned int v33; // r2
  unsigned int v34; // r1
  int v35; // r1
  int v36; // r2
  int v37; // r5
  int v38; // r3
  int v39; // r4
  int v40; // r6
  int v41; // r7
  int v42; // r3
  int v43; // r4
  int v44; // r6
  int v45; // r7
  int v46; // r3
  int v47; // r4
  int v48; // r6
  int v49; // r7
  int v50; // r3
  int v51; // r4
  int v52; // r6
  int v53; // r7
  _DWORD *v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // r5
  int v58; // r6
  int v59; // r7
  int v60; // r3
  int v61; // r5
  int v62; // r6
  int v63; // r7
  int v64; // r6
  int v65; // r3
  int v66; // r4
  int v67; // r5
  int v68; // r7
  int v69; // r3
  int v70; // r4
  int v71; // r5
  int v72; // r7
  int v73; // r3
  int v74; // r4
  int v75; // r5
  int v76; // r7
  int v77; // r3
  int v78; // r4
  int v79; // r5
  int v80; // r7
  _DWORD *v81; // r1
  int v82; // r2
  int v83; // r3
  int v84; // r5
  int v85; // r6
  int v86; // r7
  int v87; // r3
  int v88; // r5
  int v89; // r6
  int v90; // r7
  int v91; // r0
  int v92; // r1
  int v93; // [sp+20h] [bp-B8h]
  int v94; // [sp+24h] [bp-B4h]
  int v96; // [sp+2Ch] [bp-ACh]
  _DWORD v97[4]; // [sp+30h] [bp-A8h] BYREF
  int (**v98)(); // [sp+40h] [bp-98h] BYREF
  unsigned int v99; // [sp+44h] [bp-94h]
  int v100; // [sp+5Ch] [bp-7Ch]
  int v101; // [sp+A8h] [bp-30h] BYREF
  int v102; // [sp+ACh] [bp-2Ch]
  int v103; // [sp+B0h] [bp-28h]

  result = *a2;
  if ( !*a2 )
  {
    v3 = dword_60CBD830;
    v4 = (int *)(dword_60CBD830 + 6216);
    result = FIELD_U32(dword_60CBD830, 6216);
    if ( !result )
    {
      v101 = 0;
      v102 = 0;
      v103 = 0;
      v5 = a2[10];
      v98 = &sead__SafeStringBase__vtable;
      v99 = (unsigned int)"gbuffer_texture";
      v6 = dword_6071D7B8;
      v7 = dword_6071D7C0;
      v8 = 1;
      if ( FIELD_U32(dword_60C9BB38, 684) == 1 )
      {
        v6 = &dword_6071D7B8[1];
        v7 = &dword_6071D7C0[1];
      }
      v9 = sub_6093E884(
             dword_60CD09F8,
             v5,
             &v98,
             29,
             (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * *(float *)v6),
             (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * *(float *)v7),
             FIELD_U32(dword_60CD0B40, 20),
             &v101,
             0,
             1,
             0);
      *v4 = v9;
      v10 = FIELD_U16(v9, 24);
      v11 = sub_609200A0();
      v12 = FIELD_U16(v9, 26);
      if ( v10 > 1 )
        v8 = v10;
      v13 = (float)v8;
      if ( v11 > v12 )
        v12 = v11;
      FIELD_F32(v3, 6572) = v13;
      FIELD_F32(v3, 6576) = (float)(unsigned int)v12;
      FIELD_U32(v3, 6580) = 0;
      FIELD_U32(v3, 6584) = 0;
      FIELD_F32(v3, 6588) = v13;
      FIELD_F32(v3, 6592) = (float)(unsigned int)v12;
      v14 = (_WORD *)(v3 + 6500);
      v15 = FIELD_U16(v3, 6500);
      v16 = (_BYTE *)(v3 + 6502);
      v93 = FIELD_U8(v3, 6502);
      v17 = *v4;
      v96 = v3 + 6224;
      v18 = FIELD_U32(v17, 4);
      v19 = FIELD_U32(v17, 8);
      v20 = FIELD_U32(v17, 12);
      v21 = FIELD_U32(v17, 16);
      FIELD_U32(v3, 6224) = *(_DWORD *)v17;
      FIELD_U32(v3, 6228) = v18;
      FIELD_U32(v3, 6232) = v19;
      FIELD_U32(v3, 6236) = v20;
      FIELD_U32(v3, 6240) = v21;
      v22 = FIELD_U32(v17, 24);
      v23 = FIELD_U32(v17, 28);
      v24 = FIELD_U32(v17, 32);
      v25 = FIELD_U32(v17, 36);
      FIELD_U32(v3, 6244) = FIELD_U32(v17, 20);
      FIELD_U32(v3, 6248) = v22;
      FIELD_U32(v3, 6252) = v23;
      FIELD_U32(v3, 6256) = v24;
      FIELD_U32(v3, 6260) = v25;
      v26 = FIELD_U32(v17, 44);
      v27 = FIELD_U32(v17, 48);
      v28 = FIELD_U32(v17, 52);
      v29 = FIELD_U32(v17, 56);
      FIELD_U32(v3, 6264) = FIELD_U32(v17, 40);
      FIELD_U32(v3, 6268) = v26;
      FIELD_U32(v3, 6272) = v27;
      FIELD_U32(v3, 6276) = v28;
      FIELD_U32(v3, 6280) = v29;
      v30 = FIELD_U16(v17, 60);
      FIELD_U8(v3, 6286) = FIELD_U8(v17, 62);
      FIELD_U16(v3, 6284) = v30;
      sub_60917754(v3 + 6288, v17 + 64);
      FIELD_U32(v3, 6488) = FIELD_U32(v17, 264);
      v31 = (unsigned int *)(v3 + 6496);
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 | 4, v31) );
      if ( (unsigned __int16)*v14 != v15 )
      {
        do
          v33 = __ldrex(v31);
        while ( __strex(v33 | 2, v31) );
        *v14 = v15;
      }
      v94 = v3 + 6568;
      if ( (unsigned __int8)*v16 != v93 )
      {
        do
          v34 = __ldrex(v31);
        while ( __strex(v34 | 1, v31) );
        *v16 = v93;
      }
      sub_6091AC94(v96);
      v35 = v102;
      v36 = v103;
      FIELD_U32(v3, 6512) = v101;
      FIELD_U32(v3, 6516) = v35;
      FIELD_U32(v3, 6520) = v36;
      v37 = *(_DWORD *)(a2[3] + 28);
      v38 = FIELD_U32(v37, 4);
      v39 = FIELD_U32(v37, 8);
      v40 = FIELD_U32(v37, 12);
      v41 = FIELD_U32(v37, 16);
      FIELD_U32(v3, 5528) = *(_DWORD *)v37;
      FIELD_U32(v3, 5532) = v38;
      FIELD_U32(v3, 5536) = v39;
      FIELD_U32(v3, 5540) = v40;
      FIELD_U32(v3, 5544) = v41;
      v42 = FIELD_U32(v37, 24);
      v43 = FIELD_U32(v37, 28);
      v44 = FIELD_U32(v37, 32);
      v45 = FIELD_U32(v37, 36);
      FIELD_U32(v3, 5548) = FIELD_U32(v37, 20);
      FIELD_U32(v3, 5552) = v42;
      FIELD_U32(v3, 5556) = v43;
      FIELD_U32(v3, 5560) = v44;
      FIELD_U32(v3, 5564) = v45;
      v46 = FIELD_U32(v37, 44);
      v47 = FIELD_U32(v37, 48);
      v48 = FIELD_U32(v37, 52);
      v49 = FIELD_U32(v37, 56);
      FIELD_U32(v3, 5568) = FIELD_U32(v37, 40);
      FIELD_U32(v3, 5572) = v46;
      FIELD_U32(v3, 5576) = v47;
      FIELD_U32(v3, 5580) = v48;
      FIELD_U32(v3, 5584) = v49;
      LOWORD(v36) = FIELD_U16(v37, 60);
      FIELD_U8(v3, 5590) = FIELD_U8(v37, 62);
      FIELD_U16(v3, 5588) = v36;
      sub_60917754(v3 + 5592, v37 + 64);
      FIELD_U32(v3, 5792) = FIELD_U32(v37, 264);
      FIELD_U32(v3, 5800) = FIELD_U32(v37, 272);
      FIELD_U32(v3, 5804) = FIELD_U32(v37, 276);
      v50 = FIELD_U32(v37, 284);
      v51 = FIELD_U32(v37, 288);
      v52 = FIELD_U32(v37, 292);
      v53 = FIELD_U32(v37, 296);
      v54 = (_DWORD *)(v37 + 304);
      FIELD_U32(v3, 5808) = FIELD_U32(v37, 280);
      FIELD_U32(v3, 5812) = v50;
      FIELD_U32(v3, 5816) = v51;
      FIELD_U32(v3, 5820) = v52;
      FIELD_U32(v3, 5824) = v53;
      v55 = FIELD_U32(v37, 304);
      v56 = FIELD_U32(v37, 308);
      v57 = FIELD_U32(v37, 312);
      v58 = v54[3];
      v59 = v54[4];
      v54 += 5;
      FIELD_U32(v3, 5832) = v55;
      FIELD_U32(v3, 5836) = v56;
      FIELD_U32(v3, 5840) = v57;
      FIELD_U32(v3, 5844) = v58;
      FIELD_U32(v3, 5848) = v59;
      v60 = v54[1];
      v61 = v54[2];
      v62 = v54[3];
      v63 = v54[4];
      FIELD_U32(v3, 5852) = *v54;
      FIELD_U32(v3, 5856) = v60;
      FIELD_U32(v3, 5860) = v61;
      FIELD_U32(v3, 5864) = v62;
      FIELD_U32(v3, 5868) = v63;
      v64 = *(_DWORD *)(a2[3] + 60);
      v65 = FIELD_U32(v64, 4);
      v66 = FIELD_U32(v64, 8);
      v67 = FIELD_U32(v64, 12);
      v68 = FIELD_U32(v64, 16);
      FIELD_U32(v3, 5872) = *(_DWORD *)v64;
      FIELD_U32(v3, 5876) = v65;
      FIELD_U32(v3, 5880) = v66;
      FIELD_U32(v3, 5884) = v67;
      FIELD_U32(v3, 5888) = v68;
      v69 = FIELD_U32(v64, 24);
      v70 = FIELD_U32(v64, 28);
      v71 = FIELD_U32(v64, 32);
      v72 = FIELD_U32(v64, 36);
      FIELD_U32(v3, 5892) = FIELD_U32(v64, 20);
      FIELD_U32(v3, 5896) = v69;
      FIELD_U32(v3, 5900) = v70;
      FIELD_U32(v3, 5904) = v71;
      FIELD_U32(v3, 5908) = v72;
      v73 = FIELD_U32(v64, 44);
      v74 = FIELD_U32(v64, 48);
      v75 = FIELD_U32(v64, 52);
      v76 = FIELD_U32(v64, 56);
      FIELD_U32(v3, 5912) = FIELD_U32(v64, 40);
      FIELD_U32(v3, 5916) = v73;
      FIELD_U32(v3, 5920) = v74;
      FIELD_U32(v3, 5924) = v75;
      FIELD_U32(v3, 5928) = v76;
      LOWORD(v55) = FIELD_U16(v64, 60);
      FIELD_U8(v3, 5934) = FIELD_U8(v64, 62);
      FIELD_U16(v3, 5932) = v55;
      sub_60917754(v3 + 5936, v64 + 64);
      FIELD_U32(v3, 6136) = FIELD_U32(v64, 264);
      FIELD_U32(v3, 6144) = FIELD_U32(v64, 272);
      FIELD_U32(v3, 6148) = FIELD_U32(v64, 276);
      v77 = FIELD_U32(v64, 284);
      v78 = FIELD_U32(v64, 288);
      v79 = FIELD_U32(v64, 292);
      v80 = FIELD_U32(v64, 296);
      v81 = (_DWORD *)(v64 + 304);
      FIELD_U32(v3, 6152) = FIELD_U32(v64, 280);
      FIELD_U32(v3, 6156) = v77;
      FIELD_U32(v3, 6160) = v78;
      FIELD_U32(v3, 6164) = v79;
      FIELD_U32(v3, 6168) = v80;
      v82 = FIELD_U32(v64, 304);
      v83 = FIELD_U32(v64, 308);
      v84 = FIELD_U32(v64, 312);
      v85 = FIELD_U32(v64, 316);
      v86 = v81[4];
      v81 += 5;
      FIELD_U32(v3, 6176) = v82;
      FIELD_U32(v3, 6180) = v83;
      FIELD_U32(v3, 6184) = v84;
      FIELD_U32(v3, 6188) = v85;
      FIELD_U32(v3, 6192) = v86;
      v87 = v81[1];
      v88 = v81[2];
      v89 = v81[3];
      v90 = v81[4];
      FIELD_U32(v3, 6196) = *v81;
      FIELD_U32(v3, 6200) = v87;
      FIELD_U32(v3, 6204) = v88;
      FIELD_U32(v3, 6208) = v89;
      FIELD_U32(v3, 6212) = v90;
      FIELD_U32(v3, 6596) = v3 + 5528;
      FIELD_U32(v3, 6600) = v96;
      FIELD_U32(v3, 6628) = v3 + 5872;
      sub_6090B260(v94, a2[10]);
      v91 = sub_6090B350(&v98);
      v99 &= 0xFFFFFFFC;
      v100 = 255;
      sub_6090B4B0(v91, a2[10]);
      v92 = a2[10];
      v97[0] = 1056964608;
      v97[1] = 1056964608;
      v97[2] = 1065353216;
      v97[3] = 0;
      sub_6091A764(v94, v92, 1, 1, 1.0, v97, 0);
      return sub_6090B260(a2[3], a2[10]);
    }
  }
  return result;
}
