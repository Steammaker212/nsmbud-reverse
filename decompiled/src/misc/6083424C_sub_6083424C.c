/* sub_6083424C
 * address: 0x6083424C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083424C(int a1)
{
  int v1; // r1
  int v3; // r2
  int v4; // r1
  int v5; // r0

  v1 = FIELD_U32(a1, 16);
  if ( v1 == 1 )
    return FIELD_U32(a1, 52);
  if ( v1 == 2 )
    return FIELD_U32(a1, 56);
  v3 = FIELD_U8(a1, 12);
  v4 = FIELD_U8(a1, 13);
  v5 = FIELD_U32(a1, 20);
  if ( v3 )
    v5 -= 2;
  return v4 * v5;
}
