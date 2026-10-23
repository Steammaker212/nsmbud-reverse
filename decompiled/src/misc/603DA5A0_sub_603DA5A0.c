/* sub_603DA5A0
 * address: 0x603DA5A0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603DA5A0(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r7
  int v5; // r6
  int v6; // r5
  float v7; // s0

  v3 = FIELD_U32(a1, 1040);
  if ( ((unsigned int)&dword_60C9911C & ~(1614652872 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
  {
    dword_60C99118 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9911C);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C99118) == 1 )
  {
    v4 = -204;
    v5 = FIELD_F32(v3, 11776) >= FIELD_F32(v3, 11752);
    do
    {
      v6 = a1 + v4;
      *(float *)(a1 + v4 + 408) = *(float *)&dword_60AF1F60[v5]
                                * (float)((float)((float)(COERCE_FLOAT(
                                                            (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9)
                                                          | 0x3F800000)
                                                        + -1.0)
                                                * 1.5)
                                        + 0.25);
      v4 += 12;
      v5 ^= 1u;
      LODWORD(v7) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000;
      FIELD_F32(v6, 412) = (float)((float)(v7 + -1.0) + (float)(v7 + -1.0)) + 3.0;
      FIELD_U32(v6, 416) = 0;
    }
    while ( v4 );
  }
}
