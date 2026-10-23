/* Actor_raitowith_tarirotate_Lift_build
 * address: 0x6063A6A8   size: 328   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_raitowith_tarirotate_Lift_build(int a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0x1AD8u);
  sub_606D23D8(v2, a1);
  *(_DWORD *)v2 = off_60C12CF4;
  memset((void *)(v2 + 6192), 0, 188);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6424));
  FIELD_U32(v2, 6424) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 6792, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 6808));
  FIELD_U32(v2, 6860) = 0;
  FIELD_U32(v2, 6856) = 0;
  FIELD_U32(v2, 6852) = 0;
  FIELD_U32(v2, 6848) = 0;
  FIELD_U32(v2, 6844) = 0;
  FIELD_U32(v2, 6864) = 0;
  FIELD_U32(v2, 6868) = 0;
  FIELD_U32(v2, 6840) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 6840));
  FIELD_U32(v2, 6804) = 0;
  FIELD_U32(v2, 6800) = 0;
  FIELD_U32(v2, 6796) = 0;
  FIELD_U32(v2, 6792) = 0;
  v3 = FIELD_U32(v2, 6732);
  v4 = FIELD_U32(v2, 6728);
  FIELD_U32(v2, 6836) = v3;
  FIELD_U32(v2, 6832) = v4;
  FIELD_U32(v2, 6868) = v3;
  FIELD_U32(v2, 6864) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 6424), 1, v2 + 6792, v2 + 6808, v5);
  return v2;
}
