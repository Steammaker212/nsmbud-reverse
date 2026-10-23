/* sub_6045CB40
 * address: 0x6045CB40   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045CB40(int a1)
{
  int v2; // r1

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ((void (__fastcall *)(int))loc_6045C9A0)(a1);
  if ( !FIELD_U8(a1, 6323) )
  {
    v2 = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6348) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6352) = v2;
  }
  return 1;
}
