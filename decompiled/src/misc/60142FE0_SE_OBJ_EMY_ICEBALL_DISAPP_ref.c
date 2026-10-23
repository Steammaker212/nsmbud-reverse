/* SE_OBJ_EMY_ICEBALL_DISAPP_ref
 * address: 0x60142FE0   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_EMY_ICEBALL_DISAPP_ref(int a1, _DWORD *a2)
{
  int v4; // r5
  int v5; // r6
  int result; // r0
  float v7; // r1
  int v8; // r6
  Vec2 v9; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v4 = FIELD_U32(a1, 64);
  v5 = a2[16];
  result = FIELD_U32(v4, 6736);
  if ( result != FIELD_U32(v5, 8) )
  {
    result = FIELD_U8(v5, 533);
    switch ( FIELD_U8(v5, 533) )
    {
      case 0:
        if ( Actor__getProfileId((Actor *)v5) == 476 )
          goto LABEL_14;
        result = Actor__getProfileId((Actor *)v5);
        if ( result == 478 )
          goto LABEL_14;
        return result;
      case 1:
        goto LABEL_7;
      case 2:
        result = a2[35];
        if ( result == 15 )
          return result;
LABEL_7:
        if ( sub_6075EDF8(v5) == 1 )
        {
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1204))(v5);
          if ( result != 1 )
            return result;
        }
        result = a2[34];
        if ( result == 15 )
          return result;
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1168))(v5, v4, 11);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 72))(v4);
        StateMgr__changeState((StateMgr *)(v4 + 6084), (StateBase *)&dword_60C87DEC);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1204))(v5) == 1 )
        {
          sub_60142A48((float *)v4);
          v7 = FIELD_F32(v4, 112);
          v8 = Global_BasicSoundActor2;
          position.x = FIELD_F32(v4, 108);
          position.y = v7;
          mapPositionToScreen(&v9, &position);
          BasicSoundActor2_play(v8, "SE_OBJ_EMY_ICEBALL_DISAPP", &v9.x, 0);
        }
LABEL_15:
        result = FIELD_U8(a1, 110) | 2;
        FIELD_U8(a1, 110) = result;
        break;
      case 3:
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 72))(v4);
        StateMgr__changeState((StateMgr *)(v4 + 6084), (StateBase *)&dword_60C87DEC);
        goto LABEL_15;
      case 4:
        result = a2[35];
        if ( result != 3 )
          return result;
LABEL_14:
        SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v4);
        goto LABEL_15;
      default:
        return result;
    }
  }
  return result;
}
