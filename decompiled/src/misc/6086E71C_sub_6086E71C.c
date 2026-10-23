/* sub_6086E71C
 * address: 0x6086E71C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086E71C(int a1, float a2)
{
  return *(char *)(FIELD_U32(a1, 8) + (int)a2 - (int)FIELD_F32(a1, 24));
}
