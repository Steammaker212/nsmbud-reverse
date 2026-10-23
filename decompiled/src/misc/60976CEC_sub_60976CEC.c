/* sub_60976CEC
 * address: 0x60976CEC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60976CEC(_DWORD *a1)
{
  *a1 = off_60C5F3F0;
  sub_60913BB4((int)(a1 + 1));
  a1[1] = off_60BFA5B0;
  sub_60913BB4((int)(a1 + 8));
  a1[8] = off_60BFA5B0;
  a1[15] = 0;
  a1[16] = 0;
  a1[41] = 0;
  a1[42] = 0;
  a1[43] = 0;
  memset(a1 + 17, 0, 95);
  return a1;
}
