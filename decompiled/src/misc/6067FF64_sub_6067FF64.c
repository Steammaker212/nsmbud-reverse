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
  FIELD_U32(a1 + (8) * 80, 0x8) = 0;
  if ( Actor__getProfileId(a1) == 745 )
    FIELD_U32(a1 + (8) * 80, 0x8) = 1;
  FIELD_U32(a1 + (1) * 80, 0x40) = 1065353216;
  FIELD_U32(a1 + (1) * 80, 0x44) = 1065353216;
  FIELD_U32(a1 + (1) * 80, 0x48) = 1065353216;
  FIELD_U32(a1 + (1) * 80, 0x4C) = 0;
  FIELD_U32(a1 + (2) * 80, 0x0) = 0;
  FIELD_U32(a1 + (2) * 80, 0x4) = 0;
  R_kanban_ref(a1);
  sub_606801CC(a1);
  return 1;
}
