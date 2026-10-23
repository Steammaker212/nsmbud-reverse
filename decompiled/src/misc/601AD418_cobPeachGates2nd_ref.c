/* cobPeachGates2nd_ref
 * address: 0x601AD418   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobPeachGates2nd_ref(int a1)
{
  int v2; // r5
  int v3; // r5
  bool v4; // zf
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int result; // r0
  int (**v12)(); // [sp+4h] [bp-24h] BYREF
  const char *v13; // [sp+8h] [bp-20h]
  int (**v14)(); // [sp+Ch] [bp-1Ch] BYREF
  const char *v15; // [sp+10h] [bp-18h]
  int v16; // [sp+14h] [bp-14h]

  v2 = dword_60C8996C;
  v16 = sub_6019112C(dword_60C8996C);
  if ( !FIELD_U8(v2, 1384) )
    goto LABEL_12;
  v3 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  if ( v16 == 167 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "cobPeachGates2nd";
    v8 = LoadResource(ResourceMgrRelated_instance, &v14);
    v12 = &sead__SafeStringBase__vtable;
    v13 = "cobPeachGates2nd__out";
    SkeletalAnim_play(v3, v8, (int)&v12);
    AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
    sub_601E4C88(dword_60C8B13C, 34, a1 + 80, 1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    goto LABEL_12;
  }
  if ( v16 == 166 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "cobPeachGates2nd";
    v9 = LoadResource(ResourceMgrRelated_instance, &v14);
    v12 = &sead__SafeStringBase__vtable;
    v13 = "cobPeachGates2nd__close";
    SkeletalAnim_play(v3, v9, (int)&v12);
    AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
    FIELD_U32(v3, 20) = 0;
    v6 = a1 + 80;
    v7 = 35;
    FIELD_U32(v3, 28) |= 2u;
    goto LABEL_11;
  }
  v4 = v16 == 165;
  if ( v16 == 165 )
    v4 = FIELD_U8(a1, 272) == 0;
  if ( v4 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "cobPeachGates2nd";
    v5 = LoadResource(ResourceMgrRelated_instance, &v14);
    v12 = &sead__SafeStringBase__vtable;
    v13 = "cobPeachGates2nd__open";
    SkeletalAnim_play(v3, v5, (int)&v12);
    AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
    v6 = a1 + 80;
    v7 = 33;
    FIELD_U32(v3, 24) = 1075419546;
LABEL_11:
    sub_601E4C88(dword_60C8B13C, v7, v6, 1);
  }
LABEL_12:
  v10 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  if ( v16 != 167 )
  {
    if ( v16 == 166 )
    {
      result = FIELD_U8(v10, 28);
      if ( (result & 0x20) == 0 )
        return result;
      FIELD_U8(a1, 272) = 0;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
    if ( v16 != 165 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  if ( FIELD_U8(a1, 272) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  result = FIELD_U8(v10, 28);
  if ( (result & 0x20) != 0 )
  {
    FIELD_U8(a1, 272) = 1;
    return 1;
  }
  return result;
}
