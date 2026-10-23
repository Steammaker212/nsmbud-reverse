/* sub_60908A44
 * address: 0x60908A44   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60908A44(int result, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r0

  v2 = FIELD_U32(result, 120);
  if ( (unsigned int)(v2 - 3) >= 2 )
  {
    v3 = result + 28;
    if ( v2 == 1 )
      FIELD_U32(result, 120) = 2;
    v4 = FIELD_U32(result, 112);
    v5 = result + 28;
    if ( a2 == 1 )
      return sub_60912F10(v5, v4, 0, v3);
    else
      return sub_60912EA4(v5);
  }
  return result;
}
