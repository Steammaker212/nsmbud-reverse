/* sub_6068466C
 * address: 0x6068466C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068466C(_DWORD *a1)
{
  a1[1864] = a1[28];
  a1[1877] = 0;
  a1[1874] = 60;
  a1[1865] = 1107296256;
  a1[1866] = 0x40000000;
  a1[1869] = 1107296256;
  a1[1867] = 1087373312;
  a1[1868] = 1075838976;
  a1[1876] = 120;
  a1[1875] = 90;
  a1[1858] = 0;
  a1[1859] = -1040187392;
  sub_60681908((int)a1);
  a1[29] = 1161936896;
  sub_60684748(a1);
  wrist0_ref((int)a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 196))(a1);
  sub_60684B20((int)a1);
  return 1;
}
