/* sub_60107684
 * address: 0x60107684   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60107684(CollisionActor *a1)
{
  CollisionActor__handleGravity(a1);
  FIELD_U32(a1, 0x0).position.y = FIELD_U32(a1, 0x0).speed.y + FIELD_U32(a1, 0x0).position.y;
  (*(void (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0)._.vtable + 192))(
    a1,
    FIELD_U32(a1, 0x0).position.x + (float)((float)((float)(((unsigned int)(FIELD_U32(a1, 0x0)._.settings1 + 1) >> 8) & 0xF) * 16.0) * 0.5));
  JUMPOUT(0x60000CD0);
}
