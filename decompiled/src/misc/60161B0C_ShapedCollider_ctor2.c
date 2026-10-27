/* ShapedCollider_ctor2
 * address: 0x60161B0C   size: 132   group: misc
 * sym: # ShapedCollider_ctor2 as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ShapedCollider *__fastcall ShapedCollider_ctor2(ShapedCollider *this, signed int nodeCount, int a3, int a4, int a5)
{
  ShapedCollider *result; // r0

  result = (ShapedCollider *)ColliderBase_ctor(&FIELD_U32(this, 0x0));
  FIELD_U32(result, 0x0) = (int)ShapedCollider_vtable;
  FIELD_U32(result, 0x154) = 0;
  FIELD_U32(result, 0x158) = 0;
  FIELD_U32(result, 0x15C) = 0;
  FIELD_U32(result, 0x160) = 0;
  FIELD_U32(result, 0x164) = 0;
  FIELD_U32(result, 0x168) = 0;
  if ( nodeCount >= 1 && a3 )
  {
    FIELD_U32(result, 0x154) = nodeCount;
    FIELD_U32(result, 0x158) = a3;
  }
  if ( nodeCount >= 1 && a4 )
  {
    FIELD_U32(result, 0x15C) = nodeCount;
    FIELD_U32(result, 0x160) = a4;
  }
  if ( nodeCount >= 1 )
  {
    if ( a5 )
    {
      FIELD_U32(result, 0x164) = nodeCount;
      FIELD_U32(result, 0x168) = a5;
    }
  }
  return result;
}
