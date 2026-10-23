/* sub_601B1354
 * address: 0x601B1354   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_601B1354()
{
  _DWORD *v0; // r0

  v0 = (_DWORD *)sub_60186FEC(dword_60CC6D78 + 984, 3u, 3u);
  return *v0 != -1 && v0[1] != -1 && v0[2] != -1 && v0[3] == 0;
}
