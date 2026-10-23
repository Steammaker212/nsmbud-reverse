/* sub_603F7BC8
 * address: 0x603F7BC8   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F7BC8(int a1)
{
  int i; // r5
  int v3; // r7
  __int16 v4; // r0
  int result; // r0

  for ( i = 0; i != 2400; i += 8 )
  {
    v3 = a1 + i;
    *(_BYTE *)v3 = off_60C5CB00(*(unsigned __int8 *)(a1 + i));
    FIELD_U8(v3, 1) = off_60C5CB00(*(unsigned __int8 *)(a1 + i + 1));
    FIELD_U16(v3, 4) = off_60C5CB08(*(unsigned __int16 *)(a1 + i + 4));
    v4 = off_60C5CB08(*(unsigned __int16 *)(a1 + i + 6));
    FIELD_U16(v3, 6) = v4;
  }
  FIELD_U8(a1, 2400) = off_60C5CB00(FIELD_U8(a1, 2400));
  FIELD_U8(a1, 2401) = off_60C5CB00(FIELD_U8(a1, 2401));
  FIELD_U32(a1, 2404) = off_60C5CB10(FIELD_U32(a1, 2404));
  FIELD_U32(a1, 2408) = off_60C5CB10(FIELD_U32(a1, 2408));
  FIELD_U8(a1, 2412) = off_60C5CB00(FIELD_U8(a1, 2412));
  FIELD_U8(a1, 2413) = off_60C5CB00(FIELD_U8(a1, 2413));
  FIELD_U32(a1, 2416) = off_60C5CB10(FIELD_U32(a1, 2416));
  FIELD_U32(a1, 2420) = off_60C5CB10(FIELD_U32(a1, 2420));
  FIELD_U8(a1, 2424) = off_60C5CB00(FIELD_U8(a1, 2424));
  FIELD_U8(a1, 2425) = off_60C5CB00(FIELD_U8(a1, 2425));
  FIELD_U32(a1, 2428) = off_60C5CB10(FIELD_U32(a1, 2428));
  result = off_60C5CB10(FIELD_U32(a1, 2432));
  FIELD_U32(a1, 2432) = result;
  return result;
}
