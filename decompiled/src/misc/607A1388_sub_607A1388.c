/* sub_607A1388
 * address: 0x607A1388   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A1388(int a1, int a2, int a3, int a4, int a5)
{
  StateBase *CurrentState; // r0
  int v9; // r6
  int v10; // r7
  int v11; // r0

  if ( !a4 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v10 = 0;
    if ( v9 == (*(int (**)(void))(dword_60CC4E6C + 8))() )
      return v10;
  }
  sub_6079E724((_DWORD *)a1);
  if ( (unsigned int)(a2 - 4) < 2 )
  {
    v11 = 4;
LABEL_9:
    if ( a2 == 7 )
    {
      v11 |= 0x300u;
    }
    else if ( a2 == 5 )
    {
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 12.0;
      FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)(flt_60B0A898[FIELD_U32(a1, 80)] * -4.0);
    }
    goto LABEL_14;
  }
  if ( a2 != 2 )
  {
    v11 = 0;
    if ( a2 == 8 )
    {
      v10 = 0;
      v11 = 6;
      if ( (FIELD_U8(a1, 6900) & 1) == 0 )
        return v10;
      goto LABEL_14;
    }
    goto LABEL_9;
  }
  v11 = 2;
LABEL_14:
  if ( a5 )
    v11 |= 0x100u;
  Player_changeState(a1, (StateBase *)&dword_60CC4E6C, v11 + a3);
  v10 = 1;
  if ( a2 != 2 && !FIELD_U32(a1, 12788) )
  {
    sub_607601D4((int *)a1, 2);
    FIELD_U32(a1, 12788) = 5;
  }
  return v10;
}
