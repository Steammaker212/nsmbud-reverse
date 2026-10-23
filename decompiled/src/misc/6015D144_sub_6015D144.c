/* sub_6015D144
 * address: 0x6015D144   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

TileCheck *__fastcall sub_6015D144(TileCheck *result, int a2)
{
  FIELD_U8(result, 0x0) = *(_BYTE *)a2;
  FIELD_U8(result, 0x2) = FIELD_U8(a2, 2);
  FIELD_U8(result, 0x3) = FIELD_U8(a2, 3);
  FIELD_U32(result, 0x4) = FIELD_U32(a2, 4);
  FIELD_U32(result, 0xC) = FIELD_U32(a2, 8);
  FIELD_U32(result, 0x8) = 0;
  FIELD_U32(result, 0x18) = 0;
  FIELD_U32(result, 0x1C) = 0;
  return result;
}
