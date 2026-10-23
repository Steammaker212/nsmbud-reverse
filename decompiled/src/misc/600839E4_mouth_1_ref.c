/* mouth_1_ref
 * address: 0x600839E4   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mouth_1_ref(int a1)
{
  float v2; // r1
  int v3; // r0
  float v4; // s0
  float v5; // s2
  int v6; // r0
  _DWORD *v7; // r0
  int **v8; // r6
  _DWORD *v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r0
  int v12; // r0
  int v13; // r0
  int (__fastcall *v14)(int, Vec3 *); // r2
  int v15; // r0
  _BYTE *v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  int result; // r0
  Vec3 v20; // [sp+4h] [bp-6Ch] BYREF
  float v21; // [sp+10h] [bp-60h]
  float v22; // [sp+20h] [bp-50h]
  float v23; // [sp+30h] [bp-40h]
  ActorBuildInfo v24; // [sp+34h] [bp-3Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    if ( FIELD_F32(a1, 124) < FIELD_F32(a1, 100) )
    {
      v2 = FIELD_F32(a1, 112);
      v20.x = FIELD_F32(a1, 108);
      v20.y = v2;
      v20.z = 4500.0;
      EffectData_create(1080, &v20, 0, 0);
    }
    FIELD_U32(a1, 124) = 0;
  }
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1);
  sub_600CEB84(a1, v3);
  if ( FIELD_U32(a1, 7244) )
  {
    v4 = *(float *)(FIELD_U32(a1, 7244) + 108);
    v5 = FIELD_F32(a1, 108);
    v6 = 1;
    if ( v5 < v4 )
    {
      v6 = 0;
      if ( v5 > v4 )
        v6 = 3;
    }
  }
  else
  {
    v6 = 3;
  }
  FIELD_U32(a1, 80) = v6;
  v8 = (int **)(a1 + 7100);
  v7 = *(_DWORD **)(a1 + 7100);
  v9 = (_DWORD *)v7[3];
  v10 = v7[2];
  v11 = v7[17];
  if ( v10 > v11 )
    v9 += v11;
  if ( sub_60418548(*v9 + 4) )
  {
    memset(&v24.settings2, 0, 40);
    v12 = FIELD_U8(a1, 7248);
    if ( FIELD_U8(a1, 7248) )
      v12 = 0x10000000;
    v24.settings1 = v12;
    v24.profile = Profile__get(0x2D7u);
    v24.parentId = FIELD_U32(a1, 8);
    v24.field_20 = 0;
    v13 = **v8;
    v14 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v13 + 84);
    LODWORD(v20.x) = &sead__SafeStringBase__vtable;
    LODWORD(v20.y) = "mouth_1";
    v15 = v14(v13, &v20);
    (*(void (__fastcall **)(int, int, Vec3 *))(*(_DWORD *)**v8 + 108))(**v8, v15, &v20);
    v24.position.x = v21;
    v24.position.y = v22;
    v24.position.z = v23 + -32.0;
    v16 = ActorMgr__create((void *)ActorMgr__instance, &v24, 0);
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v16 + 216))(v16);
  }
  v17 = (*v8)[3];
  v18 = (*v8)[17];
  if ( (*v8)[2] > v18 )
    v17 += 4 * v18;
  result = *(unsigned __int8 *)(*(_DWORD *)v17 + 28);
  if ( (result & 0x20) != 0 )
  {
    FIELD_U16(a1, 6276) = 180;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81ACC);
  }
  return result;
}
