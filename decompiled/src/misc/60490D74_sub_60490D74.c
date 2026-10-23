/* sub_60490D74
 * address: 0x60490D74   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60490D74(int a1)
{
  float v2; // s0
  StateMethodExecuter *result; // r0
  float v4; // s0
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r2
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r1
  unsigned int v15; // r2

  v2 = FIELD_F32(a1, 100) + FIELD_F32(a1, 108);
  if ( v2 >= 0.0 )
  {
    if ( v2 > 1.0 )
      v2 = 1.0;
  }
  else
  {
    v2 = 0.0;
  }
  FIELD_F32(a1, 100) = v2;
  result = (StateMethodExecuter *)((int (__fastcall *)(_DWORD))loc_60505788)(FIELD_U32(a1, 68));
  v4 = FIELD_F32(a1, 100);
  if ( v4 == 0.0 )
  {
    v5 = FIELD_U32(a1, 60);
    if ( v5 >= 2 )
    {
      if ( v5 == 2 )
      {
        v6 = FIELD_U32(a1, 48) - 1;
        if ( v6 <= 0 )
          v6 = 0;
        FIELD_U32(a1, 48) = v6;
        v7 = FIELD_U32(a1, 44) - 1;
        if ( v7 <= 0 )
          v7 = 0;
        FIELD_U32(a1, 44) = v7;
        FIELD_U32(a1, 52) = v6;
        sub_605052C0(FIELD_U32(a1, 68));
        sub_60505324(FIELD_U32(a1, 68), 0, FIELD_U32(a1, 44));
        sub_60505324(FIELD_U32(a1, 68), 1, FIELD_U32(a1, 44) + 1);
        sub_60505324(FIELD_U32(a1, 68), 2, FIELD_U32(a1, 44) + 2);
        sub_60505324(FIELD_U32(a1, 68), 3, FIELD_U32(a1, 44) + 3);
        sub_60505324(FIELD_U32(a1, 68), 4, FIELD_U32(a1, 44) + 4);
        sub_60505324(FIELD_U32(a1, 68), 5, FIELD_U32(a1, 44) + 5);
      }
      else
      {
        FIELD_U32(a1, 60) = 1;
        v9 = FIELD_U32(a1, 76);
        FIELD_U32(a1, 48) = v9;
        v10 = FIELD_U32(a1, 60);
        if ( v10 >= 4 )
          v10 = 0;
        FIELD_U32(a1, 44) = v9 - dword_60B02B30[v10];
        FIELD_U32(a1, 52) = v9;
      }
    }
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C9F780);
  }
  if ( v4 != 1.0 )
    return result;
  v8 = FIELD_U32(a1, 60);
  if ( v8 == 2 )
  {
    v11 = FIELD_U32(a1, 48) + 3;
LABEL_27:
    FIELD_U32(a1, 52) = v11;
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C9F780);
  }
  if ( v8 == 1 )
  {
    v12 = FIELD_U32(a1, 48);
    FIELD_U32(a1, 48) = v12 + 1;
    ++FIELD_U32(a1, 44);
    FIELD_U32(a1, 52) = v12 + 4;
    sub_6050520C(FIELD_U32(a1, 68));
    sub_60505324(FIELD_U32(a1, 68), 0, FIELD_U32(a1, 44));
    sub_60505324(FIELD_U32(a1, 68), 1, FIELD_U32(a1, 44) + 1);
    sub_60505324(FIELD_U32(a1, 68), 2, FIELD_U32(a1, 44) + 2);
    sub_60505324(FIELD_U32(a1, 68), 3, FIELD_U32(a1, 44) + 3);
    sub_60505324(FIELD_U32(a1, 68), 4, FIELD_U32(a1, 44) + 4);
    sub_60505324(FIELD_U32(a1, 68), 5, FIELD_U32(a1, 44) + 5);
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C9F780);
  }
  if ( v8 )
  {
    v13 = FIELD_U32(a1, 76);
    v14 = v13 + 1;
    v11 = v13 + 4;
    FIELD_U32(a1, 48) = v14;
    v15 = FIELD_U32(a1, 60);
    if ( v15 >= 4 )
      v15 = 0;
    FIELD_U32(a1, 44) = v14 - dword_60B02B30[v15];
    goto LABEL_27;
  }
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 48) = 1;
  FIELD_U32(a1, 52) = 4;
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C9F780);
}
