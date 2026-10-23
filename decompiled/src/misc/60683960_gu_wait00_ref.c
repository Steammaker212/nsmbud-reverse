/* gu_wait00_ref
 * address: 0x60683960   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall gu_wait00_ref(int a1)
{
  int result; // r0
  _DWORD *v3; // r6
  int v4; // r4
  _DWORD *v5; // t1
  int Resource; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  _DWORD v13[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v14[8]; // [sp+8h] [bp-20h] BYREF

  v3 = (_DWORD *)(a1 + 7512);
  result = FIELD_U32(a1, 7512);
  if ( result )
  {
    v5 = *(_DWORD **)(a1 + 6112);
    v4 = a1 + 6112;
    v14[0] = &sead__SafeStringBase__vtable;
    v14[1] = "magic_hand";
    Resource = LoadResource(ResourceMgrRelated_instance, v14);
    v13[0] = &sead__SafeStringBase__vtable;
    v13[1] = "gu_wait00";
    sub_60421938(v5, Resource, (int)v13);
    v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
    v9 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v10 )
      v9 += 4 * v10;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 1);
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v12 )
      v11 += 4 * v12;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v11 + 4));
    *v3 = 0;
    return 0;
  }
  return result;
}
