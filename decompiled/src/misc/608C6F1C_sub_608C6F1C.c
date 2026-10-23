/* sub_608C6F1C
 * address: 0x608C6F1C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608C6F1C(unsigned int result, int a2)
{
  int v2; // r2
  int v3; // r2
  unsigned int v4; // r0
  unsigned int v5; // r2

  if ( !a2 )
    return result;
  if ( a2 == 1 )
    return 2 * result;
  v2 = 0;
  if ( a2 != 2 )
    return v2;
  v3 = (2454267027u * (unsigned __int64)(result >> 1)) >> 32;
  v4 = result % 0xE;
  v5 = (2 * v3) & 0xFFFFFFF8;
  if ( v4 )
    return (v5 | 1) + ((v4 + 1) >> 1);
  return v5;
}
