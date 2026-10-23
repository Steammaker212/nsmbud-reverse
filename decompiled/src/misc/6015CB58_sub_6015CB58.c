/* sub_6015CB58
 * address: 0x6015CB58   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015CB58(int a1, unsigned __int16 *a2)
{
  int v3; // r1

  v3 = *a2;
  if ( v3 == 2 )
  {
    sub_6015CD5C(a1, *((_DWORD *)a2 + 2), FIELD_U32(a1, 4));
  }
  else if ( v3 == 3 )
  {
    sub_6015CB9C(a1, *((_DWORD *)a2 + 2), FIELD_U32(a1, 4));
    return 0;
  }
  return 0;
}
