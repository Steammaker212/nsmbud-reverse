/* sub_600D0500
 * address: 0x600D0500   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D0500(_DWORD *a1)
{
  _BYTE *v2; // r6

  a1[1702] = a1[27];
  a1[1703] = a1[28];
  a1[1704] = a1[29];
  a1[1694] = 0;
  a1[1738] = 0;
  *((_BYTE *)a1 + 6956) = 0;
  *((_BYTE *)a1 + 6957) = 0;
  *((_BYTE *)a1 + 6980) = 0;
  v2 = a1 + 1745;
  a1[1705] = 0;
  a1[1706] = 0;
  a1[1707] = 0;
  a1[1701] = 0;
  a1[1700] = 0;
  a1[1699] = 0;
  a1[1698] = 0;
  a1[1697] = 0;
  a1[1696] = 0;
  a1[20] = 1;
  a1[40] = (*(int (__fastcall **)(_DWORD *))(*a1 + 760))(a1);
  *((float *)a1 + 1735) = (*(float (__fastcall **)(_DWORD *))(*a1 + 752))(a1);
  a1[1695] = 0;
  a1[1740] = -1;
  a1[1741] = 0;
  a1[1742] = 0;
  a1[1743] = 0;
  a1[1744] = -1;
  *v2 = 0;
  return 1;
}
