/* sub_6057FA28
 * address: 0x6057FA28   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057FA28(_DWORD *a1)
{
  int result; // r0
  int v3; // [sp+4h] [bp-Ch] BYREF

  v3 = 0;
  result = sub_6057AAC0((int)a1, &v3);
  if ( result == 1 )
  {
    sub_6057AF70(a1);
    a1[1510] = 1065353216;
    return 6040;
  }
  return result;
}
