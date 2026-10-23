/* sub_60567064
 * address: 0x60567064   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60567064(int a1)
{
  int v2; // r2
  int v3; // lr
  __int64 v4; // r2

  if ( Actor__getProfileId((Actor *)a1) == 295 && !FIELD_U8(a1, 7312) )
  {
    v2 = FIELD_U8(a1, 539);
    if ( FIELD_U8(a1, 539) )
    {
      v3 = v2 - 33;
      HIDWORD(v4) = 1u >> (33 - v2);
      LODWORD(v4) = 1 << (v2 - 1);
      if ( v3 >= 0 )
      {
        HIDWORD(v4) = 1 << v3;
        LODWORD(v4) = 0;
      }
      if ( (*(_QWORD *)(EventMgr__instance + 16) & v4) != 0 )
      {
        FIELD_U8(a1, 7312) = 1;
        ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
      }
    }
  }
  return sub_60566EDC(a1);
}
