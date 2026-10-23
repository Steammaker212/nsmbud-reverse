/* sub_606B89A4
 * address: 0x606B89A4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B89A4(int a1)
{
  int v1; // r2
  int v2; // r2
  int v3; // r2
  int v4; // r2

  v1 = FIELD_U32(a1, 7232);
  if ( v1 >= 1 )
    FIELD_U32(a1, 7232) = v1 - 1;
  v2 = FIELD_U32(a1, 7236);
  if ( v2 >= 1 )
    FIELD_U32(a1, 7236) = v2 - 1;
  v3 = FIELD_U32(a1, 7240);
  if ( v3 >= 1 )
    FIELD_U32(a1, 7240) = v3 - 1;
  v4 = FIELD_U32(a1, 7244);
  if ( v4 >= 1 )
    FIELD_U32(a1, 7244) = v4 - 1;
  return sub_606B62C8(a1);
}
