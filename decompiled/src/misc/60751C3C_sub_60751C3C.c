/* sub_60751C3C
 * address: 0x60751C3C   size: 1564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60751C3C(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r7
  int v5; // r8
  int v6; // r9
  int v7; // r0
  int v8; // r10
  float v9; // s20
  float v10; // s22
  float v11; // s18
  float v12; // s26
  float v13; // s28
  float v14; // s30
  float v15; // s0
  float v16; // s24
  float v17; // s27
  float v18; // s29
  float v19; // s31
  float v20; // s18
  float v21; // s23
  float v22; // s0
  float v23; // s0
  float v24; // s24
  float v25; // s18
  float v26; // s20
  float v27; // s0
  float v28; // s0
  float v29; // s0
  float v30; // s24
  float v31; // s18
  float v32; // s20
  float v33; // s0
  float v34; // s3
  float v35; // s7
  float v36; // s5
  float v37; // s0
  float v38; // s10
  float v39; // s21
  float v40; // s19
  float v41; // s17
  float v42; // s1
  float v43; // s9
  float v44; // s0
  float v45; // s4
  float v46; // s8
  float v47; // s14
  float v48; // s6
  float v49; // s12
  float v50; // s2
  float v51; // s0
  float v52; // s2
  float v53; // s0
  float v54; // s4
  float v55; // s6
  float v56; // s2
  float v57; // s10
  float v58; // s3
  float v59; // s14
  float v60; // s1
  float v61; // s7
  float v62; // s6
  float v63; // s8
  float v64; // s12
  float v65; // s5
  float v66; // s9
  float v67; // s11
  __int64 v68; // kr00_8
  float v69; // s11
  float v70; // s20
  unsigned int v71; // s22
  unsigned int v72; // s24
  unsigned int v73; // s15
  int v74; // r0
  unsigned __int64 v75; // [sp+40h] [bp-F8h]
  unsigned __int64 v76; // [sp+48h] [bp-F0h]
  __int64 v77; // [sp+50h] [bp-E8h]
  __int64 v78; // [sp+58h] [bp-E0h]
  __int64 v79; // [sp+60h] [bp-D8h]
  __int64 v80; // [sp+68h] [bp-D0h]
  __int64 v81; // [sp+70h] [bp-C8h]
  __int64 v82; // [sp+78h] [bp-C0h]
  __int64 v83; // [sp+80h] [bp-B8h]
  __int64 v84; // [sp+88h] [bp-B0h]
  __int64 v85; // [sp+90h] [bp-A8h]
  __int64 v86; // [sp+98h] [bp-A0h]

  result = FIELD_U8(a1, 628);
  if ( (result & 2) == 0 && FIELD_U32(a1, 300) != 5 )
  {
    if ( (result & 1) != 0 )
    {
      if ( FIELD_S32(a1, 632) >= 0 )
        (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 292) + 108))(**(_DWORD **)(a1 + 292));
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = a1 + 2 * v5;
        v7 = **(_DWORD **)(a1 + 292);
        if ( FIELD_S32(v6, 684) >= 0 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 108))(v7);
          v7 = **(_DWORD **)(a1 + 292);
        }
        if ( FIELD_S32(v6, 688) >= 0 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 108))(v7);
        v8 = a1 + v4;
        v9 = *(float *)(a1 + v4 + 712);
        v10 = *(float *)(a1 + v4 + 728);
        v11 = *(float *)(a1 + v4 + 744);
        v12 = *((float *)&v78 + 1) - *((float *)&v84 + 1);
        v13 = *((float *)&v76 + 1) - *((float *)&v82 + 1);
        v14 = *((float *)&v80 + 1) - *((float *)&v86 + 1);
        v15 = sqrtf((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14));
        if ( v15 > 0.0 )
        {
          v14 = v14 * (float)(1.0 / v15);
          v12 = v12 * (float)(1.0 / v15);
          v13 = v13 * (float)(1.0 / v15);
        }
        *(float *)(a1 + v5 + 892) = v15;
        v16 = FIELD_F32(v8, 776) + (float)((float)(*((float *)&v84 + 1) - v10) * 0.3);
        v17 = FIELD_F32(v8, 760) + (float)((float)(*((float *)&v82 + 1) - v9) * 0.3);
        v18 = FIELD_F32(v8, 792) + (float)((float)(*((float *)&v86 + 1) - v11) * 0.3);
        v19 = *((float *)&v78 + 1) - v16;
        v20 = *((float *)&v76 + 1) - v17;
        v21 = *((float *)&v80 + 1) - v18;
        v22 = sqrtf((float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21));
        if ( v22 > 0.0 )
        {
          v23 = 1.0 / v22;
          v21 = v23 * v21;
          v19 = v19 * v23;
          v20 = v20 * v23;
        }
        v24 = (float)(v16 + (float)(v19 * 0.5)) - *((float *)&v84 + 1);
        v25 = (float)(v17 + (float)(v20 * 0.5)) - *((float *)&v82 + 1);
        v26 = (float)(v18 + (float)(v21 * 0.5)) - *((float *)&v86 + 1);
        v27 = sqrtf((float)((float)(v24 * v24) + (float)(v25 * v25)) + (float)(v26 * v26));
        if ( v27 > 0.0 )
        {
          v28 = 1.0 / v27;
          v26 = v28 * v26;
          v24 = v28 * v24;
          v25 = v25 * v28;
        }
        v29 = *(float *)(a1 + v5 + 892);
        v30 = v24 * v29;
        v31 = v25 * v29;
        v32 = v26 * v29;
        v33 = sqrtf((float)((float)(v30 * v30) + (float)(v31 * v31)) + (float)(v32 * v32));
        v34 = v31;
        v35 = v30;
        v36 = v32;
        if ( v33 > 0.0 )
        {
          v37 = 1.0 / v33;
          v36 = v32 * v37;
          v35 = v30 * v37;
          v34 = v31 * v37;
        }
        v38 = 1.0;
        v39 = *((float *)&v86 + 1) + v32;
        v40 = *((float *)&v84 + 1) + v30;
        v41 = *((float *)&v82 + 1) + v31;
        v42 = 1.0;
        v43 = (float)((float)((float)(v12 * v35) + (float)(v13 * v34)) + (float)(v14 * v36)) + 1.0;
        v44 = 0.0;
        v45 = 0.0;
        v46 = 0.0;
        v47 = 0.0;
        v48 = 0.0;
        v49 = 0.0;
        v50 = 1.0;
        if ( v43 > 0.00000011921 )
        {
          v51 = sqrtf(v43 + v43);
          v52 = 1.0 / v51;
          v53 = (float)(v51 * 0.5) + (float)(v51 * 0.5);
          v54 = (float)((float)(v14 * v34) - (float)(v13 * v36)) * v52;
          v55 = (float)((float)(v12 * v36) - (float)(v14 * v35)) * v52;
          v56 = (float)((float)(v13 * v35) - (float)(v12 * v34)) * v52;
          v57 = v55 + v55;
          v58 = v54 * v53;
          v59 = v54 * (float)(v54 + v54);
          v60 = 1.0 - (float)(v55 * (float)(v55 + v55));
          v61 = v56 * (float)(v56 + v56);
          v62 = v55 * v53;
          v63 = v56 * (float)(v54 + v54);
          v64 = v56 * v53;
          v65 = v56 * v57;
          v66 = v54 * v57;
          v67 = 1.0 - v59;
          v50 = v60 - v59;
          v44 = v62 + v63;
          v46 = v63 - v62;
          v38 = v60 - v61;
          v47 = v64 + v66;
          v45 = v65 - v58;
          v48 = v58 + v65;
          v49 = v66 - v64;
          v42 = v67 - v61;
        }
        v68 = v79;
        v69 = *((float *)&v77 + 1);
        v70 = *(float *)&v77;
        FIELD_U64(v8, 700) = v81;
        FIELD_U64(v8, 708) = v82;
        *(float *)&v71 = (float)((float)(v47 * *((float *)&v75 + 1)) + (float)(v42 * *(float *)&v75))
                       + (float)(v45 * *(float *)&v76);
        *(float *)&v72 = (float)((float)(v38 * *((float *)&v75 + 1)) + (float)(v49 * *(float *)&v75))
                       + (float)(v44 * *(float *)&v76);
        *(float *)&v73 = (float)((float)(v46 * *((float *)&v75 + 1)) + (float)(v48 * *(float *)&v75))
                       + (float)(v50 * *(float *)&v76);
        FIELD_U64(v8, 716) = v83;
        FIELD_U64(v8, 724) = v84;
        FIELD_U64(v8, 732) = v85;
        FIELD_U64(v8, 740) = v86;
        v75 = __PAIR64__(v72, v71);
        v76 = __PAIR64__(LODWORD(v41), v73);
        *(float *)&v77 = (float)((float)(v47 * *((float *)&v77 + 1)) + (float)(v42 * *(float *)&v77))
                       + (float)(v45 * *(float *)&v78);
        *((float *)&v77 + 1) = (float)((float)(v38 * *((float *)&v77 + 1)) + (float)(v49 * v70))
                             + (float)(v44 * *(float *)&v78);
        *(float *)&v78 = (float)((float)(v46 * v69) + (float)(v48 * v70)) + (float)(v50 * *(float *)&v78);
        *((float *)&v78 + 1) = v40;
        *(float *)&v79 = (float)((float)(v47 * *((float *)&v79 + 1)) + (float)(v42 * *(float *)&v79))
                       + (float)(v45 * *(float *)&v80);
        *((float *)&v79 + 1) = (float)((float)(v38 * *((float *)&v79 + 1)) + (float)(v49 * *(float *)&v68))
                             + (float)(v44 * *(float *)&v80);
        *(float *)&v80 = (float)((float)(v46 * *((float *)&v68 + 1)) + (float)(v48 * *(float *)&v68))
                       + (float)(v50 * *(float *)&v80);
        *((float *)&v80 + 1) = v39;
        FIELD_U64(v8, 748) = __PAIR64__(v72, v71);
        FIELD_U64(v8, 756) = __PAIR64__(LODWORD(v41), v73);
        FIELD_U64(v8, 764) = v77;
        FIELD_U64(v8, 772) = v78;
        FIELD_U64(v8, 780) = v79;
        FIELD_U64(v8, 788) = v80;
        if ( FIELD_S32(v6, 688) >= 0 )
          (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 292) + 104))(**(_DWORD **)(a1 + 292));
        v4 += 96;
        v5 += 4;
      }
      while ( v4 != 192 );
      result = FIELD_U8(a1, 628);
      if ( (result & 4) != 0 )
      {
        v74 = **(_DWORD **)(a1 + 292);
        if ( FIELD_S32(a1, 688) >= 0 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 108))(v74);
          v74 = **(_DWORD **)(a1 + 292);
        }
        if ( FIELD_S32(a1, 696) >= 0 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 108))(v74);
        result = FIELD_U8(a1, 628) & 0xFB;
        goto LABEL_42;
      }
    }
    else
    {
      v3 = **(_DWORD **)(a1 + 292);
      if ( FIELD_S32(a1, 632) >= 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 108))(v3);
        v3 = **(_DWORD **)(a1 + 292);
      }
      if ( FIELD_S32(a1, 684) >= 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 108))(v3);
        v3 = **(_DWORD **)(a1 + 292);
      }
      if ( FIELD_S32(a1, 688) >= 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 108))(v3);
        v3 = **(_DWORD **)(a1 + 292);
      }
      if ( FIELD_S32(a1, 692) >= 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 108))(v3);
        v3 = **(_DWORD **)(a1 + 292);
      }
      if ( FIELD_S32(a1, 696) >= 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 108))(v3);
      result = sub_60757488(a1 + 636, &qword_60B3B8CC, 0.00000011921);
      if ( !result )
      {
        result = FIELD_U8(a1, 628) | 1;
LABEL_42:
        FIELD_U8(a1, 628) = result;
      }
    }
  }
  return result;
}
