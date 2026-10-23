/* sub_605EBC2C
 * address: 0x605EBC2C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EBC2C(int a1)
{
  TileMgr_setTile(
    TileMgr_instance,
    (unsigned int)(float)(FIELD_F32(a1, 6564) + -8.0),
    (unsigned int)(float)-(float)(FIELD_F32(a1, 6568) + 16.0),
    0,
    7);
  FIELD_U8(a1, 6602) = 1;
  FIELD_U8(a1, 19) = 1;
  return 6602;
}
