/* sub_606A1ECC
 * address: 0x606A1ECC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A1ECC(_DWORD *a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r2

  ((void (__fastcall *)(_DWORD *))loc_606BBA3C)(a1 + 1974);
  result = ((int (__fastcall *)(_DWORD *, _DWORD *))loc_6069B070)(a1 + 1964, a1 + 27);
  if ( result == 1 )
  {
    v3 = a1[27];
    v4 = a1[28];
    v5 = a1[29];
    a1[146] = v3;
    a1[147] = v4;
    a1[148] = v5;
    a1[152] = v3;
    a1[153] = v4;
    a1[154] = v5;
    return sub_60160948(a1 + 1800);
  }
  return result;
}
