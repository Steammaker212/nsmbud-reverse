/* sub_603797F8
 * address: 0x603797F8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603797F8(int result)
{
  int v1; // r1
  int v2; // r1

  if ( FIELD_U8(result, 32) )
  {
    v1 = FIELD_U32(result, 16);
    if ( v1 )
    {
      if ( FIELD_U32(v1, 40) == result )
      {
        FIELD_U32(v1, 16) = FIELD_U32(v1, 28);
        FIELD_U32(v1, 20) = FIELD_U32(v1, 32);
        FIELD_U8(v1, 24) = FIELD_U8(v1, 36);
        FIELD_U32(v1, 40) = 0;
      }
      FIELD_U32(result, 16) = 0;
    }
    v2 = FIELD_U32(result, 20);
    if ( v2 )
    {
      if ( FIELD_U32(v2, 40) == result )
      {
        FIELD_U32(v2, 16) = FIELD_U32(v2, 28);
        FIELD_U32(v2, 20) = FIELD_U32(v2, 32);
        FIELD_U8(v2, 24) = FIELD_U8(v2, 36);
        FIELD_U32(v2, 40) = 0;
      }
      FIELD_U32(result, 20) = 0;
    }
    FIELD_U8(result, 32) = 0;
  }
  return result;
}
