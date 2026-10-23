/* sub_606AAFCC
 * address: 0x606AAFCC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AAFCC(_DWORD *a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1

  a1[29] = -1027604480;
  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 216))(a1);
  result = 0;
  if ( v2 == 1 )
  {
    a1[1529] = a1[123];
    a1[1530] = a1[124];
    v4 = a1[28];
    a1[1531] = a1[27];
    a1[1532] = v4;
    return 1;
  }
  return result;
}
