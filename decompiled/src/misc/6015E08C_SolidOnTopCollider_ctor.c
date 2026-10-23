/* SolidOnTopCollider_ctor
 * address: 0x6015E08C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

SolidOnTopCollider *__fastcall SolidOnTopCollider_ctor(SolidOnTopCollider *this)
{
  SolidOnTopCollider *result; // r0

  result = (SolidOnTopCollider *)ColliderBase_ctor(&FIELD_U32(this, 0x0));
  FIELD_U32(result, 0x0)._.vtable = (int)SolidOnTopCollider_vtable;
  FIELD_U32(result, 0x168) = 0;
  FIELD_U32(result, 0x164) = 0;
  FIELD_U32(result, 0x160) = 0;
  FIELD_U32(result, 0x15C) = 0;
  FIELD_U32(result, 0x158) = 0;
  FIELD_U32(result, 0x154) = 0;
  FIELD_F32(result, 0x16C) = 4.0;
  return result;
}
