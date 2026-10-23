/* sub_602E789C
 * address: 0x602E789C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_602E789C(int a1)
{
  unsigned int v1; // r2
  unsigned int *result; // r0
  int v3; // r1
  int v4; // t1
  unsigned int v5; // r3

  FIELD_U32(a1, 3192) &= ~0x80000000;
  FIELD_U32(a1, 3196) &= 0xFFFFFFFC;
  v1 = FIELD_U32(a1, 3188) & 0xFFFFFFFC;
  FIELD_U32(a1, 3180) &= 0xFFFFFFFC;
  FIELD_U32(a1, 3188) = v1;
  FIELD_U32(a1, 3204) &= 0xFFFFFFFC;
  FIELD_U8(a1, 7532) = 0;
  LOWORD(v1) = -7420;
  if ( !FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 0;
  HIWORD(v1) = -1;
  v4 = FIELD_U32(a1, 7440);
  result = (unsigned int *)(a1 + 7440);
  v3 = v4;
  v5 = v4 & 0xFFFFFFFD;
  if ( (*(unsigned int *)((char *)result + v1) & 0x1000) == 0 )
    v5 = v3 | 2;
  *result = v5;
  return result;
}
