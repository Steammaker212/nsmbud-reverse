/* sub_6040806C
 * address: 0x6040806C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040806C(int a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  int v7; // r5
  int result; // r0

  v7 = 0;
  sub_60407E74(a1, a2, a3, a4, a5, 0);
  if ( FIELD_U32(a1, 231380) < 0x3Cu )
    v7 = FIELD_U32(a1, 231380);
  result = a1 + 3856 * v7;
  FIELD_U32(result, 3868) = a6;
  return result;
}
