/* Enemy__vf1D4
 * address: 0x602A80EC   size: 104   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall Enemy__vf1D4(Enemy *a1)
{
  Vec3 effectPos; // [sp+4h] [bp-14h] BYREF

  effectPos.x = FIELD_U32(a1, 0x0)._._.position.x + FIELD_U32(a1, 0x0)._._.effectOffset.x;
  effectPos.y = FIELD_U32(a1, 0x0)._._.position.y + FIELD_U32(a1, 0x0)._._.effectOffset.y;
  effectPos.z = FIELD_U32(a1, 0x0)._._.position.z + FIELD_U32(a1, 0x0)._._.effectOffset.z;
  EffectData_create(431, &effectPos, 0, 0);
  return (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 0x48))(a1);
}
