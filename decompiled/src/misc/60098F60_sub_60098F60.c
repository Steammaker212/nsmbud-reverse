/* sub_60098F60
 * address: 0x60098F60   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60098F60(int a1)
{
  int **v2; // r4
  int v3; // r9
  int v4; // r7
  void (__fastcall *v5)(int, int, ActorBuildInfo *); // r6
  int v6; // r0
  int v7; // r7
  char v8; // r12
  float result; // s0
  int v10; // r0
  int *v11; // r1
  unsigned int v12; // r0
  int v13; // r4
  char U32; // r0
  int v15; // r4
  float v16; // s16
  float v17; // r6
  float v18; // r7
  unsigned int v19; // r1
  int settings2; // r1
  int parentId; // r2
  int v22; // r0
  ActorBuildInfo v23; // [sp+8h] [bp-70h] BYREF
  Vec3 v24; // [sp+3Ch] [bp-3Ch] BYREF

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1);
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1312))(a1);
  v4 = **v2;
  v5 = *(void (__fastcall **)(int, int, ActorBuildInfo *))(*(_DWORD *)v4 + 108);
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1120))(a1);
  v5(v4, v6, &v23);
  v7 = 0;
  LODWORD(v24.x) = v23.profile;
  LODWORD(v24.y) = v23.field_1C;
  v24.z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 8328), 1020, &v24, 0, 0);
  v10 = FIELD_U32(a1, 7092);
  if ( v10 == 2 )
  {
    v19 = FIELD_U32(a1, 7136);
    if ( v19 )
      v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v19);
    if ( ((unsigned int)dword_60C81F18 & ~(1611239752 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
    {
      dword_60C81F14 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C81F18);
    }
    if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C81F14) == 1 )
    {
      sub_6009DED4(a1, &v23);
      settings2 = v23.settings2;
      parentId = v23.parentId;
      FIELD_U32(v7, 108) = v23.settings1;
      FIELD_U32(v7, 112) = settings2;
      FIELD_U32(v7, 116) = parentId;
    }
    v22 = FIELD_U32(a1, 7128);
    FIELD_U32(a1, 7128) = v22 - 1;
    if ( v3 && v22 <= 1 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C82550);
  }
  else if ( v10 == 1 )
  {
    v11 = (int *)(*v2)[3];
    v12 = (*v2)[17];
    if ( (*v2)[2] > v12 )
      v11 += v12;
    v13 = *v11;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1200))(a1);
    if ( sub_60418548(v13 + 4) )
    {
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v15 = FIELD_U32(a1, 7124);
      v16 = FIELD_F32(a1, 116);
      v17 = FIELD_F32(a1, 112);
      v18 = FIELD_F32(a1, 108);
      if ( (U32 & 1) != 0 )
      {
        memset(&v23.settings2, 0, 40);
        v23.settings1 = v15 | 0x1100100;
        v23.parentId = FIELD_U32(a1, 8);
        v23.profile = Profile__get(0x2C1u);
        v23.position.x = v18;
        v23.position.y = v17;
        v23.position.z = v16 + 600.0;
        v23.field_1C = FIELD_U32(a1, 80);
      }
      else
      {
        memset(&v23.settings2, 0, 40);
        v23.settings1 = v15 | 0x1000200;
        v23.parentId = FIELD_U32(a1, 8);
        v23.profile = Profile__get(0x2C1u);
        v23.position.x = v18;
        v23.position.y = v17;
        v23.position.z = v16 + 600.0;
      }
      FIELD_U32(a1, 7136) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v23, 0) + 2);
      LODWORD(result) = (int)(float)((float)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1676))(a1)
                                   / FIELD_F32(a1, 7760));
      FIELD_F32(a1, 7128) = result;
      FIELD_U32(a1, 7092) = 2;
    }
  }
  return result;
}
