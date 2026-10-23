/* sub_60407D28
 * address: 0x60407D28   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60407D28(int a1)
{
  int v1; // r4
  int v2; // r5
  int result; // r0

  v1 = a1 + 16;
  v2 = 60;
  do
  {
    result = sub_6054E35C(v1);
    --v2;
    v1 += 3856;
  }
  while ( v2 );
  return result;
}
