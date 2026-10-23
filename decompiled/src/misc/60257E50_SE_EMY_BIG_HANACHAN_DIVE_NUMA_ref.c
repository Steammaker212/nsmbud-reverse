/* SE_EMY_BIG_HANACHAN_DIVE_NUMA_ref
 * address: 0x60257E50   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BIG_HANACHAN_DIVE_NUMA_ref(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r0
  float *v5; // r5
  int v6; // r1
  int result; // r0
  float v8; // s2
  int v9; // r0
  int (__fastcall *v10)(int, Vec3 *); // r2
  int v11; // r0
  float x; // r0
  float y; // r2
  float v14; // r1
  int v15; // r5
  Vec3 v16; // [sp+4h] [bp-64h] BYREF
  float v17; // [sp+10h] [bp-58h]
  float v18; // [sp+30h] [bp-38h]
  Vec3 position; // [sp+34h] [bp-34h] BYREF
  _DWORD v20[2]; // [sp+40h] [bp-28h] BYREF
  int v21; // [sp+48h] [bp-20h] BYREF
  float v22; // [sp+4Ch] [bp-1Ch] BYREF
  Vec2 out; // [sp+50h] [bp-18h] BYREF

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 44));
  if ( ((unsigned int)&dword_60C7B364 & ~(1613069964 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v4 = 0;
  if ( v2 )
  {
    v4 = (**v2)(v2, &StageActor_RTTI);
    if ( v4 )
      v4 = (int)v2;
  }
  v5 = (float *)(a1 + 8);
  FIELD_U8(a1, 73) = FIELD_U8(a1, 72);
  v22 = 0.0;
  ((void (__fastcall *)(int *, float *, int, _DWORD))checkLiquidCollisions)(
    &v21,
    &v22,
    a1 + 8,
    FIELD_U8(v4, 86));
  v6 = v21;
  result = v21;
  if ( v21 )
    result = 1;
  FIELD_U8(a1, 72) = result;
  if ( result == FIELD_U8(a1, 73) )
  {
    if ( !v6 )
      return result;
    if ( !FIELD_U8(dword_60CC6D8C, 17)
      || (v8 = FIELD_F32(a1, 12), v22 >= (float)(v8 + -4.0)) && v22 <= (float)(v8 + 96.0) )
    {
      v9 = **(_DWORD **)(a1 + 4);
      v10 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v9 + 84);
      LODWORD(v16.x) = &sead__SafeStringBase__vtable;
      LODWORD(v16.y) = "skl_root";
      v11 = v10(v9, &v16);
      (*(void (__fastcall **)(_DWORD, int, Vec3 *))(***(_DWORD ***)(a1 + 4) + 108))(**(_DWORD **)(a1 + 4), v11, &v16);
      position.x = v17;
      position.z = v18;
      position.y = v22;
      EffectWrapper_update((EffectWrapper *)(a1 + 76), 862, &position, 0, 0);
      if ( (FIELD_U8(dword_60C99DD4, 1052) & 0x1F) == 0 )
      {
        out.x = position.x;
        out.y = position.y;
        TileMgr_splashRelated(TileMgr_instance, &out, 26);
      }
    }
    goto LABEL_22;
  }
  x = *v5;
  y = v22;
  v16.x = *v5;
  v16.y = v22;
  v16.z = 6500.0;
  if ( v6 )
  {
    EffectData_create(861, &v16, 0, 0);
    x = v16.x;
    y = v16.y;
  }
  *(float *)v20 = x;
  *(float *)&v20[1] = y;
  TileMgr_splashRelated(TileMgr_instance, v20, 21);
  result = FIELD_U8(a1, 180);
  if ( !FIELD_U8(a1, 180) )
  {
    result = FIELD_U8(a1, 72);
    if ( FIELD_U8(a1, 72) )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      if ( result == 1 )
      {
        v14 = FIELD_F32(a1, 12);
        v15 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 8);
        position.y = v14;
        mapPositionToScreen(&out, &position);
        BasicSoundActor1_playSound(v15, "SE_EMY_BIG_HANACHAN_DIVE_NUMA", (int)&out, 0);
LABEL_22:
        FIELD_U8(a1, 180) = 1;
        return 1;
      }
    }
  }
  return result;
}
