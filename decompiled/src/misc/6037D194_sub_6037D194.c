/* sub_6037D194
 * address: 0x6037D194   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037D194(_DWORD *a1)
{
  a1[1666] = 1;
  a1[39] = 0;
  a1[41] = 0;
  a1[40] = dword_60C967CC;
  a1[1875] = 0;
  a1[1887] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  memset(a1 + 1878, 0, 33);
  sub_6029951C((int)a1, 0.0, 0.0);
  a1[1746] = 1095761920;
  a1[1747] = 1095761920;
  a1[1744] = 0;
  a1[1745] = 1098907648;
  a1[1822] = 1095761920;
  a1[1823] = 1095761920;
  a1[1820] = 0;
  a1[1821] = 0;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
}
