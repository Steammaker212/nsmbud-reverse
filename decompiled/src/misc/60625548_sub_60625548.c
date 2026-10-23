/* sub_60625548
 * address: 0x60625548   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60625548(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r1
  int *v3; // r5
  int v4; // r0
  _DWORD *v5; // r6
  int v6; // r1
  int v7; // r1
  _DWORD *v8; // t1
  int v9; // r0
  int (**v11)(); // [sp+0h] [bp-20h] BYREF
  const char *v12; // [sp+4h] [bp-1Ch]

  v1 = a1;
  v3 = a1 + 1532;
  v2 = a1[1532];
  v5 = a1 + 1534;
  v4 = a1[1534];
  v11 = &sead__SafeStringBase__vtable;
  v12 = "sandpillar";
  sub_60446088(v4, v2, &v11);
  v6 = *v5;
  FIELD_U32(v6, 20) = v1[1613];
  FIELD_U32(v6, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(*v5 + 4), 1);
  v7 = *v3;
  v8 = (_DWORD *)v1[1535];
  v1 += 1535;
  v11 = &sead__SafeStringBase__vtable;
  v12 = "sandpillar_end";
  ShuAnim_play(v8, v7, &v11);
  v9 = *v1;
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  *(_DWORD *)(*v1 + 24) = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(*v1 + 4), 0);
  v1[81] = 1015759766;
  *(v1 - 1498) = 0;
  v1[80] = 978433815;
  v1[79] = 1015759766;
  return 1015759766;
}
