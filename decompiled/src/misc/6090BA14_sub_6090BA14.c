/* sub_6090BA14
 * address: 0x6090BA14   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090BA14(int a1, int a2)
{
  char v4; // r4
  int i; // r7
  _BYTE v7[40]; // [sp+8h] [bp-28h] BYREF

  v4 = 0;
  for ( i = 0; i != 8; ++i )
  {
    dword_60CC76D0(
      v7,
      i,
      (FIELD_U32(a1, 28) >> v4) & 1,
      (FIELD_U32(a1, 28) >> v4 >> 1) & 1,
      (FIELD_U32(a1, 28) >> v4 >> 2) & 1,
      (FIELD_U32(a1, 28) >> v4 >> 3) & 1);
    v4 += 4;
  }
  return dword_60CC77FC(FIELD_U32(a2, 192), v7);
}
