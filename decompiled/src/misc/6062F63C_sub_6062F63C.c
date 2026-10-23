/* sub_6062F63C
 * address: 0x6062F63C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062F63C(_DWORD *a1)
{
  int *v2; // r1
  int v3; // r5
  unsigned int v4; // r6
  int v5; // r7
  unsigned __int64 v6; // r0
  int result; // r0

  v2 = (int *)((char *)&unk_60C125DC + 12 * a1[1532]);
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) * (unsigned __int64)v4;
  a1[1527] = HIDWORD(v6);
  a1[1528] = 0;
  result = *(_DWORD *)(v5 + 12 * HIDWORD(v6) * v3 + 4);
  a1[1530] = result;
  return result;
}
