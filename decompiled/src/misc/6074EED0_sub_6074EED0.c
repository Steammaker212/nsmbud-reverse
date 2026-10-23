/* sub_6074EED0
 * address: 0x6074EED0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074EED0(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 12);
  if ( v2 )
    FIELD_U32(a1, 12) = v2 - 1;
  result = FIELD_U32(a1, 32);
  if ( result == 2 )
  {
    result = 0;
LABEL_11:
    FIELD_U32(a1, 32) = result;
    return result;
  }
  if ( result != 1 )
    return result;
  sub_6074EF40(a1);
  if ( FIELD_U32(a1, 4) != 9 )
  {
    result = FIELD_U32(a1, 12);
    if ( result )
      return result;
    goto LABEL_10;
  }
  result = FIELD_U8(a1, 40);
  if ( FIELD_U8(a1, 40) )
  {
LABEL_10:
    result = 2;
    goto LABEL_11;
  }
  return result;
}
