/* sub_60192368
 * address: 0x60192368   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60192368(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  int v5; // r0
  ModelAnimation *v6; // r5
  int v7; // r2
  int v8; // r1
  int v9; // r1
  int v10; // r0
  int v11; // r0
  ModelAnimation *v12; // r5
  int v13; // r1
  int v14; // r0
  int v15; // r0
  ModelAnimation *v16; // r5
  int v17; // r1
  int v18; // r0
  int v19; // r0
  ModelAnimation *v20; // r5
  int result; // r0
  int v22; // r3
  int v23; // r1
  int (**v24)(); // [sp+4h] [bp-1Ch] BYREF
  const char *v25; // [sp+8h] [bp-18h]
  int v26; // [sp+Ch] [bp-14h]

  v2 = dword_60C8996C;
  v26 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    switch ( v26 )
    {
      case 126:
        v3 = FIELD_U32(a1, 276);
        v4 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
        v24 = &sead__SafeStringBase__vtable;
        v25 = "cobFlagPeachAppear";
        SkeletalAnim_play(v4, v3, (int)&v24);
        FIELD_U8(a1, 292) = 1;
        v5 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
        v6 = (ModelAnimation *)(v5 + 4);
        FIELD_U32(v5, 24) = -1082130432;
        AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), 0);
        sub_6041838C(v6);
        v7 = a1 + 80;
        v8 = 102;
        goto LABEL_7;
      case 127:
        v17 = FIELD_U32(a1, 280);
        v18 = **(_DWORD **)(FIELD_U32(a1, 272) + 12);
        v24 = &sead__SafeStringBase__vtable;
        v25 = "cobFlagKoopaAppear";
        SkeletalAnim_play(v18, v17, (int)&v24);
        FIELD_U8(a1, 292) = 0;
        v19 = **(_DWORD **)(FIELD_U32(a1, 272) + 12);
        v20 = (ModelAnimation *)(v19 + 4);
        FIELD_U32(v19, 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(v19 + 4), 0);
        sub_6041838C(v20);
        v7 = a1 + 80;
        v8 = 103;
LABEL_7:
        sub_601E4C88(dword_60C8B13C, v8, v7, 1);
        goto LABEL_8;
      case 128:
        v9 = FIELD_U32(a1, 280);
        v10 = **(_DWORD **)(FIELD_U32(a1, 272) + 12);
        v24 = &sead__SafeStringBase__vtable;
        v25 = "cobFlagKoopaAppear";
        SkeletalAnim_play(v10, v9, (int)&v24);
        FIELD_U8(a1, 292) = 0;
        v11 = **(_DWORD **)(FIELD_U32(a1, 272) + 12);
        v12 = (ModelAnimation *)(v11 + 4);
        FIELD_U32(v11, 24) = -1082130432;
        AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), 0);
        sub_6041838C(v12);
LABEL_8:
        FIELD_U32(a1, 284) = 0;
        break;
      case 129:
        v13 = FIELD_U32(a1, 276);
        v14 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
        v24 = &sead__SafeStringBase__vtable;
        v25 = "cobFlagPeachAppear";
        SkeletalAnim_play(v14, v13, (int)&v24);
        FIELD_U8(a1, 292) = 1;
        v15 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
        v16 = (ModelAnimation *)(v15 + 4);
        FIELD_U32(v15, 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(v15 + 4), 0);
        sub_6041838C(v16);
        break;
      default:
        break;
    }
  }
  result = **(_DWORD **)(FIELD_U32(a1, 272) + 12);
  v22 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  switch ( v26 )
  {
    case 126:
      result = FIELD_U8(v22, 28);
      if ( (result & 0x20) != 0 )
        goto LABEL_19;
      break;
    case 127:
      if ( (FIELD_U8(result, 28) & 0x20) != 0 )
      {
        v23 = FIELD_U32(a1, 280);
        v24 = &sead__SafeStringBase__vtable;
        v25 = "cobFlagKoopaWait";
        goto LABEL_18;
      }
      break;
    case 128:
      result = FIELD_U8(result, 28);
      if ( (result & 0x20) != 0 )
        goto LABEL_19;
      break;
    case 129:
      result = FIELD_U8(v22, 28);
      if ( (result & 0x20) != 0 )
      {
        v23 = FIELD_U32(a1, 276);
        v24 = &sead__SafeStringBase__vtable;
        v25 = "cobFlagPeachWait";
        result = v22;
LABEL_18:
        SkeletalAnim_play(result, v23, (int)&v24);
        goto LABEL_19;
      }
      break;
    default:
LABEL_19:
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      break;
  }
  return result;
}
