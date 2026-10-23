/* sub_605D8110
 * address: 0x605D8110   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D8110(int a1, int a2)
{
  if ( a2 == 2 )
  {
    FIELD_U32(a1, 6380) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6384) = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6388) = 0;
    FIELD_U32(a1, 6260) &= 0x3FFFDFFFu;
    FIELD_U8(a1, 7144) = 0;
    sub_605E3F2C(a1);
  }
  return CollisionActor__afterExecute((CollisionActor *)a1, a2);
}
