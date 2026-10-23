/* ef_fire_cannon_ref_2
 * address: 0x6059C584   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ef_fire_cannon_ref_2(int a1)
{
  _BYTE *v2; // r7
  int v3; // r0
  bool v4; // zf
  StateMgr *v5; // r5
  StateBase *v6; // r0
  int v7; // r6
  int *v8; // r1
  StateBase *CurrentState; // r0
  int v10; // r6
  float v11; // s0
  float *v12; // r0
  float *v13; // r1
  float v14; // s4
  float v15; // s6
  int v16; // r6
  int (__fastcall *v17)(int, _DWORD *); // r2
  void (__fastcall *v18)(int, int, float *); // r7
  int v19; // r0
  float v20; // s16
  int isOffScreen; // r0
  int v23; // [sp+4h] [bp-5Ch] BYREF
  _DWORD v24[2]; // [sp+8h] [bp-58h] BYREF
  float v25[20]; // [sp+10h] [bp-50h] BYREF

  v2 = (_BYTE *)(a1 + 7128);
  if ( Actor__getProfileId((Actor *)a1) == 224 && *v2 )
  {
    ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
      &v23,
      0,
      a1 + 6440,
      FIELD_U8(a1, 86));
    v3 = v23;
    v4 = v23 == 1;
    FIELD_U32(a1, 7132) = v23;
    if ( v4 )
    {
      v5 = (StateMgr *)(a1 + 6084);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v10 == (*(int (**)(void))(dword_60CAFB0C + 8))() )
        goto LABEL_10;
      v8 = &dword_60CAFB0C;
      goto LABEL_9;
    }
    if ( !v3 )
    {
      v5 = (StateMgr *)(a1 + 6084);
      v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
      if ( v7 == (*(int (**)(void))(dword_60CAFB0C + 8))() )
      {
        v8 = &dword_60CAFAC4;
LABEL_9:
        StateMgr__changeState(v5, (StateBase *)v8);
      }
    }
  }
LABEL_10:
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( *v2 )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
    v11 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
    FIELD_F32(a1, 116) = v11;
    CollisionMgr_process((_BYTE *)(a1 + 648), v11);
    v12 = (float *)(a1 + 112);
    v13 = (float *)(a1 + 108);
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
  }
  else
  {
    v12 = (float *)(a1 + 112);
    v13 = (float *)(a1 + 108);
  }
  v14 = *v12;
  v15 = FIELD_F32(a1, 6468);
  FIELD_F32(a1, 6440) = *v13 + FIELD_F32(a1, 6464);
  FIELD_F32(a1, 6444) = v14 + v15;
  FIELD_U32(a1, 6448) = 1158250496;
  FIELD_U8(a1, 6420) &= ~2u;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1) == 1 )
    FIELD_U8(a1, 6420) |= 2u;
  ShapedCollider_execute((ColliderBase *)(a1 + 6472));
  sub_6059C8D8(a1);
  v16 = **(_DWORD **)(a1 + 6120);
  v17 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v16 + 84);
  v18 = *(void (__fastcall **)(int, int, float *))(*(_DWORD *)v16 + 108);
  v24[0] = &sead__SafeStringBase__vtable;
  v24[1] = "ef_fire_cannon";
  v19 = v17(v16, v24);
  v18(v16, v19, v25);
  FIELD_U32(a1, 6412) = FIELD_U32(a1, 6460);
  if ( !FIELD_U8(dword_60CC6D8C, 17)
    || (v20 = FIELD_F32(a1, 512),
        FIELD_F32(a1, 512) = v20 * 0.5,
        isOffScreen = StageActor__isOffScreen((StageActor *)a1),
        FIELD_F32(a1, 512) = v20,
        !isOffScreen) )
  {
    sub_605C6F0C((LightSource *)(a1 + 6124), v25, (float *)(a1 + 6424));
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
