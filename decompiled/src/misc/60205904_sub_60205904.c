/* sub_60205904
 * address: 0x60205904   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60205904(int a1)
{
  int v2; // r5
  int v3; // r5
  int v4; // r0
  int v5; // r0
  _DWORD *v6; // r2
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  bool v11; // zf
  int result; // r0
  char v13; // r0
  int (**v14)(); // [sp+4h] [bp-24h] BYREF
  const char *v15; // [sp+8h] [bp-20h]
  int (**v16)(); // [sp+Ch] [bp-1Ch] BYREF
  const char *v17; // [sp+10h] [bp-18h]
  int v18; // [sp+14h] [bp-14h]

  v2 = dword_60C8996C;
  v18 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    v3 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
    switch ( v18 )
    {
      case 1:
        v16 = &sead__SafeStringBase__vtable;
        v17 = "cobToride";
        v4 = LoadResource(ResourceMgrRelated_instance, &v16);
        v14 = &sead__SafeStringBase__vtable;
        v15 = "cobTorideOpen";
        SkeletalAnim_play(v3, v4, (int)&v14);
        AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
        FIELD_U32(v3, 24) = 1075419546;
        sub_601E4C88((_DWORD *)dword_60C8B13C, 33, (_DWORD *)(a1 + 80));
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        FIELD_U8(a1, 284) = 1;
        break;
      case 2:
        if ( !FIELD_U8(a1, 284) )
        {
          v16 = &sead__SafeStringBase__vtable;
          v17 = "cobToride";
          v5 = LoadResource(ResourceMgrRelated_instance, &v16);
          v14 = &sead__SafeStringBase__vtable;
          v15 = "cobTorideOpen";
          SkeletalAnim_play(v3, v5, (int)&v14);
          AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
          v6 = (_DWORD *)(a1 + 80);
          v7 = 33;
          FIELD_U32(v3, 24) = 1075419546;
          goto LABEL_8;
        }
        break;
      case 3:
        v16 = &sead__SafeStringBase__vtable;
        v17 = "cobToride";
        v8 = LoadResource(ResourceMgrRelated_instance, &v16);
        v14 = &sead__SafeStringBase__vtable;
        v15 = "cobTorideOut";
        SkeletalAnim_play(v3, v8, (int)&v14);
        AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
        sub_601E4C88((_DWORD *)dword_60C8B13C, 34, (_DWORD *)(a1 + 80));
        FIELD_U8(a1, 284) = 1;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        break;
      case 4:
        v16 = &sead__SafeStringBase__vtable;
        v17 = "cobToride";
        v9 = LoadResource(ResourceMgrRelated_instance, &v16);
        v14 = &sead__SafeStringBase__vtable;
        v15 = "cobTorideClose";
        SkeletalAnim_play(v3, v9, (int)&v14);
        AnimationCtrl_setRepeat((ModelAnimation *)(v3 + 4), 0);
        FIELD_U32(v3, 20) = 0;
        v6 = (_DWORD *)(a1 + 80);
        v7 = 35;
        FIELD_U32(v3, 28) |= 2u;
LABEL_8:
        sub_601E4C88((_DWORD *)dword_60C8B13C, v7, v6);
        break;
      default:
        break;
    }
  }
  v10 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  if ( v18 == 4 )
  {
    result = FIELD_U8(v10, 28);
    if ( (result & 0x20) == 0 )
      return result;
    v13 = 0;
  }
  else
  {
    v11 = v18 == 2;
    if ( v18 == 2 )
      v11 = FIELD_U8(a1, 284) == 0;
    if ( !v11 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    result = FIELD_U8(v10, 28);
    if ( (result & 0x20) == 0 )
      return result;
    v13 = 1;
  }
  FIELD_U8(a1, 284) = v13;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
