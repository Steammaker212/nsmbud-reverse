/* sub_6067FF64
 * address: 0x6067FF64   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067FF64(Actor *a1)
{
  a1[8].id = 0;
  if ( Actor__getProfileId(a1) == 745 )
    a1[8].id = 1;
  a1[1].field_40 = 1065353216;
  a1[1].field_44 = 1065353216;
  a1[1].field_48 = 1065353216;
  a1[1].field_4C = 0;
  a1[2].vtable = 0;
  a1[2].heap = 0;
  R_kanban_ref(a1);
  sub_606801CC(a1);
  return 1;
}
