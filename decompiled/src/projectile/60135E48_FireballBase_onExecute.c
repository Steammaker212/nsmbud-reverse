/* FireballBase_onExecute
 * address: 0x60135E48   size: 796   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall FireballBase_onExecute(FireballBase *a1)
{
  StateMgr *p_manager; // r6
  int v3; // r5
  float v4; // s0
  StateBase *CurrentState; // r0
  int v6; // r6
  char *v7; // r5
  int v8; // r0
  int v10; // r8
  float *v11; // r6
  int v12; // r0
  int vtable; // r0
  bool v14; // zf
  int v15; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v16[4]; // [sp+8h] [bp-28h] BYREF
  int v17; // [sp+Ch] [bp-24h]
  int v18; // [sp+10h] [bp-20h]
  int v19; // [sp+14h] [bp-1Ch]

  p_manager = &FIELD_U32(a1, 0x0).states.manager;
  StateMgr__execute(&FIELD_U32(a1, 0x0).states.manager);
  (*(void (__fastcall **)(FireballBase *))(FIELD_U32(a1, 0x0)._._._.vtable + 264))(a1);
  v3 = FIELD_U32(a1, 0x1864);
  if ( v3 < 1 )
    v4 = 1.0;
  else
    v4 = (float)v3 / (float)(*(int (__fastcall **)(FireballBase *))(FIELD_U32(a1, 0x0)._._._.vtable + 292))(a1);
  *(float *)&FIELD_U32(a1, 0x17D4).field_4 = v4 * *(float *)&FIELD_U32(a1, 0x17FC);
  FIELD_U32(a1, 0x17D4).position.x = FIELD_U32(a1, 0x0)._._.position.x;
  FIELD_U32(a1, 0x17D4).position.y = FIELD_U32(a1, 0x0)._._.position.y;
  FIELD_U32(a1, 0x17D4).position.z = FIELD_U32(a1, 0x0)._._.position.z;
  LightMask__update((LightMask *)&FIELD_U32(a1, 0x17D4));
  if ( FIELD_U32(a1, 0x180C) != 2 )
  {
    CurrentState = StateMgr__getCurrentState(p_manager);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 != (*((int (**)(void))stru_60C877FC._._.vtable + 2))() )
    {
      (*(void (__fastcall **)(FireballBase *))(FIELD_U32(a1, 0x0)._._._.vtable + 268))(a1);
      v10 = FIELD_U32(a1, 0x1848);
      v11 = (float *)&FIELD_U32(a1, 0x184C);
      ((void (__fastcall *)(int *, int *, _BYTE *, Vec3 *, _DWORD))physics_21893E8)(
        &v15,
        &FIELD_U32(a1, 0x184C),
        v16,
        &FIELD_U32(a1, 0x0)._._.position,
        (unsigned __int8)FIELD_U32(a1, 0x0)._._.field_56);
      v12 = v15;
      FIELD_U32(a1, 0x1848) = v15;
      switch ( v12 )
      {
        case 0:
          if ( v10 == 2 && LOBYTE(FIELD_U32(a1, 0x1A58)) )
          {
            vtable = FIELD_U32(a1, 0x0)._._._.vtable;
            goto LABEL_26;
          }
          break;
        case 1:
          if ( !v10 )
            (*(void (__fastcall **)(FireballBase *, float))(FIELD_U32(a1, 0x0)._._._.vtable + 272))(a1, *v11);
          break;
        case 2:
          if ( v16[0] )
          {
            LOBYTE(FIELD_U32(a1, 0x1A58)) = v16[0];
            FIELD_U32(a1, 0x1A5C) = v17;
            FIELD_U32(a1, 0x1A60) = v18;
            FIELD_U32(a1, 0x1A64) = v19;
            if ( !v10 )
            {
              vtable = FIELD_U32(a1, 0x0)._._._.vtable;
LABEL_26:
              (*(void (__fastcall **)(FireballBase *))(vtable + 276))(a1);
            }
          }
          break;
        case 3:
          if ( !v10 )
          {
            (*(void (__fastcall **)(FireballBase *, float))(FIELD_U32(a1, 0x0)._._._.vtable + 300))(a1, *v11);
            goto LABEL_31;
          }
          break;
        case 4:
          if ( !v10 )
          {
            (*(void (__fastcall **)(FireballBase *, float))(FIELD_U32(a1, 0x0)._._._.vtable + 280))(a1, *v11);
            goto LABEL_31;
          }
          break;
        default:
          v14 = v10 == 0;
          if ( !v10 )
            v14 = v12 == 5;
          if ( v14 )
          {
            (*(void (__fastcall **)(FireballBase *, float))(FIELD_U32(a1, 0x0)._._._.vtable + 284))(a1, *v11);
LABEL_31:
            (*(void (__fastcall **)(FireballBase *))(FIELD_U32(a1, 0x0)._._._.vtable + 296))(a1);
            FIELD_U8(a1, 0x1860) = 1;
          }
          break;
      }
    }
  }
  v7 = &FIELD_U8(a1, 0x1860);
  if ( !FIELD_U8(a1, 0x1860) )
  {
    StageActor__cullCheck(&FIELD_U32(a1, 0x0)._._, 10);
    if ( v8 == 1 )
    {
      (*(void (__fastcall **)(FireballBase *))(FIELD_U32(a1, 0x0)._._._.vtable + 296))(a1);
      *v7 = 1;
    }
    if ( (float)(FIELD_U32(a1, 0x0)._._.position.x + FIELD_U32(a1, 0x0)._._.field_1F4) < FIELD_F32(AreaTask_intance, 1812) )
    {
      (*(void (__fastcall **)(FireballBase *))(FIELD_U32(a1, 0x0)._._._.vtable + 296))(a1);
      *v7 = 1;
    }
  }
  return 1;
}
