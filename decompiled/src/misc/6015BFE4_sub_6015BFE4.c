/* sub_6015BFE4
 * address: 0x6015BFE4   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015BFE4(int a1)
{
  float v2; // s0
  float v3; // s2
  unsigned int v4; // r0
  float v5; // s4
  float v6; // s6
  float *v7; // r1
  float v8; // s3
  float v9; // s12
  float v10; // r3
  float v11; // s8
  float v12; // s10
  float v13; // s2
  float v14; // s0

  sub_601603E8((ColliderBase *)a1);
  v2 = FIELD_F32(a1, 192);
  v3 = FIELD_F32(a1, 188);
  v4 = FIELD_U32(a1, 244);
  v5 = FIELD_F32(a1, 344) - v2;
  v6 = FIELD_F32(a1, 340) - v3;
  if ( v4 )
  {
    v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v8 = (float)(v4 & 0xFFFFFF);
    v9 = *v7 + (float)((float)(v8 * 0.000000059605) * v7[1]);
    v10 = v7[2] + (float)((float)(v8 * 0.000000059605) * v7[3]);
    v11 = (float)(v5 * v10) + (float)(v6 * v9);
    v12 = (float)(v6 * v10) - (float)(v5 * v9);
    FIELD_F32(a1, 228) = v10;
    FIELD_F32(a1, 232) = -v9;
    FIELD_F32(a1, 236) = v9;
    FIELD_F32(a1, 240) = v10;
  }
  else
  {
    v12 = FIELD_F32(a1, 340) - v3;
    v11 = FIELD_F32(a1, 344) - v2;
  }
  v13 = v3 + v12;
  v14 = v2 + v11;
  FIELD_F32(a1, 348) = v13;
  FIELD_F32(a1, 352) = v14;
  FIELD_F32(a1, 204) = v13;
  FIELD_F32(a1, 208) = v14;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
  return sub_601601B8(a1);
}
