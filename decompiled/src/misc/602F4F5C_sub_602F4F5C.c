/* sub_602F4F5C
 * address: 0x602F4F5C   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F4F5C(int a1)
{
  int *v2; // r9
  int v3; // r4
  int v4; // r1
  unsigned int v5; // r0
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r4
  int v13; // r0
  _DWORD *v14; // r6
  int v15; // t1
  int v16; // r0
  int v17; // r4
  int result; // r0
  int (**v19)(); // [sp+0h] [bp-30h] BYREF
  const char *v20; // [sp+4h] [bp-2Ch]

  v19 = &sead__SafeStringBase__vtable;
  v20 = "walk";
  v2 = (int *)(a1 + 6300);
  v3 = a1 + 6304;
  sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&v19);
  v4 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = *(int **)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += v7;
  v8 = *v6;
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 0;
  v19 = &sead__SafeStringBase__vtable;
  v20 = "look";
  TexAnim_play(FIELD_U32(a1, 6308), *v2, &v19);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6308) + 4), 0);
  v11 = FIELD_U32(a1, 6308);
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 0;
  v19 = &sead__SafeStringBase__vtable;
  v20 = "look";
  v12 = a1 + 6312;
  ShuAnim_play(*(_DWORD **)(a1 + 6312), *v2, (int)&v19);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 0);
  v13 = FIELD_U32(a1, 6312);
  FIELD_U32(v13, 20) = 0;
  FIELD_U32(v13, 28) |= 2u;
  *(_DWORD *)(*(_DWORD *)v12 + 24) = 0;
  v19 = &sead__SafeStringBase__vtable;
  v20 = "look";
  v15 = FIELD_U32(a1, 6316);
  v14 = (_DWORD *)(a1 + 6316);
  sub_6045195C(v15, *v2, &v19);
  AnimationCtrl_setRepeat((ModelAnimation *)(*v14 + 4), 0);
  v16 = *v14;
  FIELD_U32(v16, 20) = 1123287040;
  FIELD_U32(v16, 28) |= 2u;
  *(_DWORD *)(*(_DWORD *)v12 + 24) = 0;
  *(v14 - 1546) = 0;
  *(v14 - 1547) = 0;
  *(v14 - 1548) = 0;
  *(v14 - 1549) = 0;
  *(v14 - 1553) = 1028443341;
  v14[6] = 13631488;
  v14[7] = -1073741824;
  *(v14 - 1540) = (int)(float)((float)((float)((float)(0.00030118 * 0.0) * 0.000000059605) + -1.0) * 83886000.0);
  v17 = v14[8];
  result = ((90 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + v17;
  v14[9] = result;
  return result;
}
