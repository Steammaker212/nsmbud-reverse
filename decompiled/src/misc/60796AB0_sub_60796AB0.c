/* sub_60796AB0
 * address: 0x60796AB0   size: 1100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60796AB0(int a1)
{
  int v2; // r0
  int v3; // r1
  _DWORD *v4; // r6
  unsigned int v5; // r3
  unsigned int v6; // r2
  int result; // r0
  float v8; // s16
  float v9; // s22
  float v10; // s18
  unsigned int v11; // r11
  int v12; // r9
  float v13; // s24
  float v14; // s26
  float v15; // s20
  int v16; // r0
  float v17; // s17
  float v18; // s23
  float v19; // s21
  float v20; // s25
  unsigned int v21; // r8
  int v22; // r10
  float v23; // s0
  float v24; // s30
  float v25; // s28
  float v26; // s26
  float v27; // s19
  float v28; // s21
  float v29; // s23
  float v30; // s25
  int v31; // r0
  float v32; // s16
  float v33; // s17
  float v34; // s30
  unsigned int v35; // r5
  float v36; // s24
  float v37; // s26
  float v38; // s28
  float v39; // s19
  float v40; // s18
  float v41; // s20
  float *v42; // r4
  float v43; // s23
  float v44; // s25
  float v45; // s0
  int v46; // r5
  float *v47; // r1
  float *v48; // r0
  float v49; // s11
  float v50; // s13
  float v51; // s8
  float v52; // s10
  float v53; // s14
  float v54; // s7
  float v55; // s3
  float v56; // s2
  float v57; // s27
  float v58; // s6
  float v59; // s5
  float v60; // s4
  float v61; // s1
  float v62; // s12
  float v63; // s10
  float v64; // s8
  float v65; // s14
  float v66; // s0
  float v67; // s3
  float v68; // s7
  float v69; // s9
  float v70; // s13
  float v71; // s1
  float v72; // s4
  float v73; // [sp+0h] [bp-98h] BYREF
  float v74; // [sp+4h] [bp-94h]
  float v75; // [sp+8h] [bp-90h]
  float v76; // [sp+Ch] [bp-8Ch]
  float v77; // [sp+10h] [bp-88h]
  float v78; // [sp+14h] [bp-84h]
  float v79; // [sp+18h] [bp-80h]
  float v80; // [sp+1Ch] [bp-7Ch]
  float v81; // [sp+20h] [bp-78h]
  float v82; // [sp+24h] [bp-74h]
  float v83; // [sp+28h] [bp-70h]
  float v84; // [sp+2Ch] [bp-6Ch]

  v2 = FIELD_U32(a1, 1216);
  if ( (v2 & 0x80000) != 0 )
  {
    sub_607C72D0(a1);
    v2 = FIELD_U32(a1, 1216);
  }
  if ( (v2 & 0x2000000) != 0 )
    sub_607B8BC0(a1);
  if ( (FIELD_U8(a1, 1209) & 2) != 0 )
    sub_6077059C(a1);
  sub_607A57FC(a1);
  v4 = (_DWORD *)(a1 + 11360);
  v3 = FIELD_U32(a1, 11360);
  v5 = FIELD_U32(v3, 208) & 0xFFFFEFFF;
  if ( (FIELD_U32(a1, 6904) & 0x4000) != 0 )
    v5 = FIELD_U32(v3, 208) | 0x1000;
  FIELD_U32(v3, 208) = v5;
  sub_60796F0C(a1);
  v6 = *(_DWORD *)(*v4 + 208) & 0xFFFDFFFF;
  if ( !FIELD_U32(a1, 80) )
    v6 = *(_DWORD *)(*v4 + 208) | 0x20000;
  *(_DWORD *)(*v4 + 208) = v6;
  if ( sub_607C70B0(a1) && (!FIELD_U32(a1, 11988) || !sub_6074F0C4(a1 + 11956)) )
    return skl_root_ref_7C7450(a1);
  result = FIELD_U32(a1, 1216);
  if ( (result & 0x2000000) != 0 )
    JUMPOUT(0x60793FF0);
  if ( (result & 0x8001000) == 0 )
  {
    v8 = FIELD_F32(a1, 112);
    v9 = FIELD_F32(a1, 116);
    v10 = FIELD_F32(a1, 108);
    v11 = FIELD_U32(a1, 156);
    v12 = FIELD_U32(a1, 160);
    v13 = FIELD_F32(a1, 11392);
    v14 = FIELD_F32(a1, 11396);
    v15 = FIELD_F32(a1, 12000);
    v16 = sub_607BA5CC(a1);
    v17 = FIELD_F32(a1, 12028);
    v18 = FIELD_F32(a1, 148);
    v19 = FIELD_F32(a1, 152);
    v20 = FIELD_F32(a1, 144);
    v21 = FIELD_U32(a1, 164);
    v22 = v16;
    v23 = sub_6076628C(a1, &v73);
    v24 = v8 + v14;
    v25 = v73;
    v26 = v74;
    v27 = v75;
    v28 = v17 * v19;
    v29 = v17 * v18;
    v30 = v17 * v20;
    v31 = *(_DWORD *)(*v4 + 28);
    if ( (unsigned int)(v31 - 45) >= 4 )
    {
      if ( v31 == 132 )
      {
        v32 = 5.0;
      }
      else
      {
        if ( v31 == 131 )
          goto LABEL_19;
        v32 = 8.0;
      }
LABEL_20:
      v33 = v10 + v13;
      v34 = v24 + v15;
      v35 = v22 + v12;
      v36 = v28 * v27;
      v37 = v29 * v26;
      v38 = v30 * v25;
      v39 = 0.0;
      if ( sub_6075EE0C(a1) && FIELD_U32(a1, 1320) == 9 && (*(_BYTE *)(*v4 + 198) & 0x80) != 0 )
      {
        v32 = 5.0;
        v39 = 8.0;
      }
      v40 = (*(float (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 172))(*v4);
      v41 = (*(float (__fastcall **)(_DWORD, float))(*(_DWORD *)*v4 + 172))(*v4, v40);
      v42 = (float *)((char *)sinLutTable + ((v35 >> 20) & 0xFF0));
      v43 = *v42;
      v44 = v42[1];
      v45 = (*(float (__fastcall **)(_DWORD, float))(*(_DWORD *)*v4 + 172))(*v4, v41);
      v46 = v35 & 0xFFFFFF;
      v47 = (float *)((char *)sinLutTable + ((v21 >> 20) & 0xFF0));
      v48 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
      v49 = (float)(v21 & 0xFFFFFF) * 0.000000059605;
      v50 = (float)(unsigned int)v46 * 0.000000059605;
      v51 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
      v52 = *v47 + (float)(v49 * v47[1]);
      v53 = v47[2] + (float)(v49 * v47[3]);
      v54 = v42[2] + (float)(v50 * v42[3]);
      v55 = *v42 + (float)(v50 * v42[1]);
      v56 = *v48 + (float)(v51 * v48[1]);
      v57 = v48[2] + (float)(v51 * v48[3]);
      v58 = v54 * v53;
      v59 = v54 * v52;
      v60 = v55 * v52;
      v61 = v55 * v53;
      v62 = (float)((float)(v38 * 0.0) * v41)
          * (float)(v43 + (float)((float)((float)(unsigned int)v46 * v44) * 0.000000059605));
      v63 = v57 * v52;
      v64 = (float)(v37 * v32) * v40;
      v65 = v57 * v53;
      v66 = (float)(v36 * v39) * v45;
      v67 = v57 * v55;
      v68 = v57 * v54;
      v69 = v58 + (float)(v56 * v60);
      v70 = (float)(v56 * v61) - v59;
      v71 = (float)(v56 * v59) - v61;
      v72 = v60 + (float)(v56 * v58);
      v76 = (float)(v33 + v62) + (float)((float)((float)-(float)(v62 * v69) - (float)(v70 * v64)) - (float)(v67 * v66));
      v80 = (float)(v34 + v64) + (float)((float)((float)-(float)(v62 * v63) - (float)(v65 * v64)) + (float)(v56 * v66));
      v84 = (float)(v9 + v66) + (float)((float)((float)-(float)(v62 * v71) - (float)(v72 * v64)) - (float)(v68 * v66));
      v73 = v38 * v69;
      v77 = v38 * v63;
      v81 = v38 * v71;
      v74 = v37 * v70;
      v78 = v37 * v65;
      v82 = v37 * v72;
      v75 = v36 * v67;
      v79 = -(float)(v56 * v36);
      v83 = v36 * v68;
      return ((int (__fastcall *)(_DWORD, float *))loc_60793FF0)(*v4, &v73);
    }
LABEL_19:
    v32 = sub_6079B254(a1, v23);
    goto LABEL_20;
  }
  return result;
}
