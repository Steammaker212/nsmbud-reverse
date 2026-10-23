/* sub_602FE524
 * address: 0x602FE524   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FE524(int a1)
{
  int result; // r0

  sub_603005F4(a1, 0);
  FIELD_U32(a1, 13980) = ((10 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 10;
  result = ((100 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) | 0x80;
  FIELD_U32(a1, 13984) = result;
  return result;
}
