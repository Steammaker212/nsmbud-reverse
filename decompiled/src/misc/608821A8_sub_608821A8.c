/* sub_608821A8
 * address: 0x608821A8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608821A8(int a1)
{
  unsigned int v1; // r4
  void *v2; // r0

  v1 = (4 * a1 + 31) & 0xFFFFFFE0;
  dword_60CC7FF8 = a1;
  v2 = (void *)(*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)dword_60CC7FE4 + 8))(dword_60CC7FE4, v1, 128);
  dword_60CC7FE0 += v1;
  dword_60CC7FF0 = (int)v2;
  memset(v2, 0, 4 * dword_60CC7FF8);
  dword_60CC7FF4 = 0;
  return &dword_60CC7FF4;
}
