/* sub_604C36DC
 * address: 0x604C36DC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C36DC(int result)
{
  if ( !FIELD_U8(result, 14178) && !FIELD_U8(result, 14189) )
  {
    if ( !FIELD_U8(result, 13936) )
      *(_BYTE *)(FIELD_U32(result, 13820) + 64) &= ~1u;
    if ( !FIELD_U8(result, 13937) )
      *(_BYTE *)(FIELD_U32(result, 13824) + 64) &= ~1u;
    if ( !FIELD_U8(result, 13938) )
      *(_BYTE *)(FIELD_U32(result, 13828) + 64) &= ~1u;
    if ( !FIELD_U8(result, 13939) )
      *(_BYTE *)(FIELD_U32(result, 13832) + 64) &= ~1u;
  }
  FIELD_U8(result, 14170) = 0;
  return result;
}
