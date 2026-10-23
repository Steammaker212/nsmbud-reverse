/* jc_wait_ref_113BA0
 * address: 0x60113BA0   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref_113BA0(int a1)
{
  _DWORD *v2; // r0
  int **v3; // r6
  int v4; // r1
  int *v5; // r1
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  char v12; // r12
  int *v13; // r5
  int (__fastcall ***v14)(_DWORD, int *); // r5
  int v15; // r0
  int v16; // r5
  _DWORD v18[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (int **)(a1 + 7100);
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (int)*(v3 - 1);
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = "jc_wait";
  sub_60421938(v2, v4, (int)v18);
  v5 = (int *)(*v3)[3];
  v6 = (*v3)[17];
  if ( (*v3)[2] > v6 )
    v5 += v6;
  v7 = *v5;
  FIELD_U32(v7, 20) = 0;
  FIELD_U32(v7, 28) |= 2u;
  v8 = (*v3)[3];
  v9 = (*v3)[17];
  if ( (*v3)[2] > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  v10 = (*v3)[3];
  v11 = (*v3)[17];
  if ( (*v3)[2] > v11 )
    v10 += 4 * v11;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 1);
  v13 = v3[36];
  if ( ((unsigned int)&dword_60C86B30 & ~(1611742324 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
  {
    dword_60C86B2C = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C86B30);
  }
  if ( v13 && (*(int (__fastcall **)(int *, int *))*v13)(v13, &dword_60C86B2C) == 1 )
    (*(void (__fastcall **)(int *, int *))(*v13 + 192))(v13, &dword_60C86D74);
  v14 = *(int (__fastcall ****)(_DWORD, int *))(EnemyCounterMaybe_instance + 24);
  if ( ((unsigned int)&dword_60C80070 & ~(1611742480 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C80070) )
  {
    dword_60C8006C = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C80070);
  }
  if ( v14 )
  {
    v15 = (**v14)(v14, &dword_60C8006C);
    if ( v15 )
      v15 = (int)v14;
  }
  else
  {
    v15 = 0;
  }
  FIELD_U32(a1, 7604) = v15;
  v16 = **v3;
  if ( ((unsigned int)&dword_60C80400 & ~(1611742620 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v16 && (**(int (__fastcall ***)(int, int *))v16)(v16, &dword_60C803FC) == 1 )
  {
    FIELD_U32(v16, 312) = 4;
    FIELD_U32(v16, 36) = 8;
  }
  sub_601161B4(a1);
  FIELD_U8(a1, 535) = 0;
  FIELD_U32(a1, 7648) = 1;
  FIELD_U8(a1, 7652) = 1;
  return 7652;
}
