/* sub_600868C4
 * address: 0x600868C4   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600868C4(int a1)
{
  _BYTE *v2; // r6
  int v3; // r5
  float v4; // r9
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r7
  int v9; // r0
  int result; // r0
  float v11; // s0
  int v12; // r5
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  Vec3 v16[3]; // [sp+4h] [bp-2Ch] BYREF

  v2 = (_BYTE *)(a1 + 7700);
  if ( FIELD_U8(a1, 7700) )
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7612));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < FIELD_F32(a1, 100) )
  {
    v4 = FIELD_F32(a1, 112);
    v16[0].x = FIELD_F32(a1, 108);
    v16[0].y = v4;
    v16[0].z = 4500.0;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 == (*(int (**)(void))(dword_60C81D8C + 8))()
      || (v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
          v8 == (*(int (**)(void))(dword_60C81D6C + 8))()) )
    {
      v16[0].y = v4 + 2.0;
    }
    EffectData_create(1082, v16, 0, 0);
    sub_60813430(a1 + 6332, "SE_BOSS_JR_SHELL_LAND", 0);
  }
  ((void (__fastcall *)(int, float, float, float))loc_602A25F8)(a1, 0.1875, 0.5, 0.5);
  v9 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v3 + 4 * ((v9 + 18) >> 5) + 2224) & (1 << ((v9 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v3 + 4 * ((v9 + 22) >> 5) + 2224) & (1 << ((v9 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v3 + 4 * ((v9 + 28) >> 5) + 2224) & (1 << ((v9 + 28) & 0x1F))) == 0 )
  {
    FIELD_U32(a1, 80) = v9 ^ 1;
    FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1060))(a1);
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
  }
  result = SE_VOC_JR_PRE_RECORVER_ref(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81DAC);
  v11 = FIELD_F32(a1, 120);
  if ( v11 <= 0.00000011921 && v11 >= -0.00000011921 )
  {
    v12 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
    v13 = (*(int (**)(void))(dword_60C81D4C + 8))();
    v14 = v12 == v13;
    if ( v12 == v13 )
      v14 = *v2 == 0;
    if ( v14 )
    {
      *v2 = 0;
      v15 = FIELD_U32(a1, 7612);
      LODWORD(v16[0].x) = &sead__SafeStringBase__vtable;
      LODWORD(v16[0].y) = "lkp_shell_model_sign";
      sub_6040F4B8(v15, v16, 0);
      FIELD_U32(a1, 7696) = (int)*(float *)(**(_DWORD **)(FIELD_U32(a1, 7612) + 12) + 8) + 1;
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81D6C);
  }
  return result;
}
