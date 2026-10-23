/* sub_608B2030
 * address: 0x608B2030   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2030(int a1)
{
  int result; // r0
  int v3; // r1
  char v4; // r2
  int v5; // t1

  result = 1;
  v5 = FIELD_U32(a1, 12);
  v3 = a1 + 12;
  v4 = v5;
  if ( (v5 & 2) != 0 )
  {
    result = *(unsigned __int8 *)(v3 + 4 * (v4 & 1) + 5);
    if ( *(_BYTE *)(v3 + 4 * (v4 & 1) + 5) )
      return 1;
  }
  return result;
}
