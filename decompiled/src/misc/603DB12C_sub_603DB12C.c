/* sub_603DB12C
 * address: 0x603DB12C   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603DB12C(int a1)
{
  char v1; // r12
  int v3; // r5
  float v4; // r10
  float v5; // r4
  float v6; // r7
  float v7; // s16
  float v8; // s18
  float v9; // s20
  float v10; // s0
  float v11; // s0
  int v12; // r5
  float v13; // s20
  float v14; // s22
  float v15; // s24
  int v16; // r6
  float v17; // s1
  float v18; // s0

  v3 = FIELD_U32(a1, 1040);
  if ( ((unsigned int)&dword_60C9911C & ~(1614655820 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
  {
    dword_60C99118 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9911C);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C99118) == 1 )
  {
    v4 = FIELD_F32(v3, 11748);
    v5 = FIELD_F32(v3, 11776);
    v6 = FIELD_F32(v3, 11780);
    v7 = FIELD_F32(v3, 11756) - v6;
    v8 = FIELD_F32(v3, 11752) - v5;
    v9 = v4 - v4;
    v10 = sqrtf((float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9));
    if ( v10 > 0.0 )
    {
      v11 = 1.0 / v10;
      v9 = v11 * v9;
      v7 = v7 * v11;
      v8 = v8 * v11;
    }
    v12 = 0;
    v13 = v9 * 4.0;
    v14 = v7 * 4.0;
    v15 = v8 * 4.0;
    do
    {
      v16 = a1 + v12;
      FIELD_F32(v16, 612) = v5;
      FIELD_F32(v16, 616) = v6;
      FIELD_F32(v16, 620) = v4;
      FIELD_F32(v16, 816) = v15 + v5;
      FIELD_F32(v16, 820) = v14 + v6;
      FIELD_F32(v16, 824) = v13 + v4;
      FIELD_U32(v16, 412) = sub_6000F7B8((float)(v15 + v5) - v5, (float)(v13 + v4) - v4);
      v17 = sqrtf(
              (float)((float)((float)(v13 + v4) - v4) * (float)((float)(v13 + v4) - v4))
            + (float)((float)((float)(v15 + v5) - v5) * (float)((float)(v15 + v5) - v5)));
      v18 = -(float)((float)(v14 + v6) - v6);
      v4 = v13 + v4;
      v6 = v14 + v6;
      v5 = v15 + v5;
      FIELD_U32(v16, 408) = sub_6000F7B8(v18, v17);
      FIELD_U32(v16, 416) = 0;
      v12 += 12;
      *(float *)v16 = (float)(FIELD_F32(v16, 612) + FIELD_F32(v16, 816)) * 0.5;
      FIELD_F32(v16, 4) = (float)(FIELD_F32(v16, 616) + FIELD_F32(v16, 820)) * 0.5;
      FIELD_F32(v16, 8) = (float)(FIELD_F32(v16, 620) + FIELD_F32(v16, 824)) * 0.5;
    }
    while ( v12 != 204 );
  }
}
