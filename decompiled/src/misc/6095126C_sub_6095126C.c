/* sub_6095126C
 * address: 0x6095126C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6095126C(_DWORD *a1)
{
  int v2; // r5

  *a1 = off_60C5E93C;
  v2 = (int)(a1 + 142);
  a1[224] = off_60C5E95C;
  sub_60913C18((int)(a1 + 224));
  a1[217] = off_60C5E95C;
  sub_60913C18((int)(a1 + 217));
  a1[210] = off_60C5E95C;
  sub_60913C18((int)(a1 + 210));
  sub_60922478(v2);
  sub_60922478((int)(a1 + 74));
  sub_60922478((int)(a1 + 6));
  return a1;
}
