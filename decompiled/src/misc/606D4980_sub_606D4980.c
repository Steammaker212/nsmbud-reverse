/* sub_606D4980
 * address: 0x606D4980   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D4980(float *a1, unsigned int *a2, int a3, float *a4, int a5)
{
  char v5; // r12
  int v10; // r4
  unsigned int v11; // r0
  float *v12; // r1
  float v13; // s14
  float v14; // s0
  float v15; // s4
  float v16; // s8
  float v17; // s2

  if ( ((unsigned int)&dword_60CB10A0 & ~(1617775012 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CB10A0) )
  {
    dword_60CB109C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB10A0);
  }
  v10 = 0;
  if ( a3 && (**(int (__fastcall ***)(int, int *))a3)(a3, &dword_60CB109C) == 1 )
  {
    v11 = sub_605CE9B4(a3 + 644, a5) + 0x40000000;
    v10 = 1;
    *a2 = v11;
    v12 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
    v13 = a4[1];
    v14 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
    v15 = *v12 + (float)(v12[1] * v14);
    v16 = v12[2] + (float)(v14 * v12[3]);
    v17 = (float)((float)(v13 * v16) + (float)(v15 * *a4)) + FIELD_F32(a3, 112);
    *a1 = FIELD_F32(a3, 108) + (float)((float)(*a4 * v16) - (float)(v15 * v13));
    a1[1] = v17;
  }
  return v10;
}
