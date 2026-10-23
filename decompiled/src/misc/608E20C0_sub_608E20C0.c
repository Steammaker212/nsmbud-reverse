/* sub_608E20C0
 * address: 0x608E20C0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E20C0(int a1, int a2, int a3)
{
  FIELD_U32(a2, 284) = a3;
  sub_6090DBC8(FIELD_U32(a2, 364));
  return sub_6090DBDC(a2 + 280);
}
