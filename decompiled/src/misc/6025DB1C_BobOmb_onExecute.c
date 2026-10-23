/* BobOmb_onExecute
 * address: 0x6025DB1C   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BobOmb_onExecute(Enemy *a1)
{
  StateMgr *p_manager; // r5
  int *v3; // r6
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r7
  void (__fastcall *v7)(Enemy *, __int64 *); // r2
  StateBase *v8; // r0
  int v9; // r5
  void (__fastcall *v10)(Enemy *, __int64 *); // r2
  int v11; // r5
  int (__fastcall *v12)(int, float *); // r2
  void (__fastcall *v13)(int, int, __int64 *); // r7
  int v14; // r0
  int v16; // [sp+4h] [bp-54h] BYREF
  float v17[2]; // [sp+8h] [bp-50h] BYREF
  __int64 v18; // [sp+10h] [bp-48h] BYREF
  int v19; // [sp+18h] [bp-40h]

  HIBYTE(FIELD_U32(a1, 0x0)._.field_17A8) = *(_DWORD *)&FIELD_U32(a1, 0x0)._.collisionMgr[0x8B0] & 1;
  p_manager = &FIELD_U32(a1, 0x0).states.manager;
  StateMgr__execute(&FIELD_U32(a1, 0x0).states.manager);
  v3 = &a1[1]._._._._.field_40;
  if ( (a1[1]._._._._.field_40 & 0xA) == 0 && !sub_602A588C((int)a1) && !sub_600025B8((int)a1) )
  {
    if ( sub_60003AE0(&FIELD_U32(a1, 0x0)._._) == 1 )
    {
      CurrentState = StateMgr__getCurrentState(p_manager);
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v5 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
        (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &stru_60C8E1CC);
    }
    else
    {
      ((void (__fastcall *)(int *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
        &v16,
        v17,
        &FIELD_U32(a1, 0x0)._._.position,
        (unsigned __int8)FIELD_U32(a1, 0x0)._._.field_56);
      v6 = v16;
      if ( v16 )
      {
        sub_600038DC(a1);
        if ( (unsigned int)(v6 - 3) > 1 )
        {
          if ( v6 == 5 && (*(int (__fastcall **)(Enemy *, float))(FIELD_U32(a1, 0x0)._._._.vtable + 184))(a1, v17[0]) == 1 )
          {
            v10 = *(void (__fastcall **)(Enemy *, __int64 *))(FIELD_U32(a1, 0x0)._._._.vtable + 120);
            *(float *)&v18 = FIELD_U32(a1, 0x0)._._.position.x;
            *((float *)&v18 + 1) = v17[0];
            v19 = 1170939904;
            v10(a1, &v18);
            (*(void (__fastcall **)(Enemy *, _DWORD))(FIELD_U32(a1, 0x0)._._._.vtable + 164))(a1, 0);
          }
        }
        else
        {
          v7 = *(void (__fastcall **)(Enemy *, __int64 *))(FIELD_U32(a1, 0x0)._._._.vtable + 112);
          *(float *)&v18 = FIELD_U32(a1, 0x0)._._.position.x;
          *((float *)&v18 + 1) = v17[0];
          v19 = 1170939904;
          v7(a1, &v18);
          v8 = StateMgr__getCurrentState(p_manager);
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
          if ( v9 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
            (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &stru_60C8E1CC);
        }
      }
      else
      {
        FIELD_U32(a1, 0x0)._.field_17A6 = 0;
      }
    }
  }
  if ( (*(_BYTE *)v3 & 1) == 0 )
  {
    j_ModelWrapper_updateAnims(a1[1]._._._._.field_34);
    sub_604218E0((_DWORD *)a1[1]._._._._.field_34);
  }
  SE_EMY_BH_HIBANA_ref(a1);
  ActorScaler_execute((ActorScaler *)&a1[1]._._._.aCollider.field_DC);
  sub_602A33AC(a1);
  if ( (*(_WORD *)v3 & 0x20) != 0 )
  {
    if ( sub_60235E50((int)&a1[1]._._._.aCollider.info.field_10) == 1 )
      sub_602360C0((int)&a1[1]._._._.aCollider.info.field_10);
  }
  else if ( (*(_WORD *)v3 & 0xC) == 4 && !sub_602A588C((int)a1) )
  {
    v11 = *(_DWORD *)a1[1]._._._._.field_34;
    v12 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v11 + 84);
    v13 = *(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v11 + 108);
    LODWORD(v17[0]) = &sead__SafeStringBase__vtable;
    LODWORD(v17[1]) = "ef_bombhei";
    v14 = v12(v11, v17);
    v13(v11, v14, &v18);
    sub_602372C0((int)&a1[1]._._._.aCollider.info, 640, &v18, 0);
  }
  if ( BYTE1(a1[1]._._._.field_A8) && (FIELD_U32(a1, 0x0)._.collisionMgr[2224] & 1) != 0 )
    BYTE1(a1[1]._._._.field_A8) = 0;
  StageActor__cullCheck(&FIELD_U32(a1, 0x0)._._, 0);
  sub_60003840((int)a1);
  return 1;
}
