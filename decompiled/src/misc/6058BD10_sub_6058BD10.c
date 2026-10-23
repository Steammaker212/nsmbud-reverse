/* sub_6058BD10
 * address: 0x6058BD10   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058BD10(int a1)
{
  float v2; // s16
  unsigned int U32; // r0
  char v4; // r12
  float v5; // s2
  float v6; // s0

  FIELD_U8(a1, 535) = 0;
  FIELD_U32(a1, 100) = -1105199104;
  v2 = flt_60AF4C50[FIELD_U32(a1, 20) & 7];
  FIELD_F32(a1, 120) = v2;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  if ( v2 >= 0.0 )
  {
    v5 = 0.1;
    v6 = -0.5;
  }
  else
  {
    v5 = -0.1;
    v6 = 0.5;
  }
  FIELD_F32(a1, 120) = (float)(v2 + v6) + (float)((float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * v5);
  if ( (FIELD_U8(a1, 21) & 0xF) == 0 )
  {
    if ( ((unsigned int)dword_60CAF41C & ~(1616428516 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CAF41C) )
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
  FIELD_U16(a1, 7490) = 8;
  FIELD_U16(a1, 7488) = 16;
  FIELD_U32(a1, 7384) = 0;
  FIELD_U32(a1, 6004) = 1036831949;
  return sub_6057AA48((_DWORD *)a1);
}
