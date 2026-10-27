/* PlayerLookTarget_ctor
 * address: 0x6000B258   size: 64   group: player
 * sym: # PlayerLookTarget_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

PlayerLookTarget *__fastcall PlayerLookTarget_ctor(PlayerLookTarget *this, int id)
{
  PlayerLookTarget *this_1; // r0

  this_1 = (PlayerLookTarget *)sead_IDisposer_ctor(&FIELD_U32(this, 0x0));
  FIELD_U32(this_1, 0x0) = (int)PlayerLookTarget_vtable;
  FIELD_U32(this_1, 0x10) = id;
  FIELD_F32(this_1, 0x14) = 0.0;
  FIELD_F32(this_1, 0x18) = 0.0;
  FIELD_U32(this_1, 0x1C) = 0;
  FIELD_U32(this_1, 0x20) = 0;
  FIELD_U32(this_1, 0x24) = 0;
  FIELD_U32(this_1, 0x28) = 0;
  return this_1;
}
