/* sub_60256CFC
 * address: 0x60256CFC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60256CFC(int a1, int a2, float *a3)
{
  char v3; // r12
  unsigned int v7; // r2
  int v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  int v11; // r1
  float v12; // s18
  float v13; // s16
  float v14; // s20
  float v15; // s0
  float v16; // s0

  if ( ((unsigned int)&dword_60C8E048 & ~(1613065508 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E048) )
  {
    dword_60C8E044 = 0x40000000;
    _cxa_guard_release(&dword_60C8E048);
  }
  v7 = FIELD_U32(a2, 104);
  if ( (v7 & 1) != 0 || a3[31] >= 0.0 )
    return 0;
  v8 = 0;
  v9 = a1 + 6316;
  if ( v7 >> 1 )
  {
    v10 = v7 >> 1;
    if ( (v10 & 3) != 0 )
    {
      v8 = 0;
      do
      {
        v9 = FIELD_U32(v9, 184);
        ++v8;
      }
      while ( (v10 & 3) != v8 );
    }
    if ( v10 - 1 >= 3 )
    {
      v11 = v10 - v8;
      do
      {
        v11 -= 4;
        v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(v9, 184) + 184) + 184) + 184);
      }
      while ( v11 );
    }
  }
  v12 = 0.0;
  v13 = a3[27] - FIELD_F32(v9, 8);
  v14 = a3[28] - (float)(FIELD_F32(v9, 12) + 32.0);
  v15 = sqrtf((float)((float)(v14 * v14) + (float)(v13 * v13)) + 0.0);
  if ( v15 > 0.0 )
  {
    v16 = 1.0 / v15;
    v14 = v16 * v14;
    v13 = v13 * v16;
    v12 = v16 * 0.0;
  }
  return (float)((float)((float)(v14 * 1.0) + (float)(v13 * 0.0)) + (float)(v12 * 0.0)) >= (float)(*(float *)((char *)&sinLutTable[2] + (((unsigned int)dword_60C8E044 >> 20) & 0xFF0))
                                                                                                 + (float)((float)((float)(dword_60C8E044 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[3] + (((unsigned int)dword_60C8E044 >> 20) & 0xFF0))) * 0.000000059605));
}
