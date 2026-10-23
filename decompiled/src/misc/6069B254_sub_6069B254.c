/* sub_6069B254
 * address: 0x6069B254   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069B254(int a1)
{
  unsigned int v2; // r0
  int v3; // r6

  v2 = FIELD_U32(a1, 20);
  v3 = (v2 >> 4) & 1;
  sub_6069B8C4((float *)(a1 + 648), a1, dword_60B08058, (FIELD_U32(a1, 24) >> 8) & 0xF, (v2 >> 12) & 1, v3);
  sub_608337BC(a1 + 1136, &dword_60CB9554[8 * v3]);
  sub_6069BE24(a1 + 648, a1 + 1172, a1 + 108);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 752));
  return 1;
}
