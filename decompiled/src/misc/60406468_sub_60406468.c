/* sub_60406468
 * address: 0x60406468   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60406468()
{
  char v1[200]; // [sp+0h] [bp-C8h] BYREF

  qmemcpy(v1, (const void *)(dword_60CC6D78 + 796), 0xB9u);
  return sub_603F6AA0(v1, 8, 0) >= 4
      && sub_603F6AA0(v1, 8, 1) >= 4
      && sub_603F6AA0(v1, 8, 2) >= 4
      && sub_603F6AA0(v1, 8, 3) >= 4
      && sub_603F6AA0(v1, 8, 4) >= 4
      && sub_603F6AA0(v1, 8, 5) >= 4
      && sub_603F6AA0(v1, 8, 6) >= 4
      && sub_603F6AA0(v1, 8, 7) >= 4
      && sub_603F6AA0(v1, 8, 8) > 3;
}
