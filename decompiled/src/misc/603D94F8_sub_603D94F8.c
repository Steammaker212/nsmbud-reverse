/* sub_603D94F8
 * address: 0x603D94F8   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D94F8(int a1)
{
  char v1; // r12
  int v3; // r6
  float v4; // s0
  float v5; // s2
  float *v6; // r0
  float v7; // s0
  float v8; // s16
  float v9; // s18
  float v10; // s0

  if ( ((unsigned int)&dword_60C99124[3] & ~(1614648600 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C99124[3]) )
  {
    dword_60C99154[0] = 218103808;
    dword_60C99154[1] = 0x20000000;
    dword_60C99154[2] = 872415232;
    dword_60C99160 = 872415232;
    dword_60C99164 = 0x20000000;
    dword_60C99168 = 218103808;
    _cxa_guard_release(&dword_60C99124[3]);
  }
  v3 = FIELD_U32(a1, 11844);
  FIELD_U32(a1, 11868) = -dword_60C99154[v3];
  v4 = sub_603DAD24(a1 + 11872);
  v5 = (float)(dword_60C99154[FIELD_U32(a1, 11844)] & 0xFFFFFF) * 0.000000059605;
  v6 = (float *)((char *)sinLutTable + ((dword_60C99154[FIELD_U32(a1, 11844)] >> 20) & 0xFF0));
  v7 = v4 + 14.0;
  v8 = (float)(FIELD_F32(a1, 11756) + (float)(v7 * (float)(*v6 + (float)(v6[1] * v5)))) - FIELD_F32(a1, 112);
  v9 = (float)(FIELD_F32(a1, 11752)
             + (float)(v7 * (float)(*(float *)&dword_60AF1F60[v3 > 2] * (float)(v6[2] + (float)(v5 * v6[3])))))
     - FIELD_F32(a1, 108);
  v10 = sqrtf((float)(v8 * v8) + (float)(v9 * v9));
  FIELD_F32(a1, 11824) = v9 / v10;
  FIELD_F32(a1, 11828) = v8 / v10;
  return a1 + 11828;
}
