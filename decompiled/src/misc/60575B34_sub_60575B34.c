/* sub_60575B34
 * address: 0x60575B34   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60575B34(ColliderBase *a1)
{
  FIELD_F32(a1, 0x74) = a1[21].field_D0;
  a1[19].field_150 = 0;
  (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CAE31C);
  ((void (__fastcall *)(ColliderBase *, int))loc_6057589C)(a1, 1);
  a1[21].field_E4 = 2;
  a1[21].owner248Ptr = (Vec3 *)50;
  a1[18].field_138 = (int)sub_605B3700;
  a1[18].field_13C = (int)sub_605B4010;
  a1[18].field_140 = (int)sub_605B4A6C;
  return ColliderBase_setType(a1 + 18, 12);
}
