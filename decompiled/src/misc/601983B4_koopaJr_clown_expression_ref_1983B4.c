/* koopaJr_clown_expression_ref_1983B4
 * address: 0x601983B4   size: 2564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall koopaJr_clown_expression_ref_1983B4(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  char v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  char v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int (**v47)(); // [sp+0h] [bp-20h] BYREF
  const char *v48; // [sp+4h] [bp-1Ch]

  result = FIELD_U8(a1, 520);
  if ( result != a2 )
  {
    v5 = FIELD_U32(a1, 320);
    v6 = **(_DWORD ***)(FIELD_U32(a1, 316) + 28);
    v47 = &sead__SafeStringBase__vtable;
    v48 = "koopaJr_clown_expression";
    ShuAnim_play(v6, v5, (int)&v47);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 4), 0);
    v7 = FIELD_U32(a1, 320);
    v8 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
    v47 = &sead__SafeStringBase__vtable;
    v48 = "koopaJr_clown_expression";
    sub_604470DC(v8, v7, (int)&v47);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 4), 0);
    result = FIELD_U8(a1, 520);
    switch ( FIELD_U8(a1, 520) )
    {
      case 0:
        result = a2 - 1;
        switch ( a2 )
        {
          case 1:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = 1065353216;
            v9 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v9, 20) = 0;
            FIELD_U32(v9, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = 1065353216;
            v10 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v10, 20) = 0;
            FIELD_U32(v10, 28) |= 2u;
            FIELD_U32(a1, 524) = 1082130432;
            FIELD_U8(a1, 520) = 1;
            FIELD_U8(a1, 528) = 0;
            result = 1;
            break;
          case 2:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = 1065353216;
            v33 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v33, 20) = 1104150528;
            FIELD_U32(v33, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = 1065353216;
            v34 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v34, 20) = 1104150528;
            FIELD_U32(v34, 28) |= 2u;
            v30 = 1106247680;
            goto LABEL_28;
          case 3:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 4));
            v35 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v35, 20) = 1098907648;
            FIELD_U32(v35, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 4));
            v36 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v36, 20) = 1098907648;
            FIELD_U32(v36, 28) |= 2u;
            v37 = 1094713344;
            goto LABEL_30;
          case 4:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = 1065353216;
            v38 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v38, 20) = 1098907648;
            FIELD_U32(v38, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = 1065353216;
            v39 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v39, 20) = 1098907648;
            FIELD_U32(v39, 28) |= 2u;
            v40 = 1101004800;
            goto LABEL_33;
          default:
            return result;
        }
        break;
      case 1:
        switch ( a2 )
        {
          case 0:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 4));
            v19 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v19, 20) = 1082130432;
            FIELD_U32(v19, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 4));
            v20 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v20, 20) = 1082130432;
            FIELD_U32(v20, 28) |= 2u;
            v18 = 0;
            FIELD_U32(a1, 524) = 0;
            goto LABEL_31;
          case 2:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = 1065353216;
            v41 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v41, 20) = 1082130432;
            FIELD_U32(v41, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = 1065353216;
            v42 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v42, 20) = 1082130432;
            FIELD_U32(v42, 28) |= 2u;
            v30 = 1090519040;
            goto LABEL_28;
          case 3:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 4));
            v43 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v43, 20) = 1109393408;
            FIELD_U32(v43, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 4));
            v44 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v44, 20) = 1109393408;
            FIELD_U32(v44, 28) |= 2u;
            v37 = 1108344832;
LABEL_30:
            FIELD_U32(a1, 524) = v37;
            v18 = 3;
            goto LABEL_31;
          case 4:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = 1065353216;
            v45 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v45, 20) = 1101529088;
            FIELD_U32(v45, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = 1065353216;
            v46 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v46, 20) = 1101529088;
            FIELD_U32(v46, 28) |= 2u;
            v40 = 1103626240;
LABEL_33:
            FIELD_U32(a1, 524) = v40;
            v23 = 4;
            goto LABEL_34;
          default:
            return result;
        }
      case 2:
        if ( a2 == 3 )
        {
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = 1065353216;
          v21 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
          FIELD_U32(v21, 20) = 1090519040;
          FIELD_U32(v21, 28) |= 2u;
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = 1065353216;
          v22 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
          FIELD_U32(v22, 20) = 1090519040;
          FIELD_U32(v22, 28) |= 2u;
          FIELD_U32(a1, 524) = 1094713344;
          v23 = 3;
          goto LABEL_34;
        }
        if ( !a2 )
        {
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 4));
          v11 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
          FIELD_U32(v11, 20) = 1106247680;
          FIELD_U32(v11, 28) |= 2u;
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 4));
          v12 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
          FIELD_U32(v12, 20) = 1106247680;
          FIELD_U32(v12, 28) |= 2u;
          v13 = 1104150528;
          goto LABEL_16;
        }
        break;
      case 3:
        switch ( a2 )
        {
          case 2:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 4));
            v24 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v24, 20) = 1094713344;
            FIELD_U32(v24, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 4));
            v25 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v25, 20) = 1094713344;
            FIELD_U32(v25, 28) |= 2u;
            FIELD_U32(a1, 524) = 1090519040;
            v18 = 2;
            goto LABEL_31;
          case 1:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = 1065353216;
            v26 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v26, 20) = 1108344832;
            FIELD_U32(v26, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = 1065353216;
            v27 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v27, 20) = 1108344832;
            FIELD_U32(v27, 28) |= 2u;
            FIELD_U32(a1, 524) = 1109393408;
            v23 = 1;
            goto LABEL_34;
          case 0:
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = 1065353216;
            v14 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
            FIELD_U32(v14, 20) = 1094713344;
            FIELD_U32(v14, 28) |= 2u;
            *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = 1065353216;
            v15 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
            FIELD_U32(v15, 20) = 1094713344;
            FIELD_U32(v15, 28) |= 2u;
            FIELD_U32(a1, 524) = 1098907648;
            result = 0;
            FIELD_U8(a1, 520) = 0;
            goto LABEL_35;
        }
        break;
      case 4:
        if ( a2 == 2 )
        {
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = 1065353216;
          v28 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
          FIELD_U32(v28, 20) = 1106771968;
          FIELD_U32(v28, 28) |= 2u;
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = 1065353216;
          v29 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
          FIELD_U32(v29, 20) = 1106771968;
          FIELD_U32(v29, 28) |= 2u;
          v30 = 1108082688;
LABEL_28:
          FIELD_U32(a1, 524) = v30;
          v23 = 2;
LABEL_34:
          FIELD_U8(a1, 520) = v23;
          result = 0;
        }
        else if ( a2 == 1 )
        {
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 4));
          v31 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
          FIELD_U32(v31, 20) = 1103626240;
          FIELD_U32(v31, 28) |= 2u;
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 4));
          v32 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
          FIELD_U32(v32, 20) = 1103626240;
          FIELD_U32(v32, 28) |= 2u;
          FIELD_U32(a1, 524) = 1101529088;
          result = 1;
          FIELD_U8(a1, 520) = 1;
        }
        else
        {
          if ( a2 )
            return result;
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 28) + 4));
          v16 = **(_DWORD **)(FIELD_U32(a1, 316) + 28);
          FIELD_U32(v16, 20) = 1101004800;
          FIELD_U32(v16, 28) |= 2u;
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 316) + 44) + 4));
          v17 = **(_DWORD **)(FIELD_U32(a1, 316) + 44);
          FIELD_U32(v17, 20) = 1101004800;
          FIELD_U32(v17, 28) |= 2u;
          v13 = 1098907648;
LABEL_16:
          FIELD_U32(a1, 524) = v13;
          v18 = 0;
LABEL_31:
          FIELD_U8(a1, 520) = v18;
          result = 1;
        }
LABEL_35:
        FIELD_U8(a1, 528) = result;
        break;
      default:
        return result;
    }
  }
  return result;
}
