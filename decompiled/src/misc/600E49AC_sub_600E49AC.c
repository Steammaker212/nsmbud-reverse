/* sub_600E49AC
 * address: 0x600E49AC   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E49AC(int a1)
{
  int v2; // r0
  float v3; // s0

  FIELD_U32(a1, 120) = 1041865114;
  FIELD_U32(a1, 124) = 1069547520;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  v2 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 80) = v2 ^ 1;
  if ( v2 )
  {
    v3 = 0.375;
  }
  else
  {
    v3 = -0.375;
    FIELD_U32(a1, 120) = -1105618534;
  }
  FIELD_F32(a1, 6556) = v3;
  FIELD_U32(a1, 116) = 1167867904;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  return sub_600E371C(a1, 0);
}
