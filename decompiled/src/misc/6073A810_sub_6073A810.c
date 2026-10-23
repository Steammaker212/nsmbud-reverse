/* sub_6073A810
 * address: 0x6073A810   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073A810(int a1)
{
  unsigned int v2; // r6

  FIELD_U8(a1, 6102) = 0;
  FIELD_U8(a1, 6113) = 0;
  FIELD_U16(a1, 6100) = 1;
  v2 = FIELD_U8(a1, 6108);
  FIELD_U8(a1, 6114) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) * (unsigned __int64)v2) >> 32;
  FIELD_U8(a1, 6115) = 0;
  return sub_6073B6B0(a1);
}
