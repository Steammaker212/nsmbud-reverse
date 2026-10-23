/* sub_60503448
 * address: 0x60503448   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60503448(int result)
{
  int v1; // r1
  bool v2; // zf
  unsigned int v3; // r2

  v1 = FIELD_U32(result, 68);
  v2 = v1 == 0;
  if ( v1 )
    v2 = FIELD_U8(v1, 208) == 0;
  if ( !v2 )
  {
    v3 = FIELD_U32(result, 724);
    if ( v3 != 25 )
      return sub_6040200C(dword_60C99E68, v1, v3);
  }
  return result;
}
