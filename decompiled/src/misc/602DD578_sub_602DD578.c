/* sub_602DD578
 * address: 0x602DD578   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DD578(int a1)
{
  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1084227584;
  FIELD_U32(a1, 128) = 0;
  ((void (__fastcall *)(int))loc_602DD008)(a1);
  FIELD_U8(a1, 6468) = 0;
  return 6468;
}
