/* MovementBlockCoinBase__vf150
 * address: 0x605D00FC   size: 64   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
_WORD *__fastcall MovementBlockCoinBase__vf150(int a1)
{
  return sub_60716778(
           TileMgr_instance,
           (unsigned int)FIELD_F32(a1, 6980),
           (unsigned int)(float)-FIELD_F32(a1, 6984),
           FIELD_U8(a1, 86));
}
