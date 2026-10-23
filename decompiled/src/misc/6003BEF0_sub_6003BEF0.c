/* sub_6003BEF0
 * address: 0x6003BEF0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003BEF0(int a1)
{
  ColliderBase *v2; // r5

  v2 = (ColliderBase *)(a1 + 10032);
  if ( sub_601536B0(ColliderMgr_instance, a1 + 10032) == 1 )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, v2);
    sub_601601B8(v2);
  }
  if ( sub_601536B0(ColliderMgr_instance, a1 + 10432) == 1 )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 10432));
    sub_601601B8(v2);
  }
  FIELD_U8(a1, 11691) = 0;
  return 11691;
}
