/* sub_60793D04
 * address: 0x60793D04   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60793D04(int a1, unsigned int a2)
{
  int v2; // r0
  unsigned int v3; // r2
  int v4; // r0

  v2 = FIELD_U32(a1, 24);
  v3 = FIELD_U32(v2, 8);
  v4 = FIELD_U32(v2, 12);
  if ( v3 > a2 )
    v4 += 4 * a2;
  return *(float *)(*(_DWORD *)v4 + 20);
}
