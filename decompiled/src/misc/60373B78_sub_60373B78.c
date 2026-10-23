/* sub_60373B78
 * address: 0x60373B78   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60373B78(int a1)
{
  float v2; // s0
  float *v3; // r1
  float v4; // s6
  int v5; // r0
  float v6; // s2
  float v7; // s4
  int v8; // r1
  _DWORD *v9; // r5
  int result; // r0
  float v11; // s0
  int v12; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = (float *)(a1 + 11696);
  v4 = (float)(FIELD_U16(a1, 22) & 0xF);
  v5 = FIELD_U32(a1, 80);
  v6 = *v3;
  v7 = v4 * 16.0;
  if ( v5 == 1 )
  {
    v5 = 1;
    if ( v2 >= (float)(v6 - v7) )
      goto LABEL_7;
    v5 = 0;
  }
  else
  {
    if ( v2 <= (float)(v6 + v7) )
      goto LABEL_7;
    v5 ^= 1u;
  }
  FIELD_U32(a1, 80) = v5;
LABEL_7:
  v8 = 715849728;
  v9 = (_DWORD *)(a1 + 160);
  v12 = 0x1000000;
  if ( v5 == 1 )
    v8 = -715849728;
  target = v8;
  if ( moveValueTo((int *)(a1 + 160), &target, &v12) )
  {
    result = byte_60AFE3F4[FIELD_U32(a1, 80)];
    v11 = flt_60AF2754[FIELD_U32(a1, 11692)] * (float)result;
  }
  else
  {
    result = *v9 & 0xFFFFFF;
    v11 = (float)(*(float *)((char *)sinLutTable + ((*v9 >> 20) & 0xFF0))
                + (float)((float)((float)(unsigned int)result
                                * *(float *)((char *)&sinLutTable[1] + ((*v9 >> 20) & 0xFF0)))
                        * 0.000000059605))
        * 0.5;
  }
  FIELD_F32(a1, 120) = v11;
  return result;
}
