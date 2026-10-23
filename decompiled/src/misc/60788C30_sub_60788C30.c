/* sub_60788C30
 * address: 0x60788C30   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60788C30(_DWORD *a1)
{
  _BYTE *result; // r0

  if ( a1[8] )
    sub_607A396C();
  if ( a1[9] )
    sub_607A396C();
  if ( a1[10] )
    sub_607A396C();
  if ( a1[11] )
    sub_607A396C();
  result = (_BYTE *)(dword_60C99DD4 + 272);
  if ( !dword_60C99DD4 )
    result = (_BYTE *)(dword_60C99DEC + 16);
  if ( result[20] && !result[49] )
    result[20] = 0;
  if ( result[92] && !result[121] )
    result[92] = 0;
  if ( result[164] && !result[193] )
    result[164] = 0;
  if ( result[236] )
  {
    if ( !result[265] )
      result[236] = 0;
  }
  return result;
}
