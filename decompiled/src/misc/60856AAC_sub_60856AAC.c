/* sub_60856AAC
 * address: 0x60856AAC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60856AAC(int a1, int a2, int a3)
{
  int result; // r0
  _BYTE v6[44]; // [sp+4h] [bp-2Ch] BYREF

  result = FIELD_U32(a1, 12);
  if ( result )
  {
    sub_60859A1C(v6, a2, a1);
    return sub_608596E8(FIELD_U32(a1, 12), v6, a3);
  }
  return result;
}
