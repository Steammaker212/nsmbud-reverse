/* sub_601040E0
 * address: 0x601040E0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601040E0(int a1)
{
  CollisionActor__handleGravity((CollisionActor *)a1);
  FIELD_F32(a1, 6576) = FIELD_F32(a1, 124) + FIELD_F32(a1, 6576);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 192))(
    a1,
    FIELD_F32(a1, 108) + (float)((float)((float)(((unsigned int)(FIELD_U32(a1, 20) + 1) >> 8) & 0xF) * 16.0) * 0.5));
  JUMPOUT(0x60000CD0);
}
