/* sub_60407280
 * address: 0x60407280   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60407280(int a1)
{
  int v1; // r2
  int v2; // r1
  int v3; // r3

  v1 = 0;
  v2 = 0;
  do
  {
    v3 = a1 + 16 * v1;
    v1 += 2;
    v2 += ((FIELD_U32(v3, 36) >> 1) & 1) + ((FIELD_U32(v3, 20) >> 1) & 1);
  }
  while ( v1 != 32 );
  return v2;
}
