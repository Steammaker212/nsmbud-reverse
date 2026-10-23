/* sub_600AD550
 * address: 0x600AD550   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AD550(int a1)
{
  ActiveCollider *v2; // r5
  int result; // r0

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103940813;
  sub_6015907C((ActiveCollider *)(a1 + 188), 32775);
  sub_6015907C(v2, 8);
  sub_6015907C(v2, 1024);
  result = FIELD_U32(a1, 336) | 0x840F;
  FIELD_U32(a1, 336) = result;
  return result;
}
