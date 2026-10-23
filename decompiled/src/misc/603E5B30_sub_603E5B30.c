/* sub_603E5B30
 * address: 0x603E5B30   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_603E5B30()
{
  int result; // r0

  result = FIELD_U32(dword_60C99DD4, 224);
  if ( result )
    FIELD_U8(result, 3596) = 1;
  return result;
}
