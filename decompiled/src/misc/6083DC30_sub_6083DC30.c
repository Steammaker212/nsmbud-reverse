/* sub_6083DC30
 * address: 0x6083DC30   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083DC30(int a1)
{
  sub_60998EA8(a1);
  FIELD_U16(a1, 6) = 41;
  *(_WORD *)a1 = 257;
  FIELD_U8(a1, 2) = 1;
  return 1;
}
