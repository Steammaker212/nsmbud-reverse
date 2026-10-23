/* sub_608208FC
 * address: 0x608208FC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608208FC(int a1, int a2, int a3)
{
  char *v3; // r4

  v3 = (char *)dword_60CC6D78;
  sub_603F78BC((_BYTE *)(dword_60CC6D78 + 796), a1 + 111, a2 + 111, a3 + 111);
  sub_604083E4(v3 + 52);
  v3[109032] = 0;
  v3[109033] = 0;
  v3[2094] = 0;
  v3[2095] = 0;
  return sub_6040B33C(dword_60C9A1F0);
}
