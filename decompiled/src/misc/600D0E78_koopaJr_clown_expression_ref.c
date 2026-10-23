/* koopaJr_clown_expression_ref
 * address: 0x600D0E78   size: 2032   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall koopaJr_clown_expression_ref(int a1, int a2)
{
  int result; // r0
  char *v5; // r9
  int v6; // r1
  _DWORD *v7; // r0
  int *v8; // r11
  int v9; // r1
  int v10; // r0
  int *v11; // r10
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  char v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  char v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r1
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r1
  int v41; // r0
  int v42; // r0
  int v43; // r1
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  char v48; // r1
  int v49; // r0
  int v50; // r0
  int (**v51)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v52; // [sp+8h] [bp-28h]

  v5 = (char *)(a1 + 6988);
  result = FIELD_U8(a1, 6988);
  if ( result != a2 )
  {
    v6 = FIELD_U32(a1, 6316);
    v8 = (int *)(a1 + 6324);
    v7 = *(_DWORD **)(a1 + 6324);
    v51 = &sead__SafeStringBase__vtable;
    v52 = "koopaJr_clown_expression";
    ShuAnim_play(v7, v6, (int)&v51);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6324) + 4), 0);
    v9 = FIELD_U32(a1, 6316);
    v11 = (int *)(a1 + 6328);
    v10 = FIELD_U32(a1, 6328);
    v51 = &sead__SafeStringBase__vtable;
    v52 = "koopaJr_clown_expression";
    sub_604470DC(v10, v9, (int)&v51);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6328) + 4), 0);
    result = (unsigned __int8)*v5;
    switch ( *v5 )
    {
      case 0:
        result = a2 - 1;
        switch ( a2 )
        {
          case 1:
            *(_DWORD *)(*v8 + 24) = 1065353216;
            v12 = *v8;
            FIELD_U32(v12, 20) = 0;
            FIELD_U32(v12, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = 1065353216;
            v13 = *v11;
            FIELD_U32(v13, 20) = 0;
            FIELD_U32(v13, 28) |= 2u;
            FIELD_U32(a1, 6992) = 1082130432;
            *v5 = 1;
            FIELD_U8(a1, 6996) = 0;
            result = 6996;
            break;
          case 2:
            *(_DWORD *)(*v8 + 24) = 1065353216;
            v36 = *v8;
            FIELD_U32(v36, 20) = 1104150528;
            FIELD_U32(v36, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = 1065353216;
            v37 = *v11;
            FIELD_U32(v37, 20) = 1104150528;
            FIELD_U32(v37, 28) |= 2u;
            v33 = 1106247680;
            goto LABEL_29;
          case 3:
            *(_DWORD *)(*v8 + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(*v8 + 4));
            v38 = *v8;
            FIELD_U32(v38, 20) = 1098907648;
            FIELD_U32(v38, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(*v11 + 4));
            v39 = *v11;
            FIELD_U32(v39, 20) = 1098907648;
            FIELD_U32(v39, 28) |= 2u;
            v40 = 1094713344;
            goto LABEL_31;
          case 4:
            *(_DWORD *)(*v8 + 24) = 1065353216;
            v41 = *v8;
            FIELD_U32(v41, 20) = 1098907648;
            FIELD_U32(v41, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = 1065353216;
            v42 = *v11;
            FIELD_U32(v42, 20) = 1098907648;
            FIELD_U32(v42, 28) |= 2u;
            v43 = 1101004800;
            goto LABEL_35;
          default:
            return result;
        }
        return result;
      case 1:
        switch ( a2 )
        {
          case 0:
            *(_DWORD *)(*v8 + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(*v8 + 4));
            v22 = *v8;
            FIELD_U32(v22, 20) = 1082130432;
            FIELD_U32(v22, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(*v11 + 4));
            v23 = *v11;
            FIELD_U32(v23, 20) = 1082130432;
            FIELD_U32(v23, 28) |= 2u;
            FIELD_U32(a1, 6992) = 0;
            *v5 = 0;
            goto LABEL_33;
          case 2:
            *(_DWORD *)(*v8 + 24) = 1065353216;
            v44 = *v8;
            FIELD_U32(v44, 20) = 1082130432;
            FIELD_U32(v44, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = 1065353216;
            v45 = *v11;
            FIELD_U32(v45, 20) = 1082130432;
            FIELD_U32(v45, 28) |= 2u;
            v33 = 1090519040;
            goto LABEL_29;
          case 3:
            *(_DWORD *)(*v8 + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(*v8 + 4));
            v46 = *v8;
            FIELD_U32(v46, 20) = 1109393408;
            FIELD_U32(v46, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(*v11 + 4));
            v47 = *v11;
            FIELD_U32(v47, 20) = 1109393408;
            FIELD_U32(v47, 28) |= 2u;
            v40 = 1108344832;
LABEL_31:
            FIELD_U32(a1, 6992) = v40;
            v21 = 3;
            goto LABEL_32;
          case 4:
            *(_DWORD *)(*v8 + 24) = 1065353216;
            v49 = *v8;
            FIELD_U32(v49, 20) = 1101529088;
            FIELD_U32(v49, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = 1065353216;
            v50 = *v11;
            FIELD_U32(v50, 20) = 1101529088;
            FIELD_U32(v50, 28) |= 2u;
            v43 = 1103626240;
LABEL_35:
            FIELD_U32(a1, 6992) = v43;
            v26 = 4;
            goto LABEL_36;
          default:
            return result;
        }
        return result;
      case 2:
        if ( a2 == 3 )
        {
          *(_DWORD *)(*v8 + 24) = 1065353216;
          v24 = *v8;
          FIELD_U32(v24, 20) = 1090519040;
          FIELD_U32(v24, 28) |= 2u;
          *(_DWORD *)(*v11 + 24) = 1065353216;
          v25 = *v11;
          FIELD_U32(v25, 20) = 1090519040;
          FIELD_U32(v25, 28) |= 2u;
          FIELD_U32(a1, 6992) = 1094713344;
          v26 = 3;
          goto LABEL_36;
        }
        if ( !a2 )
        {
          *(_DWORD *)(*v8 + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(*v8 + 4));
          v14 = *v8;
          FIELD_U32(v14, 20) = 1106247680;
          FIELD_U32(v14, 28) |= 2u;
          *(_DWORD *)(*v11 + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(*v11 + 4));
          v15 = *v11;
          FIELD_U32(v15, 20) = 1106247680;
          FIELD_U32(v15, 28) |= 2u;
          v16 = 1104150528;
          goto LABEL_16;
        }
        return result;
      case 3:
        switch ( a2 )
        {
          case 2:
            *(_DWORD *)(*v8 + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(*v8 + 4));
            v27 = *v8;
            FIELD_U32(v27, 20) = 1094713344;
            FIELD_U32(v27, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = -1082130432;
            sub_6041838C((ModelAnimation *)(*v11 + 4));
            v28 = *v11;
            FIELD_U32(v28, 20) = 1094713344;
            FIELD_U32(v28, 28) |= 2u;
            FIELD_U32(a1, 6992) = 1090519040;
            v21 = 2;
            goto LABEL_32;
          case 1:
            *(_DWORD *)(*v8 + 24) = 1065353216;
            v29 = *v8;
            FIELD_U32(v29, 20) = 1108344832;
            FIELD_U32(v29, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = 1065353216;
            v30 = *v11;
            FIELD_U32(v30, 20) = 1108344832;
            FIELD_U32(v30, 28) |= 2u;
            FIELD_U32(a1, 6992) = 1109393408;
            v26 = 1;
            goto LABEL_36;
          case 0:
            *(_DWORD *)(*v8 + 24) = 1065353216;
            v17 = *v8;
            FIELD_U32(v17, 20) = 1094713344;
            FIELD_U32(v17, 28) |= 2u;
            *(_DWORD *)(*v11 + 24) = 1065353216;
            v18 = *v11;
            FIELD_U32(v18, 20) = 1094713344;
            FIELD_U32(v18, 28) |= 2u;
            FIELD_U32(a1, 6992) = 1098907648;
            result = 0;
            goto LABEL_24;
        }
        return result;
      case 4:
        if ( a2 == 2 )
        {
          *(_DWORD *)(*v8 + 24) = 1065353216;
          v31 = *v8;
          FIELD_U32(v31, 20) = 1106771968;
          FIELD_U32(v31, 28) |= 2u;
          *(_DWORD *)(*v11 + 24) = 1065353216;
          v32 = *v11;
          FIELD_U32(v32, 20) = 1106771968;
          FIELD_U32(v32, 28) |= 2u;
          v33 = 1108082688;
LABEL_29:
          FIELD_U32(a1, 6992) = v33;
          v26 = 2;
LABEL_36:
          *v5 = v26;
          result = 6996;
          v48 = 0;
LABEL_37:
          FIELD_U8(a1, 6996) = v48;
          return result;
        }
        if ( a2 != 1 )
        {
          if ( a2 )
            return result;
          *(_DWORD *)(*v8 + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(*v8 + 4));
          v19 = *v8;
          FIELD_U32(v19, 20) = 1101004800;
          FIELD_U32(v19, 28) |= 2u;
          *(_DWORD *)(*v11 + 24) = -1082130432;
          sub_6041838C((ModelAnimation *)(*v11 + 4));
          v20 = *v11;
          FIELD_U32(v20, 20) = 1101004800;
          FIELD_U32(v20, 28) |= 2u;
          v16 = 1098907648;
LABEL_16:
          FIELD_U32(a1, 6992) = v16;
          v21 = 0;
LABEL_32:
          *v5 = v21;
LABEL_33:
          result = 6996;
          v48 = 1;
          goto LABEL_37;
        }
        *(_DWORD *)(*v8 + 24) = -1082130432;
        sub_6041838C((ModelAnimation *)(*v8 + 4));
        v34 = *v8;
        FIELD_U32(v34, 20) = 1103626240;
        FIELD_U32(v34, 28) |= 2u;
        *(_DWORD *)(*v11 + 24) = -1082130432;
        sub_6041838C((ModelAnimation *)(*v11 + 4));
        v35 = *v11;
        FIELD_U32(v35, 20) = 1103626240;
        FIELD_U32(v35, 28) |= 2u;
        FIELD_U32(a1, 6992) = 1101529088;
        result = 1;
LABEL_24:
        *v5 = result;
        FIELD_U8(a1, 6996) = result;
        break;
      default:
        return result;
    }
  }
  return result;
}
