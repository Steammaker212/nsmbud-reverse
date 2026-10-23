/* sub_600DA348
 * address: 0x600DA348   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DA348(CollisionActor *a1)
{
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) == 0 )
    (*(void (__fastcall **)(CollisionActor *, void *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &unk_60C84498);
  return KoopalingBase__vf5C8(a1);
}
