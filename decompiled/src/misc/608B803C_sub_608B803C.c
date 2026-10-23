/* sub_608B803C
 * address: 0x608B803C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int16 *__fastcall sub_608B803C(int a1, int a2)
{
  __int16 *result; // r0

  if ( a2 <= 15 )
    return (__int16 *)(a1 + 2 * a2 + 308);
  result = 0;
  if ( a2 <= 31 )
    return &word_60CC8D28[a2 - 16];
  return result;
}
