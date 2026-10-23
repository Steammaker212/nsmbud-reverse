/* sub_6045C674
 * address: 0x6045C674   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045C674(int a1)
{
  int v2; // r0
  int v3; // r1

  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6320) = v2 & 0xF;
  FIELD_U8(a1, 6321) = (unsigned __int8)v2 >> 4;
  FIELD_U8(a1, 6322) = BYTE1(v2) & 0xF;
  FIELD_U8(a1, 6323) = (v2 & 0x1000) != 0;
  ((void (__fastcall *)(int))loc_6045C720)(a1);
  ((void (__fastcall *)(int))loc_6045C9A0)(a1);
  if ( !FIELD_U8(a1, 6323) )
  {
    PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6328);
    v3 = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6348) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6352) = v3;
  }
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C9CFE4);
  return 1;
}
