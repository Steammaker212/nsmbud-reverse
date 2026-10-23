/* sub_60616DF8
 * address: 0x60616DF8   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60616DF8(int a1, float *a2, unsigned int *a3, int a4)
{
  char v4; // r12
  int v9; // r4
  unsigned int v10; // r0
  float *v11; // r1
  float v12; // s0
  float v13; // s4
  float v14; // s0
  float result; // s0

  v9 = FIELD_U32(a1, 7188);
  if ( ((unsigned int)dword_60CB3364 & ~(1616997924 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CB3364) )
  {
    dword_60CB3364[1] = 0;
    dword_60CB3364[2] = 1431655765;
    dword_60CB3364[3] = -1431655766;
    _cxa_guard_release(dword_60CB3364);
  }
  v10 = v9 + dword_60CB3364[a4 + 1] + 0x40000000;
  v11 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  v12 = (float)(v10 & 0xFFFFFF) * 0.000000059605;
  v13 = *v11 + (float)(v11[1] * v12);
  a2[1] = v13;
  v14 = (float)(v11[2] + (float)(v12 * v11[3])) * 8.0;
  *a2 = v14;
  a2[1] = v13 * 8.0;
  *a2 = v14 + FIELD_F32(a1, 108);
  result = FIELD_F32(a1, 112) + (float)(v13 * 8.0);
  a2[1] = result;
  *a3 = v10;
  return result;
}
