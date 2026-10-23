/* sub_607C1AE4
 * address: 0x607C1AE4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_607C1AE4(int a1)
{
  int v2; // r1
  _BYTE *result; // r0
  int v4; // r1
  int v5; // [sp+4h] [bp-Ch] BYREF

  if ( sub_607868D4(a1 + 688, &v5) )
  {
    v2 = v5;
    FIELD_U32(a1, 80) = v5;
    FIELD_U32(a1, 160) = sub_60773F3C(a1, v2);
  }
  FIELD_U32(a1, 1208) &= ~0x400u;
  FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
  FIELD_U32(a1, 12100) = 0;
  if ( FIELD_U32(a1, 9940) )
  {
    result = (_BYTE *)(a1 + 12172);
  }
  else
  {
    v4 = FIELD_U32(a1, 1208);
    FIELD_U32(a1, 1208) = v4 & 0xFFFFE7FF | 0x800;
    result = (_BYTE *)(a1 + 12172);
    if ( FIELD_U8(a1, 12172) )
      FIELD_U32(a1, 1208) = v4 | 0x1800;
  }
  FIELD_U32(a1, 1228) &= 0xFFFDFBFF;
  FIELD_U32(a1, 1224) &= ~4u;
  *result = 0;
  return result;
}
