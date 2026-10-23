/* sub_6088203C
 * address: 0x6088203C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088203C(int a1, int a2)
{
  unsigned int v2; // r4
  int result; // r0

  v2 = (a1 + 31) & 0xFFFFFFE0;
  result = (*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)dword_60CC7FE4 + 8))(dword_60CC7FE4, v2, a2);
  dword_60CC7FE0 += v2;
  return result;
}
