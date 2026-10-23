/* sub_601B788C
 * address: 0x601B788C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601B788C(int a1)
{
  unsigned int result; // r0

  FIELD_U8(a1, 664) = 0;
  FIELD_U8(a1, 776) = 0;
  sub_601BA0F8(a1, 0, 0.0, 0.0);
  FIELD_U8(a1, 280) = 0;
  result = FIELD_U32(a1, 1108) & 0xFFFFFFFC;
  FIELD_U32(a1, 1108) = result;
  return result;
}
