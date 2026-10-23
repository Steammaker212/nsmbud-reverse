/* SwingingCollider_ctor
 * address: 0x601653A4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderBase *__fastcall SwingingCollider_ctor(ColliderBase *a1)
{
  ColliderBase_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)SwingingCollider_vtable;
  a1[1]._.vtable = (int)off_60BD4A50;
  memset(&a1[1]._.containingHeap, 0, 0x58);
  return a1;
}
