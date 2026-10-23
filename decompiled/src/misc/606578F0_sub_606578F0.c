/* sub_606578F0
 * address: 0x606578F0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606578F0(CollisionActor *a1)
{
  CollisionActor__handleGravity(a1);
  FIELD_F32(a1, 0x70) = FIELD_F32(a1, 0x7C) + FIELD_F32(a1, 0x70);
  (*(void (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0) + 192))(
    a1,
    FIELD_F32(a1, 0x6C) + (float)((float)((float)(((unsigned int)(FIELD_U32(a1, 0x14) + 1) >> 8) & 0xF) * 16.0) * 0.5));
  JUMPOUT(0x60000CD0);
}
