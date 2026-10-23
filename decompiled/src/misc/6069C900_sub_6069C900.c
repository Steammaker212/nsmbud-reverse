/* sub_6069C900
 * address: 0x6069C900   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069C900(int a1)
{
  int v2; // r1
  int result; // r0
  ShapedColliderInfo v4; // [sp+4h] [bp-34h] BYREF

  v2 = (*(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)a1 + 224))(a1, &v4);
  result = 0;
  if ( v2 == 1 )
  {
    ShapedCollider_init((ShapedCollider *)(a1 + 6112), (StageActor *)a1, &v4);
    FIELD_U32(a1, 6436) = sub_6069C9A8;
    FIELD_U32(a1, 6440) = sub_6069C9C8;
    FIELD_U32(a1, 6444) = sub_6069C9E8;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
    return 1;
  }
  return result;
}
