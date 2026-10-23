/* SE_OBJ_PNGN_ICEBALL_DISAPP_ref_143990
 * address: 0x60143990   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_PNGN_ICEBALL_DISAPP_ref_143990(int a1, _DWORD *a2)
{
  char v2; // r12
  int v5; // r6
  int v6; // r5
  char v7; // r12
  bool v8; // zf
  float v9; // r1
  int v10; // r6
  Vec2 v11; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v5 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60C87FA4 & ~(1611938228 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C87FA4) )
  {
    dword_60C87FA0 = (int)&off_60BC7C30;
    _cxa_guard_release(&dword_60C87FA4);
  }
  if ( v5 )
  {
    v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C87FA0);
    if ( v6 )
      v6 = v5;
    v8 = v6 == 0;
    if ( v6 )
    {
      v5 = a2[16];
      v8 = v5 == 0;
    }
    if ( !v8 && FIELD_U32(v6, 6740) != FIELD_U32(v5, 8) )
    {
      switch ( FIELD_U8(v5, 533) )
      {
        case 0:
          if ( Actor__getProfileId((Actor *)v5) == 476 || Actor__getProfileId((Actor *)v5) == 478 )
            goto LABEL_33;
          break;
        case 1:
          if ( ((unsigned int)&dword_60C7B37C & ~(1611938492 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1
            && (sub_6075EDF8(v5) != 1 || (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1204))(v5) == 1)
            && a2[34] != 15 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 72))(v6);
            StateMgr__changeState((StateMgr *)(v6 + 6084), (StateBase *)&dword_60C87DEC);
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1204))(v5) != 1 )
              goto LABEL_36;
            goto LABEL_30;
          }
          break;
        case 2:
          if ( ((unsigned int)&dword_60C7B37C & ~(1611938780 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 && a2[35] != 15 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 72))(v6);
            StateMgr__changeState((StateMgr *)(v6 + 6084), (StateBase *)&dword_60C87DEC);
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1204))(v5) == 1 )
            {
LABEL_30:
              sub_60142A48((float *)v6);
              v9 = FIELD_F32(v6, 112);
              v10 = Global_BasicSoundActor2;
              position.x = FIELD_F32(v6, 108);
              position.y = v9;
              mapPositionToScreen(&v11, &position);
              BasicSoundActor2_play(v10, "SE_OBJ_PNGN_ICEBALL_DISAPP", &v11.x, 0);
            }
            else
            {
LABEL_36:
              (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1168))(v5, v6, 11);
            }
            goto LABEL_34;
          }
          break;
        case 3:
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 72))(v6);
          StateMgr__changeState((StateMgr *)(v6 + 6084), (StateBase *)&dword_60C87DEC);
          goto LABEL_34;
        case 4:
          if ( a2[35] == 3 )
          {
LABEL_33:
            SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v6);
LABEL_34:
            FIELD_U8(a1, 110) |= 2u;
          }
          break;
        default:
          return;
      }
    }
  }
}
