/* sub_6081F038
 * address: 0x6081F038   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F038(int result, char a2, int a3)
{
  bool v3; // zf
  int v4; // r2
  int v5; // r1
  int v6; // r1

  v3 = a3 == 1;
  v4 = FIELD_U32(result, 756);
  v5 = 1 << a2;
  if ( v3 )
    v6 = v4 | v5;
  else
    v6 = v4 & ~v5;
  FIELD_U32(result, 756) = v6;
  return result;
}
