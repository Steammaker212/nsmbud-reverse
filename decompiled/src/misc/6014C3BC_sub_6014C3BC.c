/* sub_6014C3BC
 * address: 0x6014C3BC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014C3BC(int a1)
{
  int result; // r0
  int v2; // r1
  int v3; // r2

  if ( (FIELD_U32(a1, 2224) & 0x10400) != 0x400 )
    return 0;
  v2 = FIELD_U32(a1, 2568);
  v3 = a1 + 56 * v2;
  result = 0;
  if ( v2 < 6 )
    return v3 + 3264;
  return result;
}
