/* jcb_sphere_st_ref
 * address: 0x6003C48C   size: 932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcb_sphere_st_ref(int a1)
{
  int *v2; // r7
  int result; // r0
  float v4; // s4
  float v5; // s0
  float v6; // s4
  float v7; // s2
  int v8; // r0
  unsigned int v9; // r1
  int *v10; // r0
  int v11; // r0
  float v12; // s4
  float v13; // s0
  float v14; // s4
  float v15; // s2
  _BOOL4 v16; // r8
  _BOOL4 v17; // r9
  float v18; // s0
  bool v19; // zf
  bool v20; // zf
  int v21; // r0
  unsigned int v22; // r1
  int v23; // r0
  int speed; // [sp+4h] [bp-54h] BYREF
  ActorBuildInfo target; // [sp+8h] [bp-50h] BYREF

  v2 = (int *)(a1 + 11492);
  result = FIELD_U32(a1, 11492) - 1;
  switch ( result )
  {
    case 0:
      CollisionActor__handleSpeed((CollisionActor *)a1);
      v4 = FIELD_F32(dword_60CC6484, 112);
      v5 = v4 + 64.0;
      v6 = (float)(v4 + FIELD_F32(dword_60CC6484, 104)) + -64.0;
      FIELD_F32(a1, 11588) = v5;
      FIELD_F32(a1, 11592) = v6;
      v7 = FIELD_F32(a1, 108);
      if ( v6 <= v7 || v5 >= v7 )
      {
        FIELD_U32(a1, 80) ^= 1u;
        FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
        FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
        FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
        FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
      }
      v8 = FIELD_U32(a1, 6304);
      v9 = FIELD_U32(v8, 8);
      v10 = *(int **)(v8 + 12);
      if ( v9 > 1 )
        ++v10;
      v11 = *v10;
      if ( (FIELD_U8(v11, 28) & 0x30) != 0 || FIELD_F32(v11, 20) == 0.0 )
        *v2 = 2;
      JUMPOUT(0x60040A94);
    case 1:
      StageActor__accelerateX((StageActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      v12 = FIELD_F32(dword_60CC6484, 112);
      v13 = v12 + 64.0;
      v14 = (float)(v12 + FIELD_F32(dword_60CC6484, 104)) + -64.0;
      FIELD_F32(a1, 11588) = v13;
      FIELD_F32(a1, 11592) = v14;
      v15 = FIELD_F32(a1, 108);
      if ( v14 <= v15 || v13 >= v15 )
      {
        FIELD_U32(a1, 80) ^= 1u;
        FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
        FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
        FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
        FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
      }
      target.settings1 = 0;
      speed = 0x1000000;
      v16 = moveValueTo((int *)(a1 + 156), &target.settings1, &speed);
      target.settings1 = 0;
      speed = 0x1000000;
      v17 = moveValueTo((int *)(a1 + 160), &target.settings1, &speed);
      target.settings1 = 0;
      speed = 0x1000000;
      result = moveValueTo((int *)(a1 + 164), &target.settings1, &speed);
      v18 = FIELD_F32(a1, 120);
      v19 = v18 == 0.0;
      if ( v18 == 0.0 )
        v19 = v16;
      if ( !v19 )
        return result;
      v20 = v17;
      if ( v17 )
      {
        result ^= 1u;
        v20 = result == 0;
      }
      if ( !v20 )
        return result;
      memset(&target, 0, sizeof(target));
      target.profile = Profile__get(0x334u);
      target.parentId = FIELD_U32(a1, 8);
      target.position = *(Vec3 *)(a1 + 11072);
      target.field_1C = FIELD_U32(a1, 160);
      target.field_20 = 0;
      ActorMgr__create((void *)ActorMgr__instance, &target, 0);
      FIELD_U16(a1, 6278) = 30;
      result = 3;
      break;
    case 2:
      result = FIELD_U16(a1, 6278);
      if ( FIELD_U16(a1, 6278) )
        return result;
      target.settings1 = (int)&sead__SafeStringBase__vtable;
      target.settings2 = (int)"jcb_sphere_st";
      sub_60047464(a1, 1, &target, 0, 0.0, 1.0);
      result = 4;
      break;
    case 3:
      v21 = FIELD_U32(a1, 6304);
      v22 = FIELD_U32(v21, 8);
      v23 = FIELD_U32(v21, 12);
      if ( v22 > 1 )
        v23 += 4;
      result = *(unsigned __int8 *)(*(_DWORD *)v23 + 28);
      if ( (result & 0x10) == 0 )
        return result;
      FIELD_U8(a1, 11680) = 1;
      FIELD_U16(a1, 6278) = 60;
      result = 5;
      break;
    case 4:
      result = FIELD_U16(a1, 6278);
      if ( !FIELD_U16(a1, 6278) )
        return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C801E8);
      return result;
    default:
      return result;
  }
  *v2 = result;
  return result;
}
