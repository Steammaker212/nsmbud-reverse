/* ShapedCollider_ctor
 * address: 0x60161AD0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ShapedCollider *__fastcall ShapedCollider_ctor(ShapedCollider *this)
{
  ShapedCollider *this_1; // r0

  this_1 = (ShapedCollider *)ColliderBase_ctor(&FIELD_U32(this, 0x0));
  FIELD_U32(this_1, 0x0) = (int)ShapedCollider_vtable;
  FIELD_U32(this_1, 0x154) = 0;
  FIELD_U32(this_1, 0x158) = 0;
  FIELD_U32(this_1, 0x15C) = 0;
  FIELD_U32(this_1, 0x160) = 0;
  FIELD_U32(this_1, 0x164) = 0;
  FIELD_U32(this_1, 0x168) = 0;
  return this_1;
}
