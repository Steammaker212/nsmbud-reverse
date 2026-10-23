/* sub_60687C18
 * address: 0x60687C18   size: 1272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60687C18(int result, int a2)
{
  int v2; // r4
  _DWORD *v3; // r0
  int v4; // r7
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  int *v10; // r5
  int v11; // r1
  unsigned int v12; // r0
  int *v13; // r1
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  int v18; // r4
  _DWORD *v19; // t1
  int *v20; // r1
  unsigned int v21; // r0
  int v22; // r0
  int v23; // r1
  const char *v24; // r2
  int v25; // r1
  int *v26; // r6
  _DWORD *v27; // r0
  int v28; // r5
  int v29; // r1
  unsigned int v30; // r0
  int *v31; // r1
  unsigned int v32; // r0
  int v33; // r0
  int *v34; // r1
  unsigned int v35; // r0
  int v36; // r0
  const char *v37; // r2
  int v38; // r1
  _DWORD *v39; // r0
  int v40; // r5
  int v41; // r1
  unsigned int v42; // r0
  int *v43; // r1
  unsigned int v44; // r0
  int v45; // r0
  int *v46; // r1
  unsigned int v47; // r0
  int v48; // r4
  _DWORD *v49; // t1
  int v50; // r1
  int v51; // r1
  unsigned int v52; // r0
  int *v53; // r1
  unsigned int v54; // r0
  int v55; // r0
  int *v56; // r1
  unsigned int v57; // r0
  _DWORD *v58; // r0
  int v59; // r7
  int *v60; // r1
  unsigned int v61; // r2
  unsigned int v62; // r0
  int v63; // r0
  int v64; // r1
  int *v65; // r5
  int v66; // r1
  unsigned int v67; // r0
  int *v68; // r1
  unsigned int v69; // r0
  int v70; // r0
  int v71; // r1
  unsigned int v72; // r0
  _DWORD *v73; // t1
  int *v74; // r1
  unsigned int v75; // r0
  int v76; // r1
  unsigned int v77; // r0
  int *v78; // r1
  unsigned int v79; // r0
  int v80; // r0
  int *v81; // r1
  unsigned int v82; // r0
  int (**v83)(); // [sp+0h] [bp-28h] BYREF
  const char *v84; // [sp+4h] [bp-24h]

  v2 = result;
  if ( a2 == 2 )
  {
    v26 = (int *)(result + 7600);
    v38 = FIELD_U32(result, 7600);
    v40 = result + 6112;
    v39 = *(_DWORD **)(result + 6112);
    v83 = &sead__SafeStringBase__vtable;
    v84 = "demo_W7_punch";
    sub_60421938(v39, v38, (int)&v83);
    v41 = *(_DWORD *)(*(_DWORD *)v40 + 12);
    v42 = *(_DWORD *)(*(_DWORD *)v40 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v40 + 8) > v42 )
      v41 += 4 * v42;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v41 + 4), 0);
    v43 = *(int **)(*(_DWORD *)v40 + 12);
    v44 = *(_DWORD *)(*(_DWORD *)v40 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v40 + 8) > v44 )
      v43 += v44;
    v45 = *v43;
    FIELD_U32(v45, 20) = 0;
    FIELD_U32(v45, 28) |= 2u;
    v46 = *(int **)(*(_DWORD *)v40 + 12);
    v47 = *(_DWORD *)(*(_DWORD *)v40 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v40 + 8) > v47 )
      v46 += v47;
    v36 = *v46;
    v37 = "demo_W7_punch_shadow";
    goto LABEL_31;
  }
  if ( a2 == 1 )
  {
    v26 = (int *)(result + 7600);
    v25 = FIELD_U32(result, 7600);
    v28 = result + 6112;
    v27 = *(_DWORD **)(result + 6112);
    v83 = &sead__SafeStringBase__vtable;
    v84 = "demo_W5_swat";
    sub_60421938(v27, v25, (int)&v83);
    v29 = *(_DWORD *)(*(_DWORD *)v28 + 12);
    v30 = *(_DWORD *)(*(_DWORD *)v28 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v28 + 8) > v30 )
      v29 += 4 * v30;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v29 + 4), 0);
    v31 = *(int **)(*(_DWORD *)v28 + 12);
    v32 = *(_DWORD *)(*(_DWORD *)v28 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v28 + 8) > v32 )
      v31 += v32;
    v33 = *v31;
    FIELD_U32(v33, 20) = 0;
    FIELD_U32(v33, 28) |= 2u;
    v34 = *(int **)(*(_DWORD *)v28 + 12);
    v35 = *(_DWORD *)(*(_DWORD *)v28 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v28 + 8) > v35 )
      v34 += v35;
    v36 = *v34;
    v37 = "demo_W5_swat_shadow";
LABEL_31:
    FIELD_U32(v36, 24) = 1065353216;
    v49 = *(_DWORD **)(v2 + 6116);
    v48 = v2 + 6116;
    v50 = *v26;
    v83 = &sead__SafeStringBase__vtable;
    v84 = v37;
    sub_60421938(v49, v50, (int)&v83);
    v51 = *(_DWORD *)(*(_DWORD *)v48 + 12);
    v52 = *(_DWORD *)(*(_DWORD *)v48 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v48 + 8) > v52 )
      v51 += 4 * v52;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v51 + 4), 0);
    v53 = *(int **)(*(_DWORD *)v48 + 12);
    v54 = *(_DWORD *)(*(_DWORD *)v48 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v48 + 8) > v54 )
      v53 += v54;
    v55 = *v53;
    FIELD_U32(v55, 20) = 0;
    FIELD_U32(v55, 28) |= 2u;
    v56 = *(int **)(*(_DWORD *)v48 + 12);
    v57 = *(_DWORD *)(*(_DWORD *)v48 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v48 + 8) > v57 )
      v56 += v57;
    result = *v56;
    *(_DWORD *)(*v56 + 24) = 1065353216;
    return result;
  }
  if ( a2 )
    return result;
  result = FIELD_U8(result, 7659);
  if ( result == 1 )
  {
    v59 = v2 + 6112;
    v58 = *(_DWORD **)(v2 + 6112);
    v60 = (int *)v58[3];
    v61 = v58[2];
    v62 = v58[17];
    if ( v61 > v62 )
      v60 += v62;
    v63 = *v60;
    v65 = (int *)(v2 + 7600);
    v64 = FIELD_U32(v2, 7600);
    v83 = &sead__SafeStringBase__vtable;
    v84 = "demo_W7_wait";
    SkeletalAnim_play(v63, v64, (const char **)&v83);
    v66 = *(_DWORD *)(*(_DWORD *)v59 + 12);
    v67 = *(_DWORD *)(*(_DWORD *)v59 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v59 + 8) > v67 )
      v66 += 4 * v67;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v66 + 4), 1);
    v68 = *(int **)(*(_DWORD *)v59 + 12);
    v69 = *(_DWORD *)(*(_DWORD *)v59 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v59 + 8) > v69 )
      v68 += v69;
    v70 = *v68;
    FIELD_U32(v70, 20) = 0;
    FIELD_U32(v70, 28) |= 2u;
    v71 = *(_DWORD *)(*(_DWORD *)v59 + 12);
    v72 = *(_DWORD *)(*(_DWORD *)v59 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v59 + 8) > v72 )
      v71 += 4 * v72;
    *(_DWORD *)(*(_DWORD *)v71 + 24) = 1065353216;
    v73 = *(_DWORD **)(v2 + 6116);
    v18 = v2 + 6116;
    v74 = (int *)v73[3];
    v75 = v73[17];
    if ( v73[2] > v75 )
      v74 += v75;
    v22 = *v74;
    v23 = *v65;
    v83 = &sead__SafeStringBase__vtable;
    v24 = "demo_W7_wait_shadow";
  }
  else
  {
    if ( FIELD_U8(v2, 7659) )
      return result;
    v4 = v2 + 6112;
    v3 = *(_DWORD **)(v2 + 6112);
    v5 = (int *)v3[3];
    v6 = v3[2];
    v7 = v3[17];
    if ( v6 > v7 )
      v5 += v7;
    v8 = *v5;
    v10 = (int *)(v2 + 7600);
    v9 = FIELD_U32(v2, 7600);
    v83 = &sead__SafeStringBase__vtable;
    v84 = "demo_W5_wait";
    SkeletalAnim_play(v8, v9, (const char **)&v83);
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v12 )
      v11 += 4 * v12;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
    v13 = *(int **)(*(_DWORD *)v4 + 12);
    v14 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v14 )
      v13 += v14;
    v15 = *v13;
    FIELD_U32(v15, 20) = 0;
    FIELD_U32(v15, 28) |= 2u;
    v16 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v17 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v17 )
      v16 += 4 * v17;
    *(_DWORD *)(*(_DWORD *)v16 + 24) = 1065353216;
    v19 = *(_DWORD **)(v2 + 6116);
    v18 = v2 + 6116;
    v20 = (int *)v19[3];
    v21 = v19[17];
    if ( v19[2] > v21 )
      v20 += v21;
    v22 = *v20;
    v23 = *v10;
    v83 = &sead__SafeStringBase__vtable;
    v24 = "demo_W5_wait_shadow";
  }
  v84 = v24;
  SkeletalAnim_play(v22, v23, (const char **)&v83);
  v76 = *(_DWORD *)(*(_DWORD *)v18 + 12);
  v77 = *(_DWORD *)(*(_DWORD *)v18 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v18 + 8) > v77 )
    v76 += 4 * v77;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v76 + 4), 1);
  v78 = *(int **)(*(_DWORD *)v18 + 12);
  v79 = *(_DWORD *)(*(_DWORD *)v18 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v18 + 8) > v79 )
    v78 += v79;
  v80 = *v78;
  FIELD_U32(v80, 20) = 0;
  FIELD_U32(v80, 28) |= 2u;
  v81 = *(int **)(*(_DWORD *)v18 + 12);
  v82 = *(_DWORD *)(*(_DWORD *)v18 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v18 + 8) > v82 )
    v81 += v82;
  result = *v81;
  *(_DWORD *)(*v81 + 24) = 1065353216;
  return result;
}
