/* SE_VOC_YS_YOSHI_ref_2
 * address: 0x607D6D30   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_YS_YOSHI_ref_2(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r1

  v6 = 0;
  if ( a2 && !FIELD_U32(a2, 9952) && !sub_6075EDF8(a2) )
  {
    sub_607CBCA4(a1, FIELD_U8(a2, 84));
    *(_DWORD *)(FIELD_U32(a1, 11368) + 40) = sub_6075EDD4(a2);
    FIELD_U32(a1, 11360) = FIELD_U32(a2, 8);
    FIELD_U32(a1, 1216) |= 0x100000u;
    v7 = FIELD_U32(a2, 80);
    FIELD_U32(a1, 80) = v7;
    if ( a3 )
    {
      FIELD_U32(a1, 160) = sub_60773F3C(a1, v7);
    }
    else
    {
      sub_607734E8((unsigned __int8 *)a1, (int)"SE_VOC_YS_YOSHI", 0, 0);
      AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a2, 84), 8, 0, 0);
    }
    sub_6079EA38((_DWORD *)a2);
    SE_VOC_YS_YOSHI_ref_2_helper(a2, a1);
    Player_changeState(a1, (StateBase *)&dword_60CC5674, 0);
    return 1;
  }
  return v6;
}
