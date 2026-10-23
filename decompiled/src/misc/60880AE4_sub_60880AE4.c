/* sub_60880AE4
 * address: 0x60880AE4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60880AE4(int a1)
{
  _BOOL4 result; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r12

  result = 0;
  v3 = FIELD_U32(a1, 116);
  if ( FIELD_U8(v3, 10) )
  {
    v4 = FIELD_U32(v3, 540);
    if ( v4 >= 0 )
    {
      v5 = FIELD_U32(a1, 136);
      if ( FIELD_F32(a1, 68) >= (float)((float)(FIELD_F32(a1, 100) + (float)FIELD_S32(v5, 2232)) + (float)v4) )
        return FIELD_U8(v5, 1874) || FIELD_U32(a1, 44) <= 0;
    }
  }
  return result;
}
