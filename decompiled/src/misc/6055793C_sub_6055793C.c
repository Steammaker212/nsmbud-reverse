/* sub_6055793C
 * address: 0x6055793C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055793C(int a1, unsigned int a2)
{
  int v4; // r6
  _DWORD *v5; // r0
  int v6; // r1
  float v7; // s0
  int v8; // t1
  int result; // r0
  int v10; // [sp+0h] [bp-28h] BYREF
  float v11; // [sp+4h] [bp-24h]
  int v12; // [sp+8h] [bp-20h]
  _DWORD v13[7]; // [sp+Ch] [bp-1Ch] BYREF

  v4 = a1 + 7900;
  sub_60558A30(a1 + 7900);
  v5 = (_DWORD *)sub_605588E8(v4, a2);
  v13[0] = v5[23];
  v13[1] = v5[27];
  v13[2] = v5[31];
  sub_6090A384(FIELD_U32(a1, 11592), &v10, v13);
  if ( a2 >= 7 )
    a2 = 0;
  v6 = a1 + 4 * a2;
  FIELD_U32(v6, 5708) = 0;
  v11 = v11 + 2.0;
  v7 = v11;
  v8 = FIELD_U32(v6, 5672);
  FIELD_U32(v8, 416) = v10;
  FIELD_F32(v8, 420) = v7;
  FIELD_U32(v8, 424) = v12;
  result = FIELD_U32(v6, 5672);
  if ( !FIELD_U8(result, 2690) && !FIELD_U8(result, 2691) )
  {
    FIELD_U8(result, 2699) = 1;
    FIELD_U8(result, 2691) = 1;
    FIELD_U32(result, 500) = 2;
    FIELD_U32(result, 2532) = 1;
    FIELD_U32(result, 2560) = 1065353216;
    FIELD_U8(result, 2693) = 1;
  }
  return result;
}
