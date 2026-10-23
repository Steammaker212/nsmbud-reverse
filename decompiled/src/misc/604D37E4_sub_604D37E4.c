/* sub_604D37E4
 * address: 0x604D37E4   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D37E4(int result, _BYTE *a2)
{
  int v2; // r3
  int v3; // r1

  FIELD_U32(result, 615724) = 0;
  FIELD_U32(result, 615728) = 0;
  if ( *a2 )
  {
    if ( FIELD_U8(result, 615732) )
      goto LABEL_7;
    v2 = 2;
  }
  else
  {
    if ( !FIELD_U8(result, 615732) )
      goto LABEL_7;
    v2 = 1;
  }
  FIELD_U32(result, 615724) = v2;
LABEL_7:
  if ( a2[1] )
  {
    if ( FIELD_U8(result, 615733) )
      return result;
    result += 4;
    v3 = 2;
  }
  else
  {
    if ( !FIELD_U8(result, 615733) )
      return result;
    result += 4;
    v3 = 1;
  }
  FIELD_U32(result, 615724) = v3;
  return result;
}
