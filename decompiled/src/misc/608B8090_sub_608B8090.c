/* sub_608B8090
 * address: 0x608B8090   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int16 *__fastcall sub_608B8090(int a1, __int16 a2)
{
  __int16 *result; // r0

  result = &word_60CC8D28[a1];
  *result = a2;
  return result;
}
