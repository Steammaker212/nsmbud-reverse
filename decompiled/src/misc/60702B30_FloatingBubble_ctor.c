/* FloatingBubble_ctor
 * address: 0x60702B30   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall FloatingBubble_ctor(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r1

  v2 = operator_new(0x1B38u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = FloatingBubble_vtable;
  FIELD_U32(v2, 6100) = 0;
  sub_6015BD84((ColliderBase *)(v2 + 6104));
  CircularCollider_ctor((ColliderBase *)(v2 + 6504));
  v3 = FIELD_U32(v2, 108);
  v4 = FIELD_U32(v2, 112);
  FIELD_U32(v2, 6912) = FIELD_U32(v2, 116);
  FIELD_U32(v2, 6908) = v4;
  FIELD_U32(v2, 6904) = v3;
  FIELD_U8(v2, 6930) = 0;
  FIELD_U16(v2, 6928) = 0;
  FIELD_U32(v2, 6924) = 0;
  FIELD_U32(v2, 6920) = 0;
  FIELD_U32(v2, 6916) = 0;
  memset((void *)(v2 + 6932), 0, 36);
  return v2;
}
