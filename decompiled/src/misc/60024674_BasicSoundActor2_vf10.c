/* BasicSoundActor2_vf10
 * address: 0x60024674   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BasicSoundActor2_vf10(int a1, int a2, float *a3, int a4, int a5)
{
  float v5; // s2
  float v7[4]; // [sp+8h] [bp-10h] BYREF

  v5 = (float)((float)(a3[1] - FIELD_F32(dword_60CC6484, 128)) + (float)(a3[1] - FIELD_F32(dword_60CC6484, 128)))
     / FIELD_F32(dword_60CC6484, 108);
  v7[0] = (float)((float)(*a3 - FIELD_F32(dword_60CC6484, 116)) + (float)(*a3 - FIELD_F32(dword_60CC6484, 116)))
        / FIELD_F32(dword_60CC6484, 104);
  v7[1] = v5;
  return sub_60813BDC(a1, a2, v7, a4, a5);
}
