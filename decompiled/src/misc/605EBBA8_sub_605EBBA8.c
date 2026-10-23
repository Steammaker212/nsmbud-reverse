/* sub_605EBBA8
 * address: 0x605EBBA8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EBBA8(int a1)
{
  if ( !FIELD_U8(a1, 6602) )
    TileMgr_setTile(
      TileMgr_instance,
      (unsigned int)(float)(FIELD_F32(a1, 6564) + -8.0),
      (unsigned int)(float)-(float)(FIELD_F32(a1, 6568) + 16.0),
      0,
      7);
  return 1;
}
