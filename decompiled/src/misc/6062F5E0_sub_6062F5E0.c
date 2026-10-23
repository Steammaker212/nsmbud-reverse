/* sub_6062F5E0
 * address: 0x6062F5E0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062F5E0(int result)
{
  int v1; // r1
  int v2; // r2

  v1 = FIELD_U32(result, 20);
  v2 = (__int16)(v1 >> 4);
  if ( !(unsigned __int16)((unsigned int)v1 >> 4) )
    v2 = 120;
  FIELD_U32(result, 6104) = v2;
  return result;
}
