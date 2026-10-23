/* sub_6078E8F8
 * address: 0x6078E8F8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078E8F8(_DWORD *a1)
{
  int v2; // r1
  unsigned int v3; // r2
  int result; // r0
  int v5; // r1

  v2 = a1[134];
  v3 = v2 & 0xFFFFFFFB;
  if ( a1[118] == 8 )
    v3 = v2 | 4;
  a1[134] = v3;
  result = sub_6078E940(a1, a1[6]);
  v5 = a1[73];
  if ( v5 )
    return sub_6078E940(a1, v5);
  return result;
}
