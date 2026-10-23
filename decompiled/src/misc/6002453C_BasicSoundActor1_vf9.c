/* BasicSoundActor1_vf9
 * address: 0x6002453C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BasicSoundActor1_vf9(int a1, const char *a2, float *a3, int a4)
{
  float v4; // s2
  float v6[4]; // [sp+0h] [bp-10h] BYREF

  v4 = (float)((float)(a3[1] - FIELD_F32(dword_60CC6484, 128)) + (float)(a3[1] - FIELD_F32(dword_60CC6484, 128)))
     / FIELD_F32(dword_60CC6484, 108);
  v6[0] = (float)((float)(*a3 - FIELD_F32(dword_60CC6484, 116)) + (float)(*a3 - FIELD_F32(dword_60CC6484, 116)))
        / FIELD_F32(dword_60CC6484, 104);
  v6[1] = v4;
  return BasicSoundActor1_playSound(a1, a2, (int)v6, a4);
}
