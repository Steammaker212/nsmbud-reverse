/* sub_608E2A74
 * address: 0x608E2A74   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2A74(int a1, int a2)
{
  int v3; // r4
  int v4; // r0

  v3 = sub_608E78F8(a1, a2);
  v4 = nn__fs__FlushFile(*(_DWORD *)v3);
  FIELD_U32(a1, 80) = v4;
  if ( !v4 )
    return 1;
  FIELD_U8(v3, 17) = 1;
  return 0;
}
