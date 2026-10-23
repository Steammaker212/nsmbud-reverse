/* sub_609089AC
 * address: 0x609089AC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609089AC(_DWORD *a1)
{
  int v2; // r1
  _DWORD *v3; // r5
  int v4; // r1
  int result; // r0

  v2 = a1[27];
  v3 = a1 + 7;
  while ( 1 )
  {
    v4 = sub_60912EC0(v3, v2);
    result = a1[28];
    if ( v4 == result )
      break;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
    v2 = a1[27];
  }
  return result;
}
