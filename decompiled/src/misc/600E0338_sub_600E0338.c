/* sub_600E0338
 * address: 0x600E0338   size: 1100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E0338(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  float v7; // s0
  int result; // r0
  int *v9; // r6
  int v10; // r1
  int *v11; // r7
  int *v12; // r1
  unsigned int v13; // r0
  int v14; // r8
  int *v15; // r1
  unsigned int v16; // r0
  int v17; // r5
  _DWORD *v18; // r1
  unsigned int v19; // r0
  int v20; // r1
  unsigned int v21; // r0
  int (__fastcall ***v22)(_DWORD, int *); // r7
  char v23; // r12
  int v24; // r5
  int v25; // r1
  unsigned int v26; // r0
  float v27; // r1
  int v28; // r1
  unsigned int v29; // r0
  int (__fastcall ***v30)(_DWORD, int *); // r5
  char v31; // r12
  int v32; // r4
  int v33; // r1
  unsigned int v34; // r0
  int v35; // r1
  unsigned int v36; // r0
  Vec3 v37; // [sp+4h] [bp-2Ch] BYREF

  v3 = (_DWORD *)(a1 + 7096);
  v2 = *(_DWORD **)(a1 + 7096);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
    FIELD_U32(a1, 124) = 1086324736;
  j_ModelWrapper_updateAnims(*v3);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v7 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1196))(a1, v7) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1308))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1336))(a1);
  result = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
  {
    FIELD_U32(a1, 124) = 0;
    result = 1;
  }
  v9 = (int *)(a1 + 7092);
  switch ( FIELD_U32(a1, 7092) )
  {
    case 1:
      result = 7176;
      v11 = (int *)(a1 + 7176);
      v10 = FIELD_U32(a1, 7176);
      if ( (v10 & 1) == 0 )
      {
        v12 = *(int **)(*v3 + 12);
        v13 = *(_DWORD *)(*v3 + 68);
        if ( *(_DWORD *)(*v3 + 8) > v13 )
          v12 += v13;
        v14 = *v12;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1188))(a1);
        result = sub_60418548(v14 + 4);
        v10 = *v11;
        if ( result == 1 )
        {
          v10 |= 1u;
          *v11 = v10;
        }
      }
      if ( (v10 & 2) != 0 )
      {
        v15 = *(int **)(*v3 + 12);
        v16 = *(_DWORD *)(*v3 + 68);
        if ( *(_DWORD *)(*v3 + 8) > v16 )
          v15 += v16;
        v17 = *v15;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1192))(a1);
        result = sub_60418548(v17 + 4);
        v10 = *v11;
        if ( result == 1 )
        {
          v10 &= ~2u;
          *v11 = v10;
        }
      }
      if ( v10 == 1 )
      {
        result = 2;
        goto LABEL_47;
      }
      break;
    case 2:
      v18 = *(_DWORD **)(*v3 + 12);
      v19 = *(_DWORD *)(*v3 + 68);
      if ( *(_DWORD *)(*v3 + 8) > v19 )
        v18 += v19;
      result = sub_60418548(*v18 + 4);
      if ( result == 1 )
      {
        v20 = *(_DWORD *)(*v3 + 12);
        v21 = *(_DWORD *)(*v3 + 68);
        if ( *(_DWORD *)(*v3 + 8) > v21 )
          v20 += 4 * v21;
        *(_DWORD *)(*(_DWORD *)v20 + 24) = 0;
        v22 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                     ActorMgr__instance + 27168,
                                                     FIELD_U32(a1, 8120));
        if ( ((unsigned int)&dword_60C84B4C & ~(1611531632 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
        {
          dword_60C84B48 = (int)&off_60BCCA60;
          _cxa_guard_release(&dword_60C84B4C);
        }
        v24 = (int)(v22 + 1525);
        if ( !(**v22)(v22, &dword_60C84B48) )
          v24 = 6100;
        v25 = *(_DWORD *)(*(_DWORD *)v24 + 12);
        v26 = *(_DWORD *)(*(_DWORD *)v24 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v24 + 8) > v26 )
          v25 += 4 * v26;
        *(_DWORD *)(*(_DWORD *)v25 + 24) = 0;
        sub_600B3340((_DWORD *)a1);
        result = 3;
        goto LABEL_47;
      }
      break;
    case 3:
      if ( result == 1 )
      {
        v27 = FIELD_F32(a1, 112);
        v37.x = FIELD_F32(a1, 108);
        v37.y = v27;
        v37.z = 4500.0;
        EffectData_create(248, &v37, 0, 0);
        v28 = *(_DWORD *)(*v3 + 12);
        v29 = *(_DWORD *)(*v3 + 68);
        if ( *(_DWORD *)(*v3 + 8) > v29 )
          v28 += 4 * v29;
        *(_DWORD *)(*(_DWORD *)v28 + 24) = 1065353216;
        v30 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                     ActorMgr__instance + 27168,
                                                     FIELD_U32(a1, 8120));
        if ( ((unsigned int)&dword_60C84B4C & ~(1611531920 << v31) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
        {
          dword_60C84B48 = (int)&off_60BCCA60;
          _cxa_guard_release(&dword_60C84B4C);
        }
        v32 = (int)(v30 + 1525);
        if ( !(**v30)(v30, &dword_60C84B48) )
          v32 = 6100;
        v33 = *(_DWORD *)(*(_DWORD *)v32 + 12);
        v34 = *(_DWORD *)(*(_DWORD *)v32 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v32 + 8) > v34 )
          v33 += 4 * v34;
        *(_DWORD *)(*(_DWORD *)v33 + 24) = 1065353216;
        result = 4;
LABEL_47:
        *v9 = result;
      }
      break;
    case 4:
      v35 = *(_DWORD *)(*v3 + 12);
      v36 = *(_DWORD *)(*v3 + 68);
      if ( *(_DWORD *)(*v3 + 8) > v36 )
        v35 += 4 * v36;
      result = *(unsigned __int8 *)(*(_DWORD *)v35 + 28);
      if ( (result & 0x20) != 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1088))(a1);
        result = (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C84A24);
      }
      break;
    default:
      return result;
  }
  return result;
}
