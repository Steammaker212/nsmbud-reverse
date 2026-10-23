/* SE_BOSS_IGGY_DOKAN_OUT_ref_2
 * address: 0x6009A59C   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_IGGY_DOKAN_OUT_ref_2(int a1)
{
  float v2; // s0
  int v3; // r0
  float v4; // s2
  float v5; // s4
  float v6; // s4
  float v7; // r0
  float v8; // s0
  int result; // r0
  int (__fastcall *v10)(int, void *); // r2
  StateBase *CurrentState; // r0
  int v12; // r5
  int v13; // r0
  void *v14; // r1
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 108);
  v3 = dword_60CC6484;
  v4 = FIELD_F32(dword_60CC6484, 112);
  if ( v2 >= (float)((float)(v4 + 24.0) + 4.0)
    && v2 <= (float)((float)(FIELD_F32(dword_60CC6484, 120) + -24.0) + -4.0) )
  {
    v5 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v5 + 40.0;
    position.z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 8224), 1013, &position, 0, 0);
    v2 = FIELD_F32(a1, 108);
    v3 = dword_60CC6484;
    v4 = FIELD_F32(dword_60CC6484, 112);
  }
  v6 = FIELD_F32(v3, 120);
  if ( v2 >= v4 && FIELD_F32(a1, 584) < v4 || v2 <= v6 && FIELD_F32(a1, 584) > v6 )
  {
    v7 = FIELD_F32(a1, 112);
    position.x = v2;
    position.y = v7;
    mapPositionToScreen(&out, &position);
    sub_60813570(a1 + 6332, "SE_BOSS_IGGY_DOKAN_OUT", &out, 0);
    v2 = FIELD_F32(a1, 108);
    v3 = dword_60CC6484;
    v4 = FIELD_F32(dword_60CC6484, 112);
  }
  if ( v2 >= (float)((float)(v4 + 24.0) + 0.0) && v2 <= (float)(FIELD_F32(v3, 120) + -24.0) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v12 != (*(int (**)(void))(dword_60C832FC + 8))() )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  v8 = FIELD_F32(a1, 108);
  result = dword_60CC6484;
  if ( v8 > (float)(FIELD_F32(dword_60CC6484, 112) + 56.0) && FIELD_F32(a1, 120) > 0.0
    || v8 < (float)(FIELD_F32(dword_60CC6484, 120) + -56.0) && FIELD_F32(a1, 120) < 0.0 )
  {
    if ( !FIELD_U8(a1, 8136) )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82678);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) == 1 )
    {
      v10 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
    }
    else
    {
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
      v10 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      if ( v13 != 1 )
      {
        v14 = &unk_60C82678;
        return v10(a1, v14);
      }
    }
    v14 = &unk_60C82698;
    return v10(a1, v14);
  }
  return result;
}
