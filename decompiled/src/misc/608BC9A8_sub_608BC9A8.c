/* sub_608BC9A8
 * address: 0x608BC9A8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC9A8(int a1)
{
  int v1; // r1
  int v2; // r2
  bool v3; // zf

  v1 = a1 + 12;
  do
  {
    v2 = v1 + 12;
    v3 = FIELD_U16(v1, 8) == 16385;
    v1 += 12;
  }
  while ( !v3 );
  return *(_DWORD *)v2;
}
