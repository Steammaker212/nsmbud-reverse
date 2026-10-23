/* sub_605B1FF4
 * address: 0x605B1FF4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B1FF4(int a1)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)(a1 + 6104);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  return sub_601601B8(v1);
}
