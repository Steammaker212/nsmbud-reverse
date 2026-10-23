/* sub_603FB964
 * address: 0x603FB964   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FB964(int a1, unsigned int a2)
{
  int result; // r0
  int v3; // r1
  int v4; // r2

  if ( FIELD_U32(a1, 764) == 1 )
    a2 = 0;
  if ( a2 >= 6 )
    a2 = 0;
  result = a1 + 72 * a2;
  v3 = FIELD_U32(result, 296);
  v4 = v3 + 1;
  if ( v3 + 1 >= 99 )
    v4 = 99;
  if ( v3 < -1 )
    v4 = 0;
  FIELD_U32(result, 296) = v4;
  return result;
}
