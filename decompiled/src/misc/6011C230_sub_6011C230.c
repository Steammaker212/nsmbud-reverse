/* sub_6011C230
 * address: 0x6011C230   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011C230(int a1)
{
  _BYTE *v2; // r6
  StateBase *CurrentState; // r0
  int v4; // r5
  int (__fastcall ***v5)(_DWORD, int *); // r5
  char v6; // r12
  int result; // r0
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r5
  float v11; // s4
  float v12; // s0
  float v13; // s2
  unsigned int v14; // r0
  int v15; // r0

  v2 = (_BYTE *)(a1 + 9318);
  if ( !FIELD_U8(a1, 9318) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*(int (**)(void))(dword_60C86C24 + 8))() )
      goto LABEL_8;
  }
  v5 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                ActorMgr__instance,
                                                818,
                                                FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C86B48 & ~(1611776700 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
  {
    dword_60C86B44 = (int)&off_60BD0CA4;
    _cxa_guard_release(&dword_60C86B48);
  }
  if ( !v5 || !(**v5)(v5, &dword_60C86B44) )
  {
    v8 = FIELD_U32(a1, 9344);
    if ( v8 )
    {
      result = v8 - 1;
      FIELD_U32(a1, 9344) = result;
    }
    else
    {
      result = 0;
    }
    v10 = (_DWORD *)(a1 + 9256);
    v9 = FIELD_U32(a1, 9256);
    if ( v9 )
    {
      *v10 = v9 - 1;
      if ( v9 <= 1 && !result )
      {
        result = -1;
        *v10 = -1;
        if ( FIELD_F32(a1, 112) >= -670.0 )
        {
          v11 = FIELD_F32(a1, 108);
          v12 = FIELD_F32(a1, 6948);
          v13 = FIELD_F32(a1, 6944);
          if ( v11 >= v12 )
          {
            if ( v13 >= v11 )
            {
              v14 = FIELD_U32(a1, 80);
              if ( v14 >= 2 )
                v14 = 0;
              FIELD_U32(a1, 6820) = *(_DWORD *)(a1 + 4 * v14 + 6944);
              FIELD_U32(a1, 6824) = FIELD_U32(a1, 6800);
            }
            else
            {
              FIELD_F32(a1, 6820) = v12;
            }
          }
          else
          {
            FIELD_F32(a1, 6820) = v13;
          }
          FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
          v15 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
          if ( v15 )
            (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v15 + 1036))(v15, FIELD_U32(a1, 80));
          *v2 = 0;
          *v10 = 0;
          FIELD_U8(a1, 9324) = 1;
          return 9324;
        }
      }
    }
    else
    {
      *v10 = 30;
      return 30;
    }
  }
  else
  {
LABEL_8:
    FIELD_U32(a1, 9256) = 0;
    return 9256;
  }
  return result;
}
