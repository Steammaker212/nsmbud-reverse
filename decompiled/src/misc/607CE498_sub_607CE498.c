/* sub_607CE498
 * address: 0x607CE498   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CE498(int a1, int a2, int a3)
{
  float v7; // s0
  float v8; // r0
  int *v9; // r1
  StateBase *CurrentState; // r0
  int v11; // r5
  float v12; // [sp+0h] [bp-20h] BYREF
  float v13[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( !FIELD_U8(dword_60CC6D8C, 17) || sub_607D6C28(a1) )
    return sub_60764270((char *)a1, a2);
  if ( a3 != 1 )
  {
    v9 = &dword_60CC5694;
    goto LABEL_11;
  }
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_F32(a1, 116);
  v13[0] = FIELD_F32(a1, 108);
  v13[1] = v7 + 4.0;
  v13[2] = v8;
  if ( sub_60155C38(a1 + 1328, v13, &v12, 0, 32.0) == 1 && v12 < (float)(FIELD_F32(a1, 112) + 8.0) )
  {
    v9 = &dword_60CC5694;
LABEL_11:
    Player_changeState(a1, (StateBase *)v9, 0);
    return 1;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v11 == (*(int (**)(void))(dword_60CC5654 + 8))() )
  {
    v9 = &dword_60CC5614;
    goto LABEL_11;
  }
  return 0;
}
