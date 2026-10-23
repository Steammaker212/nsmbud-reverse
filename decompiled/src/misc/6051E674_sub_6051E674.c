/* sub_6051E674
 * address: 0x6051E674   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051E674(int result)
{
  int v1; // r1
  _WORD *v2; // r1
  int v3; // r2
  bool v4; // zf
  __int16 v5; // r2

  v1 = dword_60CC6484;
  FIELD_F32(result, 3624) = FIELD_F32(dword_60CC6484, 48) + -48.0;
  FIELD_F32(result, 3628) = FIELD_F32(v1, 44) + 16.0;
  FIELD_U32(result, 3632) = 0;
  v2 = (_WORD *)(result + 3554);
  v3 = FIELD_U16(result, 3554);
  v4 = v3 == 0;
  if ( FIELD_U16(result, 3554) )
  {
    v5 = v3 - 1;
    *v2 = v5;
    v4 = v5 == 0;
  }
  if ( v4 )
  {
    FIELD_U8(result, 3552) ^= 1u;
    *v2 = 45;
    return 45;
  }
  return result;
}
