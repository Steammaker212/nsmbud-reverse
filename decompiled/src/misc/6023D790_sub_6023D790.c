/* sub_6023D790
 * address: 0x6023D790   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023D790(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  _DWORD *v5; // t1
  int v6; // r1
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  _DWORD v13[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 12076);
  result = FIELD_U32(a1, 12076);
  if ( result != 4 )
  {
    v5 = *(_DWORD **)(a1 + 6604);
    v4 = (_DWORD *)(a1 + 6604);
    v6 = v4[2];
    v13[0] = &sead__SafeStringBase__vtable;
    v13[1] = "touch";
    sub_60421938(v5, v6, (int)v13);
    v7 = *(_DWORD *)(*v4 + 12);
    v8 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
    v9 = *(_DWORD *)(*v4 + 12);
    v10 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v10 )
      v9 += 4 * v10;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 0);
    v11 = *(_DWORD *)(*v4 + 12);
    v12 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v12 )
      v11 += 4 * v12;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v11 + 4));
    *v3 = 4;
    return 4;
  }
  return result;
}
