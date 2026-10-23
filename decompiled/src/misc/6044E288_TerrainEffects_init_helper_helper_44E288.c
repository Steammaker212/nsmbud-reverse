/* TerrainEffects_init_helper_helper_44E288
 * address: 0x6044E288   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainEffects_init_helper_helper_44E288(_DWORD *a1, int a2, int a3, int a4)
{
  __int16 v7; // [sp+0h] [bp-80h] BYREF
  int v8; // [sp+4h] [bp-7Ch]
  char v9; // [sp+29h] [bp-57h]
  char v10; // [sp+2Bh] [bp-55h]
  __int16 v11; // [sp+58h] [bp-28h]

  sub_60450C78(dword_60C9CEF0, a3, a4, 6);
  a1[172] = a2;
  a1[173] = a2 + 272;
  a1[174] = a2 + 544;
  a1[175] = a2 + 816;
  a1[176] = a2 + 1088;
  a1[177] = a2 + 1360;
  a1[178] = a2 + 1632;
  a1[179] = a2 + 1904;
  a1[180] = a2 + 2176;
  a1[181] = a2 + 2448;
  a1[182] = a2 + 2720;
  a1[183] = a2 + 2992;
  sub_6090B350(&v7);
  v8 |= 1u;
  v9 = 5;
  v10 = 6;
  v7 = 0;
  v11 = 260;
  sub_60450C98(dword_60C9CEF0, &v7, 6);
  return 1;
}
