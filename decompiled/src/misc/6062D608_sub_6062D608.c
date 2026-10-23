/* sub_6062D608
 * address: 0x6062D608   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062D608(int result)
{
  unsigned int v1; // r12
  float v2; // s2
  float v3; // s0
  float v4; // s0
  char v5; // r2
  _DWORD *v6; // r3
  int v7; // r1
  int *v8; // r1
  int v9; // lr
  int v10; // r3

  v1 = FIELD_U32(result, 20);
  v2 = flt_60AF2AB4[(v1 >> 12) & 3];
  v3 = flt_60AF2AC4[FIELD_U32(result, 6248)];
  FIELD_U32(result, 120) = 0;
  v4 = v2 * v3;
  FIELD_F32(result, 124) = v4;
  FIELD_U32(result, 128) = 0;
  v5 = dword_60CB3FD0[0];
  if ( FIELD_U32(result, 6244) )
  {
    v6 = (_DWORD *)((char *)&unk_60CB4040 + 12 * dword_60CB3FD0[0]);
    FIELD_U32(result, 6252) = *v6;
    v7 = v6[1];
    FIELD_U32(result, 6260) = v6[2];
    FIELD_U32(result, 6256) = v7;
  }
  else
  {
    v8 = &dword_60CB3FD0[3 * dword_60CB3FD0[0]];
    v9 = v8[14];
    v10 = v8[15];
    FIELD_U32(result, 6260) = v8[16];
    FIELD_U32(result, 6256) = v10;
    FIELD_U32(result, 6252) = v9;
  }
  dword_60CB3FD0[0] = (v5 + 1) & 3;
  if ( (v1 & 0x100) == 0 )
    FIELD_F32(result, 112) = FIELD_F32(dword_60CC6484, 124)
                             + (float)((float)(fabsf(v4) * 60.0) + (float)(FIELD_F32(result, 6272) * 0.5));
  return result;
}
