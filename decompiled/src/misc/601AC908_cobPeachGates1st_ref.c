/* cobPeachGates1st_ref
 * address: 0x601AC908   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobPeachGates1st_ref(int a1)
{
  int v2; // r5
  int v3; // r5
  bool v4; // zf
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  bool v14; // zf
  int result; // r0
  char v16; // r0
  int (**v17)(); // [sp+4h] [bp-24h] BYREF
  const char *v18; // [sp+8h] [bp-20h]
  int (**v19)(); // [sp+Ch] [bp-1Ch] BYREF
  const char *v20; // [sp+10h] [bp-18h]
  int v21; // [sp+14h] [bp-14h]

  v2 = dword_60C8996C;
  v21 = sub_6019112C(dword_60C8996C);
  if ( !FIELD_U8(v2, 1384) )
    goto LABEL_16;
  v3 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  if ( v21 > 165 )
  {
    if ( v21 == 166 )
    {
      v19 = &sead__SafeStringBase__vtable;
      v20 = "cobPeachGates1st";
      v12 = LoadResource(ResourceMgrRelated_instance, &v19);
      v17 = &sead__SafeStringBase__vtable;
      v18 = "cobPeachGates1st__close";
      SkeletalAnim_play(v3, v12, (int)&v17);
      AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
      FIELD_U32(v3, 20) = 0;
      v6 = a1 + 80;
      v7 = 35;
      FIELD_U32(v3, 28) |= 2u;
      goto LABEL_15;
    }
    if ( v21 != 167 )
      goto LABEL_16;
    v19 = &sead__SafeStringBase__vtable;
    v20 = "cobPeachGates1st";
    v8 = LoadResource(ResourceMgrRelated_instance, &v19);
    v17 = &sead__SafeStringBase__vtable;
    v18 = "cobPeachGates1st__out";
    SkeletalAnim_play(v3, v8, (int)&v17);
    AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
    v9 = a1 + 80;
    v10 = 34;
LABEL_13:
    sub_601E4C88(dword_60C8B13C, v10, v9, 1);
    FIELD_U8(a1, 272) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    goto LABEL_16;
  }
  if ( v21 == 1 )
  {
    v19 = &sead__SafeStringBase__vtable;
    v20 = "cobPeachGates1st";
    v11 = LoadResource(ResourceMgrRelated_instance, &v19);
    v17 = &sead__SafeStringBase__vtable;
    v18 = "cobPeachGates1st__open";
    SkeletalAnim_play(v3, v11, (int)&v17);
    AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
    v9 = a1 + 80;
    v10 = 33;
    FIELD_U32(v3, 24) = 1075419546;
    goto LABEL_13;
  }
  v4 = v21 == 165;
  if ( v21 == 165 )
    v4 = FIELD_U8(a1, 272) == 0;
  if ( v4 )
  {
    v19 = &sead__SafeStringBase__vtable;
    v20 = "cobPeachGates1st";
    v5 = LoadResource(ResourceMgrRelated_instance, &v19);
    v17 = &sead__SafeStringBase__vtable;
    v18 = "cobPeachGates1st__open";
    SkeletalAnim_play(v3, v5, (int)&v17);
    AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
    v6 = a1 + 80;
    v7 = 33;
    FIELD_U32(v3, 24) = 1075419546;
LABEL_15:
    sub_601E4C88(dword_60C8B13C, v7, v6, 1);
  }
LABEL_16:
  v13 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  if ( v21 == 166 )
  {
    result = FIELD_U8(v13, 28);
    if ( (result & 0x20) == 0 )
      return result;
    v16 = 0;
  }
  else
  {
    v14 = v21 == 165;
    if ( v21 == 165 )
      v14 = FIELD_U8(a1, 272) == 0;
    if ( !v14 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    result = FIELD_U8(v13, 28);
    if ( (result & 0x20) == 0 )
      return result;
    v16 = 1;
  }
  FIELD_U8(a1, 272) = v16;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
