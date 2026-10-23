/* sub_605597FC
 * address: 0x605597FC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605597FC(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r3

  if ( FIELD_U8(a1, 3624) )
    --FIELD_U32(a1, 3620);
  if ( FIELD_U8(a1, 3626) )
    *(_BYTE *)(FIELD_U32(a1, 20) + 64) |= 1u;
  result = *(unsigned __int8 *)(FIELD_U32(a1, 20) + 64);
  if ( (result & 1) != 0 )
  {
    v3 = FIELD_U32(a1, 3620);
    if ( v3 < 0 )
    {
      v3 = 0;
      FIELD_U32(a1, 3620) = 0;
    }
    v4 = v3 / 60;
    FIELD_U32(a1, 3612) = v3 / 60;
    if ( v3 / 60 != FIELD_U32(a1, 3616) )
    {
      FIELD_U32(a1, 3616) = v4;
      sub_60473DE4((_DWORD *)(a1 + 64), 0, &dword_60CAD934, 0);
      v4 = FIELD_U32(a1, 3612);
    }
    return sub_6047DEC8((_DWORD *)(a1 + 64), FIELD_U32(a1, 24), 1, v4);
  }
  return result;
}
