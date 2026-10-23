/* sub_601743E0
 * address: 0x601743E0   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601743E0(int a1)
{
  int v2; // r5
  int v3; // r5
  int v4; // r0
  int v5; // r2
  int v6; // r1
  int v7; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r0
  bool v13; // zf
  int result; // r0
  char v15; // r0
  int (**v16)(); // [sp+4h] [bp-24h] BYREF
  const char *v17; // [sp+8h] [bp-20h]
  int (**v18)(); // [sp+Ch] [bp-1Ch] BYREF
  const char *v19; // [sp+10h] [bp-18h]
  int v20; // [sp+14h] [bp-14h]

  v2 = dword_60C8996C;
  v20 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    v3 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
    switch ( v20 )
    {
      case 1:
        v18 = &sead__SafeStringBase__vtable;
        v19 = "cobCastle";
        v4 = LoadResource(ResourceMgrRelated_instance, &v18);
        v16 = &sead__SafeStringBase__vtable;
        v17 = "cobCastleOpen";
        SkeletalAnim_play(v3, v4, (int)&v16);
        AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
        v5 = a1 + 80;
        v6 = 33;
        FIELD_U32(v3, 24) = 1075419546;
        goto LABEL_7;
      case 2:
        if ( FIELD_U8(a1, 272) )
          break;
        v18 = &sead__SafeStringBase__vtable;
        v19 = "cobCastle";
        v7 = LoadResource(ResourceMgrRelated_instance, &v18);
        v16 = &sead__SafeStringBase__vtable;
        v17 = "cobCastleOpen";
        SkeletalAnim_play(v3, v7, (int)&v16);
        AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
        v8 = a1 + 80;
        v9 = 33;
        FIELD_U32(v3, 24) = 1075419546;
LABEL_9:
        sub_601E4C88(dword_60C8B13C, v9, v8, 1);
        break;
      case 3:
        v18 = &sead__SafeStringBase__vtable;
        v19 = "cobCastle";
        v10 = LoadResource(ResourceMgrRelated_instance, &v18);
        v16 = &sead__SafeStringBase__vtable;
        v17 = "cobCastleOut";
        SkeletalAnim_play(v3, v10, (int)&v16);
        AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
        v5 = a1 + 80;
        v6 = 34;
LABEL_7:
        sub_601E4C88(dword_60C8B13C, v6, v5, 1);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        FIELD_U8(a1, 272) = 1;
        break;
      case 4:
        v18 = &sead__SafeStringBase__vtable;
        v19 = "cobCastle";
        v11 = LoadResource(ResourceMgrRelated_instance, &v18);
        v16 = &sead__SafeStringBase__vtable;
        v17 = "cobCastleClose";
        SkeletalAnim_play(v3, v11, (int)&v16);
        AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
        FIELD_U32(v3, 20) = 0;
        v8 = a1 + 80;
        v9 = 35;
        FIELD_U32(v3, 28) |= 2u;
        goto LABEL_9;
      default:
        break;
    }
  }
  v12 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  if ( v20 == 4 )
  {
    result = FIELD_U8(v12, 28);
    if ( (result & 0x20) == 0 )
      return result;
    v15 = 0;
  }
  else
  {
    v13 = v20 == 2;
    if ( v20 == 2 )
      v13 = FIELD_U8(a1, 272) == 0;
    if ( !v13 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    result = FIELD_U8(v12, 28);
    if ( (result & 0x20) == 0 )
      return result;
    v15 = 1;
  }
  FIELD_U8(a1, 272) = v15;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
