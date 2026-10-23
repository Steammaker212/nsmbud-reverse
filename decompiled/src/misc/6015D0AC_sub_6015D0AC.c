/* sub_6015D0AC
 * address: 0x6015D0AC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

TileCheck *__fastcall sub_6015D0AC(TileCheck *result)
{
  FIELD_U8(result, 0x0) = 0;
  FIELD_U8(result, 0x1) = 0;
  FIELD_U8(result, 0x2) = 0;
  FIELD_U8(result, 0x3) = 1;
  FIELD_U32(result, 0x48) = 0;
  FIELD_U32(result, 0x4) = 0;
  FIELD_U32(result, 0x8) = 0;
  FIELD_U32(result, 0xC) = 0;
  FIELD_U32(result, 0x10) = (int)&FIELD_U32(result, 0x20);
  FIELD_U32(result, 0x14) = 10;
  FIELD_U32(result, 0x18) = 0;
  FIELD_U32(result, 0x1C) = 0;
  return result;
}
