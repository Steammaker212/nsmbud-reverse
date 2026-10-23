/* sub_608494F8
 * address: 0x608494F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608494F8(_BYTE *a1)
{
  int result; // r0
  int v3; // r5
  int v4; // t1

  if ( *a1 )
    sub_60835494((int)a1);
  if ( a1[72] )
    sub_60835494((int)(a1 + 72));
  v4 = (unsigned __int8)a1[144];
  v3 = (int)(a1 + 144);
  result = v4;
  if ( v4 )
    return sub_60835494(v3);
  return result;
}
