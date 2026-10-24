/* sub_605690F4
 * address: 0x605690F4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605690F4(ColliderBase *a1)
{
  signed int v2; // r1
  signed int result; // r0

  a1[21].field_E4 = 0;
  ColliderBase_setType(a1 + 18, 7);
  FIELD_U32(a1 + (21) * 340, 0x9C) = (Vec3 *)49;
  a1[21].field_94 = 1;
  v2 = sub_60562ABC((int)a1);
  result = 2;
  if ( v2 == 1 )
  {
    FIELD_U32(a1 + (1) * 340, 0xA0) = (char *)1157627904;
    FIELD_U32(a1 + (1) * 340, 0xA4) = (char *)1140850688;
    if ( Actor__getProfileId((Actor *)a1) == 301 )
    {
      a1[18].field_144 = (int)sub_605639F0;
      a1[18].field_148 = (int)sub_605639F8;
      a1[18].field_14C = (int)sub_60563A00;
    }
    return 1;
  }
  return result;
}
