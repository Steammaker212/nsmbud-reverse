/* SE_EMY_SHADOW_JITABATA_ref_2_helper_377D44
 * address: 0x60377D44   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SHADOW_JITABATA_ref_2_helper_377D44(int a1, int a2)
{
  int v2; // r4
  _DWORD v4[3]; // [sp+0h] [bp-18h] BYREF
  char v5; // [sp+Ch] [bp-Ch]

  v4[0] = a2;
  v2 = a1 + 220;
  v4[1] = 2;
  v4[2] = 0;
  v5 = 0;
  sub_603E7690(a1 + 220, v4);
  return sub_603E552C(dword_60C995D0, v2);
}
