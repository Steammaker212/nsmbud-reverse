/* sub_6067BCB0
 * address: 0x6067BCB0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067BCB0(int a1)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)(a1 + 9152);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 9152));
  return sub_601601B8(v1);
}
