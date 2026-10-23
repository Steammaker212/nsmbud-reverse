/* sub_60777DB4
 * address: 0x60777DB4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777DB4(_DWORD *a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r2
  int v5; // r1

  v2 = FIELD_U32(dword_60C995D0, 32);
  result = 0;
  if ( (!v2 || v2 != a1[119]) && (!v2 || v2 != a1[120]) )
  {
    v4 = a1[117];
    if ( (!v2 || v2 != v4) && !FIELD_U32(v4, 20) && !FIELD_U32(v4, 16) )
    {
      if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
        v5 = a1[119];
      else
        v5 = a1[120];
      sub_603E552C((sead_ListNode *)dword_60C995D0, v5);
      return 1;
    }
  }
  return result;
}
