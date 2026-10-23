/* CollisionActor__vfAC
 * address: 0x60004038   size: 20   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall CollisionActor__vfAC(int result, _DWORD *a2)
{
  FIELD_U32(result, 0x6C) = *a2;
  FIELD_U32(result, 0x70) = a2[1];
  return result;
}
