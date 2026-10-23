/* jcb_jab_ref
 * address: 0x6003B284   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcb_jab_ref(int a1)
{
  int v2; // r0
  float v3; // s4
  float v4; // s0
  float v5; // s4
  float v6; // s2
  StateBase *CurrentState; // r0
  int v8; // r5
  _BOOL4 v9; // r1
  int v11; // r1
  int v12; // r2
  unsigned int v13; // r3
  int v14; // r2
  float v15; // s4
  float v16; // s0
  float v17; // s4
  float v18; // s2
  StateBase *v19; // r0
  int v20; // r5
  _BOOL4 v21; // r1
  _DWORD v22[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 11492);
  if ( v2 != 2 )
  {
    if ( v2 == 1 )
    {
      StageActor__accelerateX((StageActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      v3 = FIELD_F32(dword_60CC6484, 112);
      v4 = v3 + 64.0;
      v5 = (float)(v3 + FIELD_F32(dword_60CC6484, 104)) + -64.0;
      FIELD_F32(a1, 11588) = v4;
      FIELD_F32(a1, 11592) = v5;
      v6 = FIELD_F32(a1, 108);
      if ( v5 <= v6 || v4 >= v6 )
      {
        FIELD_U32(a1, 80) ^= 1u;
        FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
        FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
        FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
        FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
        FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
      }
      CurrentState = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(a1, 11456) + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v8 != (*(int (**)(void))(dword_60C7FE5C + 8))() )
      {
        v9 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11452) + 724))(FIELD_U32(a1, 11452)) == 1;
        (*(void (__fastcall **)(int, _BOOL4))(*(_DWORD *)a1 + 780))(a1, v9);
        sub_60045DB4(a1, 2, 1, 1, 0.0, 1.0);
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C800E4);
      }
    }
    return ((int (__fastcall *)(int))loc_60040A94)(a1);
  }
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v11 = FIELD_U32(a1, 11500);
  if ( FIELD_U32(a1, 11496) > v11 )
  {
    v12 = FIELD_U32(a1, 6304);
    v13 = FIELD_U32(v12, 8);
    v14 = FIELD_U32(v12, 12);
    if ( v13 > 1 )
      v14 += 4;
    if ( (*(_BYTE *)(*(_DWORD *)v14 + 28) & 0x30) != 0 )
    {
      FIELD_U32(a1, 11500) = v11 + 1;
      v22[0] = &sead__SafeStringBase__vtable;
      v22[1] = "jcb_jab";
      ((void (__fastcall *)(int, int, _DWORD *, _DWORD, float, float))sub_60047464)(a1, 1, v22, 0, 0.0, 1.0);
    }
  }
  v15 = FIELD_F32(dword_60CC6484, 112);
  v16 = v15 + 64.0;
  v17 = (float)(v15 + FIELD_F32(dword_60CC6484, 104)) + -64.0;
  FIELD_F32(a1, 11588) = v16;
  FIELD_F32(a1, 11592) = v17;
  v18 = FIELD_F32(a1, 108);
  if ( v17 <= v18 || v16 >= v18 )
  {
    FIELD_U32(a1, 80) ^= 1u;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
    FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
  }
  v19 = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(a1, 11456) + 6084));
  v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
  if ( v20 == (*(int (**)(void))(dword_60C7FE5C + 8))() )
    return ((int (__fastcall *)(int))loc_60040A94)(a1);
  v21 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11452) + 724))(FIELD_U32(a1, 11452)) == 1;
  (*(void (__fastcall **)(int, _BOOL4))(*(_DWORD *)a1 + 780))(a1, v21);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80148);
}
