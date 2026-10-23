/* sub_609232EC
 * address: 0x609232EC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609232EC(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  FIELD_U8(a1, 110) |= 0x20u;
  return sub_60924F70(FIELD_U32(a1, 32), a2, a3, a1, a4, a5, a6, a7);
}
