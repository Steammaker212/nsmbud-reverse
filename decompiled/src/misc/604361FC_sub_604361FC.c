/* sub_604361FC
 * address: 0x604361FC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604361FC(int a1, unsigned int a2, int a3)
{
  _DWORD *v6; // r1
  int result; // r0

  sub_604511B4(a3, a1, a2);
  v6 = *(_DWORD **)(a1 + 148);
  result = 1;
  if ( FIELD_U32(a1, 144) > a2 )
    v6 += a2;
  *v6 = a3;
  FIELD_U8(a1, 436) = 1;
  return result;
}
