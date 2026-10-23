/* sub_60067E10
 * address: 0x60067E10   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60067E10(int a1)
{
  int v2; // r0
  __int16 v3; // r1
  int v4; // r0
  _DWORD *v5; // r6
  int v6; // r5
  int v7; // r5
  int v8; // r5
  int v9; // r5
  int v10; // r0
  int v11; // r5
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r0
  _DWORD v18[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v19[2]; // [sp+8h] [bp-30h] BYREF
  int (**v20)(); // [sp+10h] [bp-28h] BYREF
  const char *v21; // [sp+14h] [bp-24h]

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1);
  v3 = 94;
  if ( !v2 )
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
    v3 = 188;
    if ( v4 )
      v3 = 94;
  }
  FIELD_U16(a1, 6276) = v3;
  v5 = (_DWORD *)(a1 + 6096);
  v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v6 != (*(int (**)(void))(dword_60C8146C + 8))() )
  {
    v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5);
    if ( v7 != (*(int (**)(void))(dword_60C814AC + 8))() )
    {
      v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5);
      if ( v8 != (*(int (**)(void))(dword_60C8150C + 8))() )
      {
        v9 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5);
        if ( v9 != (*(int (**)(void))(dword_60C8154C + 8))() )
        {
          v20 = &sead__SafeStringBase__vtable;
          v21 = "koopa";
          v19[0] = &sead__SafeStringBase__vtable;
          v19[1] = "lkp_wait";
          v10 = LoadResource(ResourceMgrRelated_instance, &v20);
          v11 = a1 + 7112;
          sub_60421938(*(_DWORD **)(a1 + 7112), v10, (int)v19);
          v12 = *(_DWORD *)(FIELD_U32(a1, 7112) + 12);
          v13 = *(_DWORD *)(FIELD_U32(a1, 7112) + 68);
          if ( *(_DWORD *)(FIELD_U32(a1, 7112) + 8) > v13 )
            v12 += 4 * v13;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 1);
          v14 = *(_DWORD *)(*(_DWORD *)v11 + 12);
          v15 = *(_DWORD *)(*(_DWORD *)v11 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v15 )
            v14 += 4 * v15;
          *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
          v18[0] = &sead__SafeStringBase__vtable;
          v18[1] = "lkp_wait";
          v20 = &sead__SafeStringBase__vtable;
          v21 = "koopa_model";
          v16 = LoadResource(ResourceMgrRelated_instance, &v20);
          TexAnim_play(**(_DWORD **)(*(_DWORD *)v11 + 20), v16, v18);
          AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v11 + 20) + 4), 1);
          *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v11 + 20) + 24) = 1065353216;
        }
      }
    }
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return 0;
}
