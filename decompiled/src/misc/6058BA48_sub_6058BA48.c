/* sub_6058BA48
 * address: 0x6058BA48   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058BA48(int a1)
{
  int v2; // r7
  float v3; // r5
  unsigned int U32; // r0
  unsigned int v5; // r0
  char v6; // r12
  float v7; // s2
  int v8; // r0
  float v9; // s0

  FIELD_U32(a1, 100) = -1106289623;
  v2 = FIELD_U32(a1, 20) & 7;
  v3 = flt_60AF4C50[v2];
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  FIELD_F32(a1, 120) = v3;
  FIELD_F32(a1, 124) = flt_60AF4C30[v2] + (float)((float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * 0.4);
  FIELD_U32(a1, 128) = 0;
  v5 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  if ( v3 >= 0.0 )
  {
    v7 = 0.6;
    v9 = -0.5;
    v8 = (v5 >> 9) | 0x3F800000;
  }
  else
  {
    v7 = -0.6;
    v8 = (v5 >> 9) | 0x3F800000;
    v9 = 0.5;
  }
  FIELD_F32(a1, 120) = (float)(v3 + v9) + (float)((float)(*(float *)&v8 + -1.0) * v7);
  if ( (FIELD_U8(a1, 21) & 0xF) == 0 )
  {
    if ( ((unsigned int)dword_60CAF41C & ~(1616427856 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CAF41C) )
    {
      dword_60CAF41C[1] = 1051595899;
      dword_60CAF41C[2] = -1095887749;
      _cxa_guard_release(dword_60CAF41C);
    }
    FIELD_U32(a1, 7484) = dword_60CAF41C[(FIELD_F32(a1, 120) < 0.0) + 1];
  }
  if ( FIELD_U32(EnemyCounterMaybe_instance, 32) )
  {
    sub_6057AF70((_DWORD *)a1);
    FIELD_U8(a1, 6056) = 1;
  }
  FIELD_U16(a1, 7488) = 16;
  FIELD_U32(a1, 7384) = 0;
  FIELD_U32(a1, 6004) = 1036831949;
  return 6004;
}
