/* sub_6070B2B4
 * address: 0x6070B2B4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070B2B4(int result)
{
  _WORD *v1; // r1
  int v2; // r2
  bool v3; // zf
  __int16 v4; // r2

  v1 = (_WORD *)(result + 6104);
  v2 = FIELD_U16(result, 6104);
  v3 = v2 == 0;
  if ( FIELD_U16(result, 6104) )
  {
    v4 = v2 - 1;
    *v1 = v4;
    v3 = v4 == 0;
  }
  if ( v3 )
  {
    *v1 = FIELD_U16(result, 6114);
    JUMPOUT(0x6070B478);
  }
  return result;
}
