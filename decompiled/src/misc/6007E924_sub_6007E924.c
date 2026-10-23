/* sub_6007E924
 * address: 0x6007E924   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6007E924(int a1)
{
  ActiveColliderMgr *v2; // r6
  float v3; // r1
  Vec3 v5; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U8(a1, 535) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 6360));
  ActiveColldierMgr_removeFromList3(v2, a1 + 6360);
  v3 = FIELD_F32(a1, 112);
  v5.x = FIELD_F32(a1, 108);
  v5.y = v3;
  v5.z = 4500.0;
  EffectData_create(957, &v5, 0, a1 + 144);
  FIELD_U32(a1, 6348) = 30;
  return 6348;
}
