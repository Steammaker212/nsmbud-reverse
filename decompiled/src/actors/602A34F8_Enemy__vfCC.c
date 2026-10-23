/* Enemy__vfCC
 * address: 0x602A34F8   size: 36   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
bool __fastcall Enemy__vfCC(Enemy *a1, int a2)
{
  return byte_60AFE418[FIELD_U32(a1, 0x1894)] <= a2;
}
