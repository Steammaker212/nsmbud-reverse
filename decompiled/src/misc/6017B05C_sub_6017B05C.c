/* sub_6017B05C
 * address: 0x6017B05C   size: 1348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017B05C(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r5
  int v8; // r6
  int v9; // r5
  int v10; // r0
  float v11; // r0
  int v12; // r0
  char *v13; // r1
  char *v14; // r0
  int result; // r0
  int v16; // r5
  int v17; // r0
  int v18; // r6
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int (__fastcall *v22)(int, Vec3 *); // r2
  int v23; // r0
  _DWORD v24[3]; // [sp+4h] [bp-64h] BYREF
  Vec3 v25; // [sp+10h] [bp-58h] BYREF
  float v26; // [sp+1Ch] [bp-4Ch]
  float v27; // [sp+2Ch] [bp-3Ch]
  float v28; // [sp+3Ch] [bp-2Ch]
  Vec3 v29; // [sp+40h] [bp-28h] BYREF
  int v30; // [sp+4Ch] [bp-1Ch]

  v2 = dword_60C8996C;
  v30 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    switch ( v30 )
    {
      case 149:
        v8 = FIELD_U32(a1, 320);
        FIELD_U32(a1, 308) = 3;
        FIELD_U32(a1, 312) = v8;
        v9 = **(_DWORD **)(FIELD_U32(a1, 268) + 28);
        LODWORD(v25.x) = &sead__SafeStringBase__vtable;
        LODWORD(v25.y) = "cobCourse";
        v10 = LoadResource(ResourceMgrRelated_instance, &v25);
        ShuAnim_play((_DWORD *)v9, v10, (int)&dword_60C88E90[2 * FIELD_U32(a1, 308) + 3]);
        AnimationCtrl_setRepeat((ModelAnimation *)(v9 + 4), dword_60AF7A3C[FIELD_U32(a1, 308)]);
        FIELD_U32(v9, 24) = v8;
        FIELD_U32(a1, 292) = v9;
        sub_6017A3E0(a1);
        FIELD_U32(a1, 324) = *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 268) + 28) + 8);
        FIELD_U8(a1, 416) = 1;
        FIELD_U32(a1, 328) = 3;
        v25.x = FIELD_F32(a1, 80);
        v11 = FIELD_F32(a1, 84);
        v25.z = FIELD_F32(a1, 88);
        v25.y = v11;
        v29.x = 1.0;
        v29.y = 1.0;
        v29.z = 1.0;
        EffectData_create(895, &v25, 0, (int)&v29);
        sub_601E4C88(dword_60C8B13C, 32, a1 + 80, 1);
        if ( FIELD_U32(a1, 240) == 8 )
        {
          FIELD_U8(a1, 418) = 1;
        }
        else
        {
          v12 = FIELD_U32(a1, 340);
          if ( v12 < 1 )
            v13 = &byte_60B3BA34;
          else
            v13 = *(char **)(a1 + 336);
          if ( *v13 == 87 )
          {
            v14 = v12 < 3 ? &byte_60B3BA34 : (char *)(FIELD_U32(a1, 336) + 2);
            if ( *v14 == 65 )
              FIELD_U8(a1, 418) = 1;
          }
        }
        break;
      case 310:
        v6 = FIELD_U32(a1, 288);
        v7 = **(_DWORD **)(FIELD_U32(a1, 276) + 12);
        LODWORD(v25.x) = &sead__SafeStringBase__vtable;
        LODWORD(v25.y) = "cobStarCoinOpen";
        SkeletalAnim_play(v7, v6, (int)&v25);
        AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 0);
        sub_601E4C88(dword_60C8B13C, 108, a1 + 80, 1);
        break;
      case 173:
        v3 = FIELD_U32(a1, 320);
        FIELD_U32(a1, 308) = 4;
        FIELD_U32(a1, 312) = v3;
        v4 = **(_DWORD **)(FIELD_U32(a1, 268) + 28);
        LODWORD(v25.x) = &sead__SafeStringBase__vtable;
        LODWORD(v25.y) = "cobCourse";
        v5 = LoadResource(ResourceMgrRelated_instance, &v25);
        ShuAnim_play((_DWORD *)v4, v5, (int)&dword_60C88E90[2 * FIELD_U32(a1, 308) + 3]);
        AnimationCtrl_setRepeat((ModelAnimation *)(v4 + 4), dword_60AF7A3C[FIELD_U32(a1, 308)]);
        FIELD_U32(v4, 24) = v3;
        FIELD_U32(a1, 292) = v4;
        sub_6017A3E0(a1);
        FIELD_U32(a1, 324) = *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 268) + 28) + 8);
        FIELD_U8(a1, 416) = 1;
        break;
    }
  }
  if ( v30 == 149 )
  {
    result = FIELD_U32(a1, 268);
    if ( *(float *)(**(_DWORD **)(result + 28) + 20) != FIELD_F32(a1, 324) )
      return result;
    v18 = FIELD_U32(a1, 320);
    FIELD_U32(a1, 308) = 2;
    FIELD_U32(a1, 312) = v18;
    v16 = **(_DWORD **)(result + 28);
    LODWORD(v25.x) = &sead__SafeStringBase__vtable;
    LODWORD(v25.y) = "cobCourse";
    v19 = LoadResource(ResourceMgrRelated_instance, &v25);
    ShuAnim_play((_DWORD *)v16, v19, (int)&dword_60C88E90[2 * FIELD_U32(a1, 308) + 3]);
    AnimationCtrl_setRepeat((ModelAnimation *)(v16 + 4), dword_60AF7A3C[FIELD_U32(a1, 308)]);
    FIELD_U32(v16, 24) = v18;
    goto LABEL_25;
  }
  if ( v30 != 310 )
  {
    if ( v30 != 173 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    result = FIELD_U32(a1, 268);
    if ( *(float *)(**(_DWORD **)(result + 28) + 20) != FIELD_F32(a1, 324) )
      return result;
    FIELD_U32(a1, 308) = 0;
    FIELD_U32(a1, 312) = 0;
    v16 = **(_DWORD **)(result + 28);
    LODWORD(v25.x) = &sead__SafeStringBase__vtable;
    LODWORD(v25.y) = "cobCourse";
    v17 = LoadResource(ResourceMgrRelated_instance, &v25);
    ShuAnim_play((_DWORD *)v16, v17, (int)&dword_60C88E90[2 * FIELD_U32(a1, 308) + 3]);
    AnimationCtrl_setRepeat((ModelAnimation *)(v16 + 4), dword_60AF7A3C[FIELD_U32(a1, 308)]);
    FIELD_U32(v16, 24) = 0;
    FIELD_U32(v16, 20) = 0;
    FIELD_U32(v16, 28) |= 2u;
LABEL_25:
    FIELD_U32(a1, 292) = v16;
    sub_6017A3E0(a1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  result = FIELD_U32(a1, 276);
  v20 = **(_DWORD **)(result + 12);
  if ( (FIELD_U8(v20, 28) & 0x20) != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  if ( FIELD_F32(v20, 20) == 30.0 )
  {
    v21 = *(_DWORD *)result;
    v22 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v21 + 84);
    LODWORD(v25.x) = &sead__SafeStringBase__vtable;
    LODWORD(v25.y) = "model";
    v23 = v22(v21, &v25);
    memset(&v29, 0, sizeof(v29));
    (*(void (__fastcall **)(_DWORD, int, Vec3 *))(***(_DWORD ***)(a1 + 276) + 108))(**(_DWORD **)(a1 + 276), v23, &v25);
    v29.x = v26;
    v29.y = v27;
    v29.z = v28;
    v24[0] = 1065353216;
    v24[1] = 1065353216;
    v24[2] = 1065353216;
    return EffectData_create(1132, &v29, 0, (int)v24);
  }
  return result;
}
