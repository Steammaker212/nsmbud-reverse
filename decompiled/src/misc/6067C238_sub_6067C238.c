/* sub_6067C238
 * address: 0x6067C238   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6067C238(int a1)
{
  unsigned int v2; // r6
  int ResArchiveById; // r0

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 116) = dword_60AF2208[(v2 >> 4) & 1];
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  sub_6067EADC(
    a1 + 6100,
    ResArchiveById,
    a1 + 108,
    FIELD_U8(a1, 86),
    (v2 & 7) + 1,
    FIELD_U32(a1, 8),
    (v2 >> 5) & 1);
  sub_6067C324(a1);
  ShapedCollider_init((ShapedCollider *)(a1 + 9520), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB7EB0);
  FIELD_U32(a1, 9856) = a1 + 10176;
  ColliderBase_setSolidity((ColliderBase *)(a1 + 9520), 0);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 9520));
  FIELD_U8(a1, 10189) = (v2 & 0x10) != 0;
  FIELD_U8(a1, 10194) = v2 >> 28;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  return 1;
}
