/* sub_6046DCAC
 * address: 0x6046DCAC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046DCAC(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r0
  int v5; // r1

  v2 = FIELD_U32(a1, 20) & 7;
  result = 2;
  if ( v2 != 7 )
  {
    FIELD_U32(a1, 6140) = v2;
    Item_loadKinokoSwitch_46DD80(a1);
    FIELD_U32(a1, 144) = 0;
    FIELD_U32(a1, 148) = 0;
    FIELD_U32(a1, 152) = 0;
    v4 = FIELD_U32(a1, 108);
    v5 = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6292) = v4;
    FIELD_U32(a1, 6296) = v5;
    FIELD_U32(a1, 6268) = v4;
    FIELD_U32(a1, 6272) = v5;
    FIELD_U32(a1, 6276) = 2;
    FIELD_U32(a1, 6280) = 0;
    PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6248);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C9D6A0);
    sub_6046DF74(a1);
    return 1;
  }
  return result;
}
