/* sub_6051EA6C
 * address: 0x6051EA6C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051EA6C(int a1)
{
  int v1; // r0
  int v2; // t1
  int result; // r0

  v2 = FIELD_U32(a1, 3696);
  v1 = a1 + 3696;
  FIELD_U8(v2, 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(v1, 4) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(v1, 8) + 64) &= ~1u;
  result = *(_DWORD *)(v1 + 4 * FIELD_U8(v1, 11332));
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
