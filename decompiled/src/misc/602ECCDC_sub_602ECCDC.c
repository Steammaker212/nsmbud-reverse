/* sub_602ECCDC
 * address: 0x602ECCDC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602ECCDC(int result)
{
  _DWORD *v1; // r4

  FIELD_U32(result, 116) = FIELD_U32(result, 7420);
  if ( FIELD_U8(result, 6780) )
  {
    v1 = (_DWORD *)(result + 6104);
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(result + 6104));
    return sub_601601B8(v1);
  }
  return result;
}
