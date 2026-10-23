/* sub_604C33E4
 * address: 0x604C33E4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C33E4(int a1)
{
  _BYTE *v1; // r4

  v1 = (_BYTE *)a1;
  FIELD_U16(a1, 5108) = 0;
  sub_6047EABC((_DWORD *)(a1 + 4096));
  v1[13940] = 0;
  v1 += 13940;
  v1[3] = 0;
  v1[2] = 0;
  v1[1] = 0;
  return 13940;
}
