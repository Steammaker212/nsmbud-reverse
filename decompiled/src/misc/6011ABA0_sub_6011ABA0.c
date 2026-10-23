/* sub_6011ABA0
 * address: 0x6011ABA0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011ABA0(int result)
{
  _DWORD *v1; // r2
  int v2; // r3
  unsigned int v3; // r1
  unsigned int v4; // r2

  FIELD_U8(result, 535) = 1;
  v1 = *(_DWORD **)(result + 7656);
  v2 = v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += 4 * v4;
  *(_DWORD *)(*(_DWORD *)v2 + 24) = 1065353216;
  FIELD_U32(result, 9196) = 1;
  return result;
}
