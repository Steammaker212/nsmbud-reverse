/* sub_60207ED4
 * address: 0x60207ED4   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60207ED4(int a1)
{
  int result; // r0
  int v3; // r2
  _DWORD *v4; // r0
  int v5; // r1
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  _DWORD *v10; // r0
  int v11; // r1
  _DWORD *v12; // r0
  int v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r0
  _DWORD *v16; // r0
  int v17; // r1
  _DWORD *v18; // r0
  int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r0
  _DWORD *v22; // r0
  int v23; // r1
  unsigned int v24; // r2
  unsigned int v25; // r0
  int a5; // [sp+0h] [bp-10h] BYREF
  const char *v27; // [sp+4h] [bp-Ch]

  result = FIELD_U32(a1, 356) - 1;
  FIELD_U32(a1, 356) = result;
  if ( !result )
  {
    v3 = FIELD_U32(a1, 360);
    if ( v3 == 1 )
    {
      v10 = *(_DWORD **)(a1 + 268);
      v11 = FIELD_U32(a1, 272);
      a5 = (int)&sead__SafeStringBase__vtable;
      v27 = "throw_ed";
      sub_60421938(v10, v11, (int)&a5);
      v12 = *(_DWORD **)(a1 + 268);
      v13 = v12[3];
      v14 = v12[2];
      v15 = v12[17];
      if ( v14 > v15 )
        v13 += 4 * v15;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 0);
      FIELD_U32(a1, 356) = 36;
      sub_601E4C88((_DWORD *)dword_60C8B13C, 170, (_DWORD *)(a1 + 80));
    }
    else if ( v3 )
    {
      v16 = *(_DWORD **)(a1 + 268);
      v17 = FIELD_U32(a1, 272);
      if ( v3 == 2 )
      {
        a5 = (int)&sead__SafeStringBase__vtable;
        v27 = "throw_ed_wait";
        sub_60421938(v16, v17, (int)&a5);
        v18 = *(_DWORD **)(a1 + 268);
        v19 = v18[3];
        v20 = v18[2];
        v21 = v18[17];
        if ( v20 > v21 )
          v19 += 4 * v21;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v19 + 4), 1);
        FIELD_U32(a1, 356) = 20;
      }
      else
      {
        a5 = (int)&sead__SafeStringBase__vtable;
        v27 = "wait";
        sub_60421938(v16, v17, (int)&a5);
        v22 = *(_DWORD **)(a1 + 268);
        v23 = v22[3];
        v24 = v22[2];
        v25 = v22[17];
        if ( v24 > v25 )
          v23 += 4 * v25;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 1);
        StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&dword_60C8C678);
      }
    }
    else
    {
      v4 = *(_DWORD **)(a1 + 268);
      v5 = FIELD_U32(a1, 272);
      a5 = (int)&sead__SafeStringBase__vtable;
      v27 = "throw_st_wait";
      sub_60421938(v4, v5, (int)&a5);
      v6 = *(_DWORD **)(a1 + 268);
      v7 = v6[3];
      v8 = v6[2];
      v9 = v6[17];
      if ( v8 > v9 )
        v7 += 4 * v9;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 1);
      FIELD_U32(a1, 356) = 12;
    }
    result = FIELD_U32(a1, 360) + 1;
    FIELD_U32(a1, 360) = result;
  }
  return result;
}
