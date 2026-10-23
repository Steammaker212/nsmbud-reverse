/* sub_604ABEA8
 * address: 0x604ABEA8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ABEA8(int a1)
{
  int v1; // r5
  int v2; // r4
  int result; // r0

  v1 = 61;
  v2 = a1 + 95256;
  do
  {
    result = sub_6040349C(v2);
    v2 += 2988;
    --v1;
  }
  while ( v1 );
  return result;
}
