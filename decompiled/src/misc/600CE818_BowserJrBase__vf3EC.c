/* BowserJrBase__vf3EC
 * address: 0x600CE818   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BE4
// 
// Overridden by: None
int __fastcall BowserJrBase__vf3EC(int a1)
{
  int result; // r0
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "koopaJr";
  result = LoadResource(ResourceMgrRelated_instance, v3);
  FIELD_U32(a1, 7096) = result;
  return result;
}
