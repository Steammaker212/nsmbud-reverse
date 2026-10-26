/* CircularCollider_ctor
 * address: 0x60157170   size: 60   group: misc
 * sym: CircularCollider::CircularCollider() as C1
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderBase *__fastcall CircularCollider_ctor(ColliderBase *a1)
{
  ColliderBase_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)CircularCollider_vtable;
  memset(&a1[1], 0, 0x38);
  ColliderBase_setSolidity(a1, 1);
  return a1;
}
