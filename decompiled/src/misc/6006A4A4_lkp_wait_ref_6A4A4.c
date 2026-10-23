/* lkp_wait_ref_6A4A4
 * address: 0x6006A4A4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_wait_ref_6A4A4(int a1)
{
  int Resource; // r0
  int v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  __int16 v8; // r1
  int v9; // r0
  int v10; // r0
  _DWORD v12[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v13[6]; // [sp+8h] [bp-18h] BYREF

  v12[0] = &sead__SafeStringBase__vtable;
  v13[0] = &sead__SafeStringBase__vtable;
  v12[1] = "lkp_wait";
  v13[1] = "koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v13);
  v3 = a1 + 7112;
  sub_60421938(*(_DWORD **)(a1 + 7112), Resource, (int)v12);
  v4 = *(_DWORD *)(FIELD_U32(a1, 7112) + 12);
  v5 = *(_DWORD *)(FIELD_U32(a1, 7112) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 7112) + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  v8 = 60;
  if ( FIELD_S32(a1, 25372) <= 0 )
  {
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1);
    v8 = 94;
    if ( !v9 )
    {
      v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
      v8 = 30;
      if ( v10 )
        v8 = 94;
    }
  }
  FIELD_U16(a1, 6276) = v8;
  return 6276;
}
