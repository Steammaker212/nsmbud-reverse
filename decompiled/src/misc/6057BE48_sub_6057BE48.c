/* sub_6057BE48
 * address: 0x6057BE48   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057BE48(int a1)
{
  char v1; // r12
  int v3; // r0
  unsigned int v4; // r1
  float *v5; // r2
  float v6; // s0
  float v7; // s4
  float v8; // s2
  unsigned int v9; // r0
  float *v10; // r1
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s0
  float v15; // r0
  int result; // r0

  if ( FIELD_U32(a1, 7532) )
  {
    if ( ((unsigned int)&dword_60CAEE94 & ~(1616363124 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEE94) )
    {
      dword_60CAEEA4 = 0x40000000;
      dword_60CAEEA8 = 805306368;
      dword_60CAEEAC = 0x20000000;
      dword_60CAEEB0 = 1342177280;
      dword_60CAEEB4 = 1610612736;
      dword_60CAEEB8 = 805306368;
      dword_60CAEEBC = 0x20000000;
      _cxa_guard_release(&dword_60CAEE94);
    }
    v3 = FIELD_U32(a1, 7536);
    v4 = *((_DWORD *)&unk_60CAEE90 + v3 + 5);
    v5 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v6 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
    v7 = *v5 + (float)(v5[1] * v6);
    FIELD_F32(a1, 124) = v7;
    v8 = (float)(v5[2] + (float)(v6 * v5[3])) * 0.5;
    FIELD_F32(a1, 120) = v8;
    FIELD_F32(a1, 124) = v7 * -0.5;
    if ( (unsigned int)(v3 - 5) <= 1 && FIELD_U32(a1, 80) )
      FIELD_F32(a1, 120) = -v8;
    if ( FIELD_U32(a1, 7540) == 2 )
      FIELD_F32(a1, 124) = -(float)(v7 * -0.5);
  }
  else
  {
    if ( ((unsigned int)&unk_60CAEE90 & ~(1616363400 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CAEE90) )
    {
      unk_60CAEE98 = 0;
      unk_60CAEE9C = 0x10000000;
      unk_60CAEEA0 = 0x20000000;
      _cxa_guard_release((__guard *)&unk_60CAEE90);
    }
    v9 = *((_DWORD *)&unk_60CAEE90 + FIELD_U32(a1, 7536) + 2);
    v10 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
    v11 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
    v12 = *v10 + (float)(v10[1] * v11);
    FIELD_F32(a1, 124) = v12;
    v13 = v10[2] + (float)(v11 * v10[3]);
    FIELD_F32(a1, 120) = v13 * 0.5;
    FIELD_F32(a1, 124) = v12 * -0.5;
    if ( FIELD_U32(a1, 80) )
      FIELD_F32(a1, 120) = -(float)(v13 * 0.5);
  }
  v14 = FIELD_F32(a1, 108);
  v15 = FIELD_F32(a1, 112);
  FIELD_U32(a1, 7504) = FIELD_U32(a1, 116);
  FIELD_F32(a1, 7496) = v14 + -8.0;
  FIELD_F32(a1, 7500) = v15 + 16.0;
  FIELD_F32(a1, 7520) = v15;
  if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
  {
    FIELD_F32(a1, 112) = v15 + (float)((float)((float)((float)(0.024541 * 0.0) * 0.000000059605) + 0.0) * 4.0);
    FIELD_U32(a1, 7552) = 0x1000000;
  }
  sub_6057A67C(a1);
  result = FIELD_U32(a1, 7528);
  if ( result == 1 )
  {
    result = FIELD_U8(a1, 20);
    if ( (result & 0x10) != 0 )
    {
      ((void (__fastcall *)(int))loc_6057D09C)(a1);
      JUMPOUT(0x6057D09C);
    }
  }
  return result;
}
