/* sub_6044198C
 * address: 0x6044198C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044198C(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  sub_6044FCD0(FIELD_U32(a1, 16), a2, a4, a5);
  sub_60450434(FIELD_U32(a1, 16), a2, FIELD_U32(a1, 20), 1);
  ++*(_DWORD *)(FIELD_U32(a1, 16) + 940);
  result = FIELD_U32(a1, 16);
  if ( FIELD_U32(result, 940) == FIELD_U32(result, 860) )
    return sub_6044F858();
  return result;
}
