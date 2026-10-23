/* sub_60067B80
 * address: 0x60067B80   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60067B80(int a1)
{
  int v2; // r0
  int v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  _DWORD v11[2]; // [sp+0h] [bp-30h] BYREF
  _DWORD v12[2]; // [sp+8h] [bp-28h] BYREF
  int (**v13)(); // [sp+10h] [bp-20h] BYREF
  const char *v14; // [sp+14h] [bp-1Ch]

  v13 = &sead__SafeStringBase__vtable;
  v14 = "koopa";
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "lkp_wait";
  v2 = LoadResource(ResourceMgrRelated_instance, &v13);
  v4 = *(_DWORD **)(a1 + 7112);
  v3 = a1 + 7112;
  sub_60421938(v4, v2, (int)v12);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "lkp_wait";
  v13 = &sead__SafeStringBase__vtable;
  v14 = "koopa_model";
  v9 = LoadResource(ResourceMgrRelated_instance, &v13);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v3 + 20), v9, v11);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 24) = 1065353216;
  *(_DWORD *)(v3 - 6992) = 0;
  *(_DWORD *)(v3 - 6988) = 0;
  *(_DWORD *)(v3 - 6984) = 0;
  *(_WORD *)(v3 - 836) = 94;
  return -836;
}
