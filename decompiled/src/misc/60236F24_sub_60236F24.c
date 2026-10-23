/* sub_60236F24
 * address: 0x60236F24   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60236F24(unsigned int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r5
  int result; // r0

  v5 = FIELD_U32(dword_60C8D9DC, 2308);
  if ( a1 <= 3 )
    FIELD_U32(dword_60C8D9DC, 2308) = a1;
  result = sub_602372C0(a2, a3, a4, a5);
  FIELD_U32(dword_60C8D9DC, 2308) = v5;
  return result;
}
