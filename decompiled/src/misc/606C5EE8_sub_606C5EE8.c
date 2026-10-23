/* sub_606C5EE8
 * address: 0x606C5EE8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C5EE8(unsigned int a1)
{
  unsigned int v1; // r4
  unsigned int v2; // r5
  int result; // r0

  v1 = a1;
  v2 = a1 + 1016;
  do
  {
    result = sub_606C59CC(v1);
    v1 += 8;
  }
  while ( v1 <= v2 );
  return result;
}
