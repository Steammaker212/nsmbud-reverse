/* SE_OBJ_FIREBALL_DISAPP_ref_3111B8
 * address: 0x603111B8   size: 920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_OBJ_FIREBALL_DISAPP_ref_3111B8(unsigned int result, ActiveCollider *a2)
{
  StageActor *owner; // r7
  ActiveCollider *v3; // r4
  Enemy *v5; // r5
  bool v6; // zf
  StateBase *CurrentState; // r0
  int v8; // r6
  int category; // r0
  int v10; // r4
  StageActor *v11; // r0
  float x; // r1
  float y; // r0
  bool v14; // zf
  char v15; // r12
  int v16; // r9
  StateBase *v17; // r0
  int v18; // r6
  Enemy *parent; // r7
  char v20; // r12
  StateBase *v21; // r0
  int v22; // r6
  Vec2 v23; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v3 = (ActiveCollider *)result;
  v5 = *(Enemy **)(result + 64);
  v6 = v5 == 0;
  if ( v5 )
  {
    owner = FIELD_U32(a2, 0x40);
    v6 = owner == 0;
  }
  if ( !v6 )
  {
    CurrentState = StateMgr__getCurrentState(&FIELD_U32(v5, 0x17C4));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 != (*((int (**)(void))KaniboTama__StateID_Unk2._.vtable + 2))() )
    {
      if ( Actor__getProfileId(&FIELD_U32(owner, 0x0)) != 520 )
      {
        category = FIELD_U32(a2, 0x8C);
        if ( (FIELD_U32(v3, 0x94) & (1 << category)) != 0 )
        {
          result = category - 1;
          switch ( result )
          {
            case 0u:
              v10 = Global_BasicSoundActor2;
              v11 = FIELD_U32(a2, 0x40);
              x = FIELD_F32(v11, 0x6C);
              y = FIELD_F32(v11, 0x70);
              position.x = x;
              position.y = y;
              mapPositionToScreen(&v23, &position);
              result = BasicSoundActor2_play(v10, "SE_OBJ_FIREBALL_DISAPP", &v23.x, 0);
              break;
            case 1u:
              result = SE_OBJ_PNGN_ICEBALL_DISAPP_ref_2A2DA0((int)a2);
              break;
            case 2u:
            case 8u:
            case 0xCu:
            case 0x10u:
              goto LABEL_25;
            case 6u:
              (*(void (__fastcall **)(Enemy *))(FIELD_U32(v5, 0x0) + 368))(v5);
              (*(void (__fastcall **)(Enemy *, Vec3 *))(FIELD_U32(v5, 0x0) + 416))(v5, &FIELD_U32(owner, 0x6C));
              goto LABEL_25;
            case 0xEu:
              return result;
            default:
              goto LABEL_9;
          }
          return result;
        }
LABEL_9:
        result = FIELD_U32(a2, 0x88);
        if ( result > 0xF )
          return result;
        v14 = ((1 << result) & 0x8005) == 0;
        if ( ((1 << result) & 0x8005) != 0 )
        {
          result = (unsigned __int8)FIELD_U8(owner, 0x54);
          v14 = result == 255;
        }
        if ( v14 )
          return result;
        result = sub_602A25C0((int)v3, FIELD_F32(v5, 0x70));
        if ( result )
          return result;
        result = Enemy__processCollision(v5, v3, a2, 0);
        v16 = result;
        if ( result )
        {
          if ( result == 2 )
            return result;
          v17 = StateMgr__getCurrentState(&FIELD_U32(v5, 0x17C4));
          v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
          if ( v18 == (*((int (**)(void))KaniboTama__StateID_Unk3._.vtable + 2))() )
          {
            parent = (Enemy *)FIELD_U32(v5, 0x38);
            if ( parent )
            {
              Actor__removeChild(FIELD_U32(v5, 0x38), &FIELD_U32(v5, 0x0));
              if ( ((unsigned int)&dword_60C93250 & ~(1613829044 << v20) & 1) == 0
                && _cxa_guard_acquire(&dword_60C93250) )
              {
                dword_60C9324C = (int)&off_60BC04AC;
                _cxa_guard_release(&dword_60C93250);
              }
              if ( (*(int (__fastcall **)(Enemy *, int *))FIELD_U32(parent, 0x0))(parent, &dword_60C9324C) == 1 )
                sub_603101A4(parent, (int)a2, v16);
            }
          }
        }
        else
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1613829256 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
          {
            result = sub_6075EDF8(owner);
            if ( result )
              return result;
          }
          result = FIELD_U32(a2, 0x88);
          if ( result == 15 )
            return result;
          v21 = StateMgr__getCurrentState(&FIELD_U32(v5, 0x17C4));
          v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
          result = (*((int (**)(void))KaniboTama__StateID_Unk1._.vtable + 2))();
          if ( v22 != result )
            return result;
          (*(void (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(v5, 0x0) + 200))(v5, v3, a2);
        }
      }
LABEL_25:
      KaniboTama__sub_60310F74((int)v5, 0);
    }
    result = (unsigned __int8)FIELD_U8(v3, 0x6E) | 2;
    FIELD_U8(v3, 0x6E) = result;
  }
  return result;
}
