/* sub_607773A0
 * address: 0x607773A0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607773A0(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2

  result = a1[13];
  if ( !result )
  {
    result = Player_getActorSlotChecked(PlayerMgr_instance, a1[84]);
    if ( result )
    {
      result = sub_6076DE14((_BYTE *)result);
      if ( result == 1 )
      {
        v3 = a1[117];
        v4 = FIELD_U32(dword_60C995D0, 32);
        if ( (!v4 || v4 != v3) && !FIELD_U32(v3, 20) && !FIELD_U32(v3, 16) )
          sub_603E552C((sead_ListNode *)dword_60C995D0, a1[123]);
        a1[13] = 1;
        return 1;
      }
    }
  }
  return result;
}
