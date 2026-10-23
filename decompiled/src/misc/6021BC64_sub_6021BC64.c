/* sub_6021BC64
 * address: 0x6021BC64   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021BC64(int result, char a2)
{
  _DWORD *v2; // r2

  if ( FIELD_U8(result, 1441) )
  {
    if ( ((a2 & 1) != 0 || (v2 = (_DWORD *)(result + 1200), FIELD_F32(result, 1200) >= 0.0))
      && ((a2 & 2) != 0 || (v2 = (_DWORD *)(result + 1200), FIELD_F32(result, 1200) <= 0.0))
      && ((a2 & 4) != 0 || (v2 = (_DWORD *)(result + 1192), FIELD_F32(result, 1192) >= 0.0)) )
    {
      if ( (a2 & 8) == 0 && FIELD_F32(result, 1192) > 0.0 )
        FIELD_U32(result, 1192) = 0;
    }
    else
    {
      *v2 = 0;
    }
    if ( FIELD_F32(result, 1200) == 0.0 && FIELD_F32(result, 1192) == 0.0 )
    {
      FIELD_U8(result, 1441) = 0;
      FIELD_U32(result, 1180) = 0;
      FIELD_U32(result, 1184) = 0;
      FIELD_U32(result, 1188) = 0;
      FIELD_U32(result, 1192) = 0;
      FIELD_U32(result, 1196) = 0;
      FIELD_U32(result, 1200) = 0;
    }
  }
  return result;
}
