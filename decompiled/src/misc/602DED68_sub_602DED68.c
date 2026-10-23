/* sub_602DED68
 * address: 0x602DED68   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602DED68(int a1)
{
  FIELD_U32(a1, 156) += 0x8000000;
  FIELD_U32(a1, 160) += 0x4000000;
  JUMPOUT(0x6000100C);
}
