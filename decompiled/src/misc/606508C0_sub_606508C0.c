/* sub_606508C0
 * address: 0x606508C0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606508C0(int a1)
{
  if ( FIELD_U32(a1, 7524) )
  {
    FIELD_U8(a1, 7568) = 1;
    return 2;
  }
  else
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
    return 1;
  }
}
