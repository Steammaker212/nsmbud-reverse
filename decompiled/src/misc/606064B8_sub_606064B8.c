/* sub_606064B8
 * address: 0x606064B8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606064B8(int a1)
{
  unsigned int v2; // r0
  int v3; // r5
  int v4; // r4

  v2 = FIELD_U32(a1, 20);
  if ( (v2 & 1) == 0 )
  {
    v3 = (v2 >> 4) & 1;
    v4 = ((int)(v2 << 27) >> 31) & HIBYTE(v2);
    if ( FIELD_U8(a1, 0x21B) )
      EventMgr_set(
        EventMgr__instance,
        (unsigned __int8)(FIELD_U8(a1, 0x21B) - 1),
        ((int)(v2 << 27) >> 31) & HIBYTE(v2),
        (v2 >> 4) & 1,
        0,
        0,
        0,
        0);
    if ( FIELD_U8(a1, 0x21C) )
      EventMgr_set(EventMgr__instance, (unsigned __int8)(FIELD_U8(a1, 0x21C) - 1), v4, v3, 0, 0, 0, 0);
  }
  return 2;
}
