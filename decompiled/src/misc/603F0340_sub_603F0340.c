/* sub_603F0340
 * address: 0x603F0340   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F0340(int result, int a2)
{
  if ( FIELD_U8(result, 5762) && FIELD_U32(result, 5740) == a2 )
  {
    FIELD_U32(result, 5748) = 480;
    FIELD_U32(result, 5756) = 0;
  }
  if ( FIELD_U8(result, 11514) && FIELD_U32(result, 11492) == a2 )
  {
    FIELD_U32(result, 11500) = 480;
    FIELD_U32(result, 11508) = 0;
  }
  if ( FIELD_U8(result, 17266) && FIELD_U32(result, 17244) == a2 )
  {
    FIELD_U32(result, 17252) = 480;
    FIELD_U32(result, 17260) = 0;
  }
  if ( FIELD_U8(result, 23018) && FIELD_U32(result, 22996) == a2 )
  {
    FIELD_U32(result, 23004) = 480;
    FIELD_U32(result, 23012) = 0;
  }
  if ( FIELD_U8(result, 28770) && FIELD_U32(result, 28748) == a2 )
  {
    FIELD_U32(result, 28756) = 480;
    FIELD_U32(result, 28764) = 0;
  }
  if ( FIELD_U8(result, 34522) )
  {
    if ( FIELD_U32(result, 34500) == a2 )
    {
      FIELD_U32(result, 34508) = 480;
      FIELD_U32(result, 34516) = 0;
    }
  }
  return result;
}
