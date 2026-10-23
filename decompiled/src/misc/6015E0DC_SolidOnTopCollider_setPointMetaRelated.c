/* SolidOnTopCollider_setPointMetaRelated
 * address: 0x6015E0DC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

SolidOnTopCollider *__fastcall SolidOnTopCollider_setPointMetaRelated(
        SolidOnTopCollider *this,
        signed int a2,
        int a3,
        int a4,
        int a5)
{
  if ( a2 >= 0 && a3 )
  {
    FIELD_U32(this, 0x154) = a2 + 1;
    FIELD_U32(this, 0x158) = a3;
  }
  if ( a2 >= 1 && a4 )
  {
    FIELD_U32(this, 0x15C) = a2;
    FIELD_U32(this, 0x160) = a4;
  }
  if ( a2 >= 1 )
  {
    if ( a5 )
    {
      FIELD_U32(this, 0x164) = a2;
      FIELD_U32(this, 0x168) = a5;
    }
  }
  return this;
}
