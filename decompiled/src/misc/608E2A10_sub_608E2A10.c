/* sub_608E2A10
 * address: 0x608E2A10   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2A10(int a1, int a2)
{
  int v3; // r5
  int v5; // r0

  v3 = sub_608E78F8(a1, a2);
  if ( FIELD_U8(v3, 16) && !FIELD_U8(v3, 17) && (v5 = nn__fs__FlushFile(*(_DWORD *)v3)) != 0 )
  {
    FIELD_U32(a1, 80) = v5;
    nn__fs__CloseFile();
    return 0;
  }
  else
  {
    nn__fs__CloseFile();
    FIELD_U32(a1, 80) = 0;
    return 1;
  }
}
