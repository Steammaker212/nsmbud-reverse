/* sub_603DB350
 * address: 0x603DB350   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603DB350(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r6
  float v5; // s16
  float v6; // s18
  float v7; // s26
  int v8; // r7
  float v9; // s17
  float v10; // s30
  float v11; // s19
  float v12; // s2
  float v13; // s28
  float v14; // s30
  float v15; // s17
  float v16; // s16
  float v17; // s18

  v3 = FIELD_U32(a1, 1040);
  if ( ((unsigned int)&dword_60C9911C & ~(1614656368 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
  {
    dword_60C99118 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9911C);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C99118) == 1 )
  {
    v4 = 0;
    v5 = FIELD_F32(v3, 11776);
    v6 = FIELD_F32(v3, 11784);
    v7 = FIELD_F32(v3, 11780);
    do
    {
      v8 = a1 + v4;
      v9 = (float)(*(float *)(a1 + v4 + 820) - (float)((float)(v7 - *(float *)(a1 + v4 + 616)) * 0.75)) - v7;
      v10 = (float)(*(float *)(a1 + v4 + 816) - (float)((float)(v5 - *(float *)(a1 + v4 + 612)) * 0.75)) - v5;
      v11 = (float)(*(float *)(a1 + v4 + 824) - (float)((float)(v6 - *(float *)(a1 + v4 + 620)) * 0.75)) - v6;
      v12 = sqrtf((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v11 * v11));
      FIELD_F32(v8, 612) = v5;
      FIELD_F32(v8, 616) = v7;
      FIELD_F32(v8, 620) = v6;
      v13 = v5 + (float)(v10 * (float)(4.0 / v12));
      v14 = v7 + (float)(v9 * (float)(4.0 / v12));
      v15 = v6 + (float)(v11 * (float)(4.0 / v12));
      FIELD_F32(v8, 816) = v13;
      v16 = v13 - v5;
      FIELD_F32(v8, 820) = v14;
      v17 = v15 - v6;
      FIELD_F32(v8, 824) = v15;
      FIELD_U32(v8, 412) = sub_6000F7B8(v16, v17);
      FIELD_U32(v8, 408) = sub_6000F7B8(-(float)(v14 - v7), sqrtf((float)(v17 * v17) + (float)(v16 * v16)));
      FIELD_U32(v8, 416) = 0;
      v6 = v15;
      v7 = v14;
      v5 = v13;
      v4 += 12;
      *(float *)v8 = (float)(FIELD_F32(v8, 612) + FIELD_F32(v8, 816)) * 0.5;
      FIELD_F32(v8, 4) = (float)(FIELD_F32(v8, 616) + FIELD_F32(v8, 820)) * 0.5;
      FIELD_F32(v8, 8) = (float)(FIELD_F32(v8, 620) + FIELD_F32(v8, 824)) * 0.5;
    }
    while ( v4 != 204 );
  }
}
