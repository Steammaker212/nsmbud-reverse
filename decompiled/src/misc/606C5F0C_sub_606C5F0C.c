/* sub_606C5F0C
 * address: 0x606C5F0C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C5F0C(unsigned int a1)
{
  unsigned int v1; // r4
  int v2; // r5
  unsigned int v3; // r6

  v1 = a1;
  v2 = 0;
  v3 = a1 + 1016;
  do
  {
    if ( sub_606C5A90(v1) )
      v2 += sub_606C5AA0(v1);
    v1 += 8;
  }
  while ( v1 <= v3 );
  return v2;
}
