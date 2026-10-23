/* sub_602EC670
 * address: 0x602EC670   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_602EC670(int a1)
{
  int v1; // r3
  int *result; // r0
  int v3; // t1

  if ( FIELD_F32(a1, 116) > 3300.0 )
    FIELD_U32(a1, 116) = 1162756096;
  FIELD_U32(a1, 120) = dword_60AF2038[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  if ( FIELD_U8(a1, 6780) )
  {
    FIELD_U32(a1, 6252) = 0;
    FIELD_U32(a1, 6240) |= 0x1000u;
  }
  FIELD_U32(a1, 3192) |= 0x40000200u;
  FIELD_U32(a1, 3200) |= 0x4000200u;
  v1 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x4000200u;
  FIELD_U32(a1, 3184) = v1 | 0x4000200;
  v3 = FIELD_U32(a1, 7440);
  result = (int *)(a1 + 7440);
  *result = v3 | 1;
  return result;
}
