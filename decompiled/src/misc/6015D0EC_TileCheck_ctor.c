/* TileCheck_ctor
 * address: 0x6015D0EC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

TileCheck *__fastcall TileCheck_ctor(TileCheck *result, TileCheck_Param *a2)
{
  FIELD_U8(result, 0x0) = FIELD_U8(a2, 0x0);
  FIELD_U8(result, 0x1) = FIELD_U8(a2, 0x1);
  FIELD_U8(result, 0x2) = FIELD_U8(a2, 0x2);
  FIELD_U8(result, 0x3) = FIELD_U8(a2, 0x3);
  FIELD_U32(result, 0x4) = FIELD_U32(a2, 0x4);
  FIELD_U32(result, 0x8) = 0;
  FIELD_U32(result, 0xC) = FIELD_U32(a2, 0x8);
  FIELD_U32(result, 0x10) = (int)&FIELD_U32(result, 0x20);
  FIELD_U32(result, 0x1C) = 0;
  FIELD_U32(result, 0x18) = 0;
  FIELD_U32(result, 0x14) = 10;
  FIELD_U32(result, 0x48) = 0;
  return result;
}
