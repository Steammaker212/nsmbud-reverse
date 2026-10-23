/* sub_6073DDC4
 * address: 0x6073DDC4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073DDC4(int a1)
{
  int result; // r0

  sub_605D847C((_DWORD *)a1);
  ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(a1 + 6064, 1, 3.0, 1.4, 0.0);
  FIELD_F32(a1, 120) = (float)byte_60B0594C[FIELD_U32(a1, 80)] * 0.7;
  result = ((80 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 30;
  FIELD_U16(a1, 8042) = result;
  return result;
}
