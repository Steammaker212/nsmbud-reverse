/* sub_601C7BE4
 * address: 0x601C7BE4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C7BE4(_DWORD *a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1

  v2 = sub_601860F8((int)a1);
  result = 0;
  if ( v2 == 1 )
  {
    sub_601C6044((int)a1, a1 + 258);
    sub_60169018(a1);
    a1[23] = a1[20];
    a1[24] = a1[21];
    a1[25] = a1[22];
    a1[273] = 6;
    if ( sub_601916F4(dword_60C8996C) == 11 )
      v4 = 9;
    else
      v4 = 0;
    (*(void (__fastcall **)(_DWORD *, int, int, float))(*a1 + 336))(a1, v4, -1, 0.0);
    sub_601C503C(a1);
    return 1;
  }
  return result;
}
