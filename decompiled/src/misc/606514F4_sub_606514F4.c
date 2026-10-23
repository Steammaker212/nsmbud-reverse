/* sub_606514F4
 * address: 0x606514F4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606514F4(int a1)
{
  CollisionActor__handleGravity((CollisionActor *)a1);
  FIELD_U32(a1, 6848) = FIELD_U32(a1, 124);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 192))(
    a1,
    FIELD_F32(a1, 108) + (float)((float)((float)(((FIELD_U32(a1, 24) >> 8) & 0xFu) + 1) * 16.0) * 0.5));
  JUMPOUT(0x60000CD0);
}
