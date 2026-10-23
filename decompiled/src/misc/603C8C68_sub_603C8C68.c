/* sub_603C8C68
 * address: 0x603C8C68   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C8C68(int a1)
{
  _DWORD *v1; // r4

  FIELD_U8(a1, 6056) = 2;
  v1 = (_DWORD *)(a1 + 17344);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 17344));
  return sub_601601B8(v1);
}
