/* sub_605CCB3C
 * address: 0x605CCB3C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605CCB3C(int a1)
{
  unsigned int *v2; // r5
  unsigned int result; // r0

  v2 = (unsigned int *)(a1 + 6124);
  FIELD_U32(a1, 6124) &= 0xFFFFFFCF;
  sub_600009FC((StageActor *)a1);
  FIELD_U8(a1, 6056) = 2;
  result = *v2 & 0xFFFFFFF7;
  *v2 = result;
  return result;
}
