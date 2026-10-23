/* sub_60768FC4
 * address: 0x60768FC4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60768FC4(int a1, int a2)
{
  return (FIELD_U8(a1, 1234) & 0x10) != 0
      && FIELD_U32(a1, 9708) == 3
      && FIELD_U32(a1, 10036) == a2
      && (FIELD_U8(a1, 1204) & 0x10) != 0;
}
