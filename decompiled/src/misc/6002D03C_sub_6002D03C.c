/* sub_6002D03C
 * address: 0x6002D03C   size: 1144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002D03C(int a1)
{
  int v2; // r0
  int v3; // r0
  __int16 v4; // r1
  char v5; // r1
  char v6; // r1
  int v7; // r5
  char v8; // r12
  int v9; // r5
  char v10; // r12
  int v11; // r0
  _DWORD **v12; // r6
  unsigned int v13; // r1
  _DWORD **v14; // r0
  int v15; // r0
  int *v16; // r0
  int v17; // r0
  int v18; // r0
  int *v19; // r0
  int v20; // r0
  int *v21; // r0
  int v22; // r0
  int v23; // r0
  void (__fastcall ***v24)(_DWORD, int, _DWORD *, _DWORD *, int *); // r0
  void (__fastcall *v25)(_DWORD, int, _DWORD *, _DWORD *, int *); // r5
  void (__fastcall ***v26)(_DWORD, int, _DWORD *, _DWORD *, int *); // r0
  void (__fastcall *v27)(_DWORD, int, _DWORD *, _DWORD *, int *); // r5
  void (__fastcall ***v28)(_DWORD, int, _DWORD *, _DWORD *, int *); // r0
  void (__fastcall *v29)(_DWORD, int, _DWORD *, _DWORD *, int *); // r5
  void (__fastcall ***v30)(_DWORD, int, _DWORD *, _DWORD *, int *); // r0
  void (__fastcall *v31)(_DWORD, int, _DWORD *, _DWORD *, int *); // r6
  signed int v32; // r0
  int result; // r0
  _DWORD v34[2]; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v35[9]; // [sp+Ch] [bp-24h] BYREF

  v2 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( v2 )
  {
    FIELD_U8(v2, 6101) = 1;
    v3 = FIELD_U8(v2, 6121);
    v4 = 536;
    if ( v3 )
      v4 = 240;
    FIELD_U16(a1, 6276) = v4;
    v5 = 80;
    if ( v3 )
      v5 = 120;
    FIELD_U8(a1, 7431) = v5;
    v6 = 10;
    if ( v3 )
      v6 = 50;
    FIELD_U8(a1, 7432) = v6;
  }
  v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7320));
  if ( ((unsigned int)&dword_60C7FBF4 & ~(1610797280 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBF4) )
  {
    dword_60C7FBF0 = (int)&off_60BC1FE8;
    _cxa_guard_release(&dword_60C7FBF4);
  }
  if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7FBF0) == 1 )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)v7 + 192))(v7, &unk_60C808C0);
  v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7324));
  if ( ((unsigned int)&dword_60C7FC04 & ~(1610797456 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FC04) )
  {
    dword_60C7FC00 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7FC04);
  }
  if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7FC00) == 1 )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)v9 + 192))(v9, &unk_60C7FCB4);
  PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6644);
  v12 = (_DWORD **)(a1 + 7096);
  v11 = FIELD_U32(a1, 7096);
  v13 = FIELD_U32(v11, 24);
  v14 = *(_DWORD ***)(v11 + 28);
  if ( v13 > 1 )
    ++v14;
  ShuAnim_play(*v14, FIELD_U32(a1, 7100), (int)&dword_60C7F7C8);
  v15 = (*v12)[7];
  if ( (*v12)[6] > 1u )
    v15 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), 0);
  v16 = (int *)(*v12)[7];
  if ( (*v12)[6] > 1u )
    ++v16;
  v17 = *v16;
  FIELD_U32(v17, 20) = 0;
  FIELD_U32(v17, 28) |= 2u;
  v18 = (*v12)[7];
  if ( (*v12)[6] > 1u )
    v18 += 4;
  *(_DWORD *)(*(_DWORD *)v18 + 24) = 0;
  v19 = (int *)(*v12)[7];
  if ( (*v12)[6] > 2u )
    v19 += 2;
  sub_60446088(*v19, FIELD_U32(a1, 7100), (int)&dword_60C7F7C8);
  v20 = (*v12)[7];
  if ( (*v12)[6] > 2u )
    v20 += 8;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v20 + 4), 0);
  v21 = (int *)(*v12)[7];
  if ( (*v12)[6] > 2u )
    v21 += 2;
  v22 = *v21;
  FIELD_U32(v22, 20) = 0;
  FIELD_U32(v22, 28) |= 2u;
  v23 = (*v12)[7];
  if ( (*v12)[6] > 2u )
    v23 += 8;
  *(_DWORD *)(*(_DWORD *)v23 + 24) = 0;
  v34[0] = -1146890486;
  v34[1] = -1146890486;
  v24 = (void (__fastcall ***)(_DWORD, int, _DWORD *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v12 + 132))(
                                                                         **v12,
                                                                         0);
  v25 = **v24;
  v35[0] = 0;
  v25(v24, 3, v34, v35, &dword_60B3B944);
  v26 = (void (__fastcall ***)(_DWORD, int, _DWORD *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v12 + 132))(
                                                                         **v12,
                                                                         0);
  v27 = **v26;
  v35[0] = 0;
  v27(v26, 4, v34, v35, &dword_60B3B944);
  v28 = (void (__fastcall ***)(_DWORD, int, _DWORD *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)**v12 + 132))(
                                                                         **v12,
                                                                         1);
  v29 = **v28;
  v35[0] = 0;
  v29(v28, 4, v34, v35, &dword_60B3B944);
  v30 = (void (__fastcall ***)(_DWORD, int, _DWORD *, _DWORD *, int *))(*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)**v12 + 132))(
                                                                         **v12,
                                                                         1);
  v31 = **v30;
  v35[0] = 0;
  v31(v30, 5, v34, v35, &dword_60B3B944);
  v32 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v32;
  result = (int)(float)((float)(2147500000.0 * 35.0) / 180.0) * byte_60AFE3F4[v32];
  FIELD_U32(a1, 160) = result;
  return result;
}
