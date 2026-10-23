/* sub_60390868
 * address: 0x60390868   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60390868(Enemy *a1)
{
  int eventId1; // r1
  bool v3; // zf

  sub_60421AD4(a1[1]._._._._.vtable);
  v3 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    eventId1 = (unsigned __int8)FIELD_U32(a1, 0x0)._._.eventId1;
    v3 = eventId1 == 0;
  }
  if ( !v3 )
    EventMgr_set(EventMgr__instance, (unsigned __int8)(eventId1 - 1), 0, 1, 0, 0, 0, 0);
  return Enemy__beginState_DieFumi(a1);
}
