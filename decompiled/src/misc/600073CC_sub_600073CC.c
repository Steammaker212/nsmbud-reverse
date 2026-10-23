/* sub_600073CC
 * address: 0x600073CC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600073CC(int a1, Actor *a2)
{
  return Actor__getProfileId(a2) == FIELD_U32(a1, 4);
}
