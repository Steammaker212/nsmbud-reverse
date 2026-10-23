/* skl_root_ref_196010
 * address: 0x60196010   size: 1448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_196010(int a1)
{
  int result; // r0
  float v3; // s0
  _DWORD *v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int *v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  float v13; // s0
  _DWORD *v14; // r0
  int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  _DWORD *v18; // r0
  int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r0
  _DWORD *v22; // r0
  int v23; // r1
  unsigned int v24; // r2
  unsigned int v25; // r0
  _DWORD *v26; // r0
  int v27; // r1
  unsigned int v28; // r2
  unsigned int v29; // r0
  int v30; // r0
  _DWORD *v31; // r0
  int *v32; // r1
  unsigned int v33; // r2
  unsigned int v34; // r0
  float v35; // s0
  int v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r1
  unsigned int v39; // r2
  unsigned int v40; // r0
  int v41; // r0
  _DWORD *v42; // r0
  int *v43; // r1
  unsigned int v44; // r2
  unsigned int v45; // r0
  int v46; // r0
  int v47; // r0
  _DWORD *v48; // r0
  int *v49; // r1
  unsigned int v50; // r2
  unsigned int v51; // r0
  int v52; // r0
  float v53; // r0
  int v54; // r0
  int (__fastcall *v55)(int, _DWORD *); // r2
  int v56; // r0
  _DWORD v57[12]; // [sp+8h] [bp-50h] BYREF
  Vec3 v58; // [sp+38h] [bp-20h] BYREF

  result = FIELD_U32(a1, 480);
  switch ( result )
  {
    case 0:
      v3 = FIELD_F32(a1, 120) + FIELD_F32(a1, 84);
      FIELD_F32(a1, 84) = v3;
      if ( v3 < (float)(FIELD_F32(a1, 376) + 200.0) )
      {
        result = 1;
        goto LABEL_53;
      }
      break;
    case 1:
      v13 = FIELD_F32(a1, 460) + FIELD_F32(a1, 120);
      FIELD_F32(a1, 120) = v13;
      FIELD_F32(a1, 84) = v13 + FIELD_F32(a1, 84);
      if ( v13 > 0.0 )
      {
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 468) = sub_601E4EA4(dword_60C8B13C, 86, 0, a1 + 80, 1);
        if ( FIELD_U8(a1, 516) != 3 )
        {
          sub_60421938(*(_DWORD **)(a1 + 300), FIELD_U32(a1, 304), (int)&dword_60C89CC4);
          v14 = *(_DWORD **)(a1 + 300);
          v15 = v14[3];
          v16 = v14[2];
          v17 = v14[17];
          if ( v16 > v17 )
            v15 += 4 * v17;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), 0);
          v18 = *(_DWORD **)(a1 + 300);
          v19 = v18[3];
          v20 = v18[2];
          v21 = v18[17];
          if ( v20 > v21 )
            v19 += 4 * v21;
          *(_DWORD *)(*(_DWORD *)v19 + 24) = 1065353216;
          FIELD_U8(a1, 516) = 3;
        }
        if ( FIELD_U8(a1, 517) != 3 )
        {
          sub_60421938(*(_DWORD **)(a1 + 308), FIELD_U32(a1, 312), (int)&dword_60C89CE4);
          v22 = *(_DWORD **)(a1 + 308);
          v23 = v22[3];
          v24 = v22[2];
          v25 = v22[17];
          if ( v24 > v25 )
            v23 += 4 * v25;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 0);
          v26 = *(_DWORD **)(a1 + 308);
          v27 = v26[3];
          v28 = v26[2];
          v29 = v26[17];
          if ( v28 > v29 )
            v27 += 4 * v29;
          *(_DWORD *)(*(_DWORD *)v27 + 24) = 1065353216;
          FIELD_U8(a1, 517) = 3;
        }
        FIELD_U32(a1, 476) = 650;
        goto LABEL_52;
      }
      break;
    case 2:
      v30 = FIELD_U32(a1, 476);
      if ( v30 )
        FIELD_U32(a1, 476) = v30 - 1;
      v31 = *(_DWORD **)(a1 + 300);
      v32 = (int *)v31[3];
      v33 = v31[2];
      v34 = v31[17];
      if ( v33 > v34 )
        v32 += v34;
      result = *v32;
      if ( *(float *)(*v32 + 20) > 120.0 )
      {
        sub_601E4C88(dword_60C8B13C, 165, a1 + 80, 1);
        koopaJr_clown_expression_ref_1983B4(a1, 1, v35);
        v36 = **(_DWORD **)(FIELD_U32(a1, 308) + 20);
        FIELD_U32(v36, 20) = 1065353216;
        FIELD_U32(v36, 28) |= 2u;
        *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 308) + 20) + 24) = 0;
        goto LABEL_52;
      }
      break;
    case 3:
      v37 = *(_DWORD **)(a1 + 300);
      v38 = (_DWORD *)v37[3];
      v39 = v37[2];
      v40 = v37[17];
      if ( v39 > v40 )
        v38 += v40;
      if ( sub_60418548(*v38 + 4) )
        sub_601E4C88(dword_60C8B13C, 166, a1 + 80, 1);
      v41 = FIELD_U32(a1, 476);
      if ( v41 )
        FIELD_U32(a1, 476) = v41 - 1;
      v42 = *(_DWORD **)(a1 + 300);
      v43 = (int *)v42[3];
      v44 = v42[2];
      v45 = v42[17];
      if ( v44 > v45 )
        v43 += v45;
      result = *v43;
      if ( *(float *)(*v43 + 20) > 348.0 )
      {
        koopaJr_clown_expression_ref_1983B4(a1, 0, 348.0);
        v46 = **(_DWORD **)(FIELD_U32(a1, 308) + 20);
        FIELD_U32(v46, 20) = 0;
        FIELD_U32(v46, 28) |= 2u;
        *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 308) + 20) + 24) = 0;
        goto LABEL_52;
      }
      break;
    case 4:
      v47 = FIELD_U32(a1, 476);
      if ( v47 )
        FIELD_U32(a1, 476) = v47 - 1;
      v48 = *(_DWORD **)(a1 + 300);
      v49 = (int *)v48[3];
      v50 = v48[2];
      v51 = v48[17];
      if ( v50 > v51 )
        v49 += v51;
      result = *v49;
      if ( *(float *)(*v49 + 20) > 402.0 )
      {
        koopaJr_clown_expression_ref_1983B4(a1, 4, 402.0);
        sub_601E4C88(dword_60C8B13C, 172, a1 + 80, 1);
LABEL_52:
        result = FIELD_U32(a1, 480) + 1;
        goto LABEL_53;
      }
      break;
    case 5:
      v4 = *(_DWORD **)(a1 + 300);
      v5 = (_DWORD *)v4[3];
      v6 = v4[2];
      v7 = v4[17];
      if ( v6 > v7 )
        v5 += v7;
      if ( sub_60418548(*v5 + 4) )
      {
        sub_601E4F60(dword_60C8B13C);
        sub_601E4C88(dword_60C8B13C, 99, a1 + 80, 1);
      }
      v8 = FIELD_U32(a1, 476);
      if ( v8 == 96 )
      {
        sub_601918EC(dword_60C8996C);
        sub_6018F9F8();
        v8 = FIELD_U32(a1, 476);
      }
      if ( v8 )
        FIELD_U32(a1, 476) = v8 - 1;
      v9 = *(_DWORD **)(a1 + 300);
      v10 = (int *)v9[3];
      v11 = v9[2];
      v12 = v9[17];
      if ( v11 > v12 )
        v10 += v12;
      result = *v10;
      if ( *(float *)(*v10 + 20) > 650.0 )
      {
        koopaJr_clown_expression_ref_1983B4(a1, 0, 650.0);
        result = 8;
LABEL_53:
        FIELD_U32(a1, 480) = result;
      }
      break;
    case 8:
      v52 = FIELD_U32(a1, 476);
      if ( !v52 || (result = v52 - 1, (FIELD_U32(a1, 476) = result) == 0) )
      {
        v53 = FIELD_F32(a1, 84);
        v58.z = FIELD_F32(a1, 88);
        v58.y = v53;
        v58.x = FIELD_F32(a1, 80);
        v54 = **(_DWORD **)(a1 + 300);
        v55 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v54 + 84);
        v57[0] = &sead__SafeStringBase__vtable;
        v57[1] = "skl_root";
        v56 = v55(v54, v57);
        (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 300) + 108))(
          **(_DWORD **)(a1 + 300),
          v56,
          v57);
        LODWORD(v58.x) = v57[3];
        LODWORD(v58.y) = v57[7];
        LODWORD(v58.z) = v57[11];
        EffectData_create(1142, &v58, 0, 0);
        sub_601E4C88(dword_60C8B13C, 100, a1 + 80, 1);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        result = sub_601919B0((_DWORD *)dword_60C8996C, a1);
        if ( result == 1 )
          result = (int)StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89B90);
      }
      break;
    default:
      return result;
  }
  return result;
}
