/* sub_608BBE6C
 * address: 0x608BBE6C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BBE6C(int a1, int a2)
{
  sub_608AED28((_DWORD *)a1);
  *(_DWORD *)a1 = off_60C5B1A0;
  FIELD_U32(a1, 440) = a2;
  FIELD_U32(a1, 428) = a1 + 428;
  FIELD_U32(a1, 432) = a1 + 428;
  memset((void *)(a1 + 444), 0, 128);
  FIELD_U8(a1, 574) = 0;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 588) = 0;
  sub_608BD0E4(a1 + 640);
  return a1;
}
