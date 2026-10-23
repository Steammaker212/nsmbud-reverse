/* sub_606A5A28
 * address: 0x606A5A28   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A5A28(int a1)
{
  float v2; // s0
  float v3; // r1
  int v4; // r2
  unsigned int v5; // r0
  float v6; // s0
  float v8; // [sp+0h] [bp-18h] BYREF
  float v9; // [sp+4h] [bp-14h]
  int v10; // [sp+8h] [bp-10h]

  sub_606A6464();
  v2 = FIELD_F32(a1, 6108);
  if ( (FIELD_U32(a1, 6116) | 1) == 1 )
    FIELD_F32(a1, 492) = (float)(v2 - FIELD_F32(a1, 108)) + 136.0;
  else
    FIELD_F32(a1, 496) = (float)(v2 - FIELD_F32(a1, 112)) + -136.0;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  v8 = FIELD_F32(a1, 108);
  v9 = v3;
  v10 = v4;
  if ( FIELD_U8(a1, 6112) )
  {
    v5 = FIELD_U32(a1, 7888) + 0x40000000;
    FIELD_U32(a1, 7888) = v5;
    v6 = (float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
               + (float)((float)((float)(v5 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                       * 0.000000059605))
       * 0.25;
    v9 = v9 + v6;
    v8 = v8 + v6;
  }
  return sub_606361F8(a1 + 6788, &v8, (_DWORD *)(a1 + 156));
}
