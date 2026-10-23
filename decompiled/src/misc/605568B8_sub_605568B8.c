/* sub_605568B8
 * address: 0x605568B8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605568B8(int result)
{
  int v1; // r1

  v1 = dword_60C99DEC;
  if ( FIELD_U8(dword_60C99DEC, 36) )
    FIELD_U32(dword_60C99DEC, 56) = FIELD_U32(result, 5708);
  if ( FIELD_U8(v1, 108) )
    FIELD_U32(v1, 128) = FIELD_U32(result, 5712);
  if ( FIELD_U8(v1, 180) )
    FIELD_U32(v1, 200) = FIELD_U32(result, 5716);
  if ( FIELD_U8(v1, 252) )
    FIELD_U32(v1, 272) = FIELD_U32(result, 5720);
  FIELD_U8(result, 18824) = 0;
  return result;
}
