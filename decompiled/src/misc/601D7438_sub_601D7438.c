/* sub_601D7438
 * address: 0x601D7438   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D7438(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  a1[280] &= ~0x1000000u;
  a1[50] = 0;
  a1[273] = sub_601E1384(a1[286]);
  (*(void (__fastcall **)(_DWORD *, float))(*a1 + 104))(a1, 0.0);
  a1[280] |= 0x80000u;
  v2 = a1[273];
  if ( v2 == 4 )
  {
    v3 = -1073741824;
    goto LABEL_5;
  }
  if ( v2 == 2 )
  {
    v3 = 0;
LABEL_5:
    a1[250] = v3;
  }
  a1[281] = 10;
  return 10;
}
