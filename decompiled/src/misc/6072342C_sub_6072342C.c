/* sub_6072342C
 * address: 0x6072342C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072342C(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r0
  int v5; // t1

  if ( FIELD_U8(a2, 3106) )
  {
    result = word_60B09FAC[FIELD_U8(a2, 3106) - 1];
  }
  else
  {
    v4 = FIELD_U32(a2, 3072);
    v5 = *(unsigned __int8 *)(v4 + a3);
    FIELD_U16(a2, 3088) = v5;
    result = v5 | (*(unsigned __int8 *)(v4 + a3 + 1) << 8);
  }
  FIELD_U16(a2, 3088) = result;
  return result;
}
