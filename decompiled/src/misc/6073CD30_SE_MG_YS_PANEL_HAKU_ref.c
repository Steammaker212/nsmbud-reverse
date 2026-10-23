/* SE_MG_YS_PANEL_HAKU_ref
 * address: 0x6073CD30   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_MG_YS_PANEL_HAKU_ref(int a1)
{
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  float v5; // r1
  int v6; // r6
  int result; // r0
  int *v8; // r6
  StateBase *CurrentState; // r0
  int v10; // r4
  int *v11; // r0
  StateBase *v12; // r0
  Vec2 v13; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 8084);
  if ( !v2 )
    goto LABEL_11;
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( ((unsigned int)&dword_60CBE274 & ~(1618201976 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE274) )
  {
    dword_60CBE270 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBE274);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CBE270) )
  {
    if ( FIELD_U16(a1, 8038) == 1 )
    {
      v5 = FIELD_F32(a1, 112);
      v6 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&v13, &position);
      BasicSoundActor2_play(v6, "SE_MG_YS_PANEL_HAKU", &v13.x, 0);
    }
    v8 = (int *)(a1 + 8008);
    result = FIELD_U32(a1, 8008);
    switch ( result )
    {
      case 0:
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6424));
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        v11 = &dword_60CB1AA4;
        goto LABEL_15;
      case 1:
        FIELD_U8(v3, 6368) = FIELD_U8(a1, 8056);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60CBE2C4);
        goto LABEL_16;
      case 2:
        v12 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
        v11 = &dword_60CBE284;
LABEL_15:
        result = (*(int (__fastcall **)(int *))(*v11 + 8))(v11);
        if ( v10 == result )
        {
LABEL_16:
          result = *v8 + 1;
          *v8 = result;
        }
        break;
      case 3:
        goto LABEL_11;
      default:
        return result;
    }
  }
  else
  {
LABEL_11:
    result = 8064;
    FIELD_U8(a1, 8064) = 1;
  }
  return result;
}
