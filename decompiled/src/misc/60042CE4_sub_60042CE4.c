/* sub_60042CE4
 * address: 0x60042CE4   size: 1112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60042CE4(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  int owner; // r11
  StageActor *v8; // r4
  int v9; // r6
  int ProfileId; // r0
  char v11; // r12
  int v12; // r5
  _BYTE *v13; // r5
  _BOOL4 v14; // r0
  StateBase *v15; // r0
  int v16; // r4
  _DWORD *v17; // r1
  int v18; // r4
  int *v19; // r2
  unsigned int v20; // r3
  unsigned int v21; // r1
  int v22; // r1
  _DWORD *v23; // r1
  unsigned int v24; // r0
  StateMgr *v25; // r6
  StateBase *CurrentState; // r0
  int v27; // r7
  StateBase *v28; // r0
  int v29; // r7
  StateBase *v30; // r0
  int v31; // r6
  float v32; // s16
  float v33; // s18
  float v34; // s20
  float v35; // s22
  StateBase *v36; // r0
  int v37; // r4
  Vec3 v39; // [sp+0h] [bp-58h] BYREF

  owner = (int)FIELD_U32(a3, 0x40);
  v8 = FIELD_U32(a2, 0x40);
  if ( ((unsigned int)&dword_60C80058 & ~(1610886424 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
  {
    dword_60C80054 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C80058);
  }
  if ( v8 )
  {
    v9 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v8, 0x0))(v8, &dword_60C80054);
    if ( v9 )
      v9 = (int)v8;
  }
  else
  {
    v9 = 0;
  }
  ProfileId = Actor__getProfileId((Actor *)owner);
  switch ( ProfileId )
  {
    case 392:
      if ( ((unsigned int)&dword_60C7B39C & ~(1610886580 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
      {
        dword_60C7B398 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C7B39C);
      }
      if ( owner )
      {
        v12 = (**(int (__fastcall ***)(int, int *))owner)(owner, &dword_60C7B398);
        if ( v12 )
          v12 = owner;
      }
      else
      {
        v12 = 0;
      }
      v25 = (StateMgr *)(v9 + 6084);
      CurrentState = StateMgr__getCurrentState(v25);
      v27 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v27 == (*(int (**)(void))(dword_60C80248 + 8))()
        || (v28 = StateMgr__getCurrentState(v25),
            v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28),
            v29 == (*(int (**)(void))(dword_60C801A8 + 8))())
        || (v30 = StateMgr__getCurrentState(v25),
            v31 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v30, 0x0) + 2))(v30),
            v31 == (*(int (**)(void))(dword_60C80188 + 8))()) )
      {
        sub_602EE7B8(v12, FIELD_F32(v8, 0x6C) > FIELD_F32(owner, 108), -1);
        sub_602EE940(v12);
      }
      return Enemy__vf100(a1, a2, a3);
    case 372:
      v13 = (_BYTE *)(v9 + 11691);
      v14 = 0;
      if ( !FIELD_U8(v9, 11691) )
      {
        v15 = StateMgr__getCurrentState((StateMgr *)(v9 + 6084));
        v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
        if ( v16 != (*(int (**)(void))(dword_60C801A8 + 8))() )
          goto LABEL_43;
        v14 = *v13 == 0;
      }
      v18 = v9 + 6304;
      v17 = *(_DWORD **)(v9 + 6304);
      v19 = (int *)v17[3];
      v20 = v17[2];
      v21 = v17[17];
      if ( v20 > v21 )
        v19 += v21;
      v22 = *v19;
      if ( v14 )
      {
        if ( !sub_60418548(v22 + 4) )
        {
          v23 = *(_DWORD **)(*(_DWORD *)v18 + 12);
          v24 = *(_DWORD *)(*(_DWORD *)v18 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v18 + 8) > v24 )
            v23 += v24;
          if ( !sub_60418548(*v23 + 4) )
            goto LABEL_43;
        }
        goto LABEL_42;
      }
      if ( (FIELD_U8(v22, 28) & 0x10) != 0 )
      {
LABEL_42:
        SE_BOSS_JR_BLOCK_ref(owner);
        v32 = FIELD_F32(owner, 112);
        v33 = FIELD_F32(owner, 108);
        v34 = FIELD_F32(owner, 572);
        v35 = FIELD_F32(owner, 576);
        sub_60634B08(owner);
        v39.x = v33 + v34;
        v39.y = (float)(v32 + v35) + 16.0;
        v39.z = 4500.0;
        EffectData_create(1074, &v39, 0, 0);
        FIELD_U8(a2, 0x6E) |= 2u;
      }
LABEL_43:
      if ( !*v13 )
      {
        v36 = StateMgr__getCurrentState((StateMgr *)(v9 + 6084));
        v37 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v36, 0x0) + 2))(v36);
        if ( v37 != (*(int (**)(void))(dword_60C801A8 + 8))() )
          SE_BOSS_JR_ref_2(a3, a2);
      }
      return Enemy__vf100(a1, a2, a3);
    case 476:
      if ( FIELD_U8(v9, 11693) )
      {
        if ( FIELD_F32(owner, 124) < 0.0 )
          FIELD_U32(owner, 124) = 1082130432;
      }
      else
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)owner + 240))(owner);
        sub_601362A0(owner);
      }
      break;
    case 474:
      SE_OBJ_PNGN_ICEBALL_DISAPP_ref(owner);
      break;
  }
  return Enemy__vf100(a1, a2, a3);
}
