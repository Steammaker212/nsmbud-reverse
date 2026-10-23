/* sub_6025A6AC
 * address: 0x6025A6AC   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025A6AC(int a1)
{
  void *v2; // r5
  int v3; // r8
  unsigned int U32; // r6
  unsigned int v5; // r0
  int v6; // t1

  v2 = (void *)(dword_60C9CF0C + 1340);
  v3 = (((9LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 4) - 0x40000000) & 0xF0000000;
  U32 = sead__Random__getU32(v2);
  v5 = sead__Random__getU32(v2);
  FIELD_U32(a1, 156) = v3;
  FIELD_U32(a1, 160) = (((9LL * U32) >> 4) - 0x40000000) & 0xF0000000;
  FIELD_U32(a1, 164) = (((9LL * v5) >> 4) - 0x40000000) & 0xF0000000;
  v6 = FIELD_U16(a1, 6364);
  FIELD_U16(a1, 6364) = v6 | 3;
  return v6 | 3;
}
