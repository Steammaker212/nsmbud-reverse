/* sub_604AB584
 * address: 0x604AB584   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AB584(_DWORD *a1)
{
  int v3; // [sp+4h] [bp-14h] BYREF

  sub_604AB640();
  v3 = 4;
  sub_604751FC((int)(a1 + 16), (int)(a1 + 69927), &dword_60CA1704, &v3);
  a1[6053] = a1[69927];
  a1[11192] = a1[69928];
  a1[16331] = a1[69929];
  a1[21470] = a1[69930];
  SE_SYS_BTN_GAME_START_ref(a1);
  sub_6047F3B4(a1 + 69417);
  sub_604AB9BC(a1);
  return CharacterSelectPosTmpHeap_ref_4ABACC(a1);
}
