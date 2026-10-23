/* sub_60836284
 * address: 0x60836284   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60836284(int result, unsigned int a2)
{
  __int16 v2; // r2
  int v3; // r1

  v2 = a2;
  v3 = (a2 >> 6) & 0x48;
  if ( (v2 & 0x4020) != 0 )
    v3 |= 0x10u;
  if ( (v2 & 0x2050) != 0 )
    v3 |= 0x20u;
  if ( v3 )
    return dword_60CC7970(FIELD_U32(result, 184), v3);
  return result;
}
