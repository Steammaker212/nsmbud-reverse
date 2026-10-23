/* sub_608BC970
 * address: 0x608BC970   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC970(int a1)
{
  unsigned __int16 *v1; // r0
  int v2; // r1

  v1 = (unsigned __int16 *)(a1 + 16);
  do
  {
    v2 = v1[2];
    v1 += 6;
  }
  while ( v2 != 0x4000 );
  return *(_DWORD *)v1;
}
