/* ActiveCollider_check5C
 * address: 0x601591FC   size: 16   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall ActiveCollider_check5C(ActiveCollider *a1, int a2)
{
  return (FIELD_U32(a1, 0x5C) & a2) != 0;
}
