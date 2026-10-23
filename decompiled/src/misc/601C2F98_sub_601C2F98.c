/* sub_601C2F98
 * address: 0x601C2F98   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C2F98(int a1)
{
  int v2; // r0
  float *v3; // r0
  float v4; // r2
  float v5; // s0
  float v6; // r5
  float *v7; // r0
  float v8; // s2
  int v9; // r3

  FIELD_U32(a1, 1140) = 0;
  FIELD_U32(a1, 1144) = 0;
  v2 = sub_601CF9C0(dword_60C8AEF0);
  sub_6019EC34((_DWORD *)(a1 + 1084), (_DWORD *)(v2 + 1032));
  v3 = (float *)sub_601DFFE4(a1 + 1084);
  v4 = v3[18];
  v5 = -80.0;
  FIELD_F32(a1, 948) = v4;
  FIELD_F32(a1, 952) = v3[19];
  v6 = v3[20];
  v7 = (float *)(a1 + 956);
  FIELD_F32(a1, 956) = v6;
  v8 = v6;
  v9 = FIELD_U32(a1, 1084);
  if ( (unsigned int)(v9 - 2) < 2 || v9 == 5 )
    goto LABEL_5;
  if ( !v9 )
  {
    v5 = 120.0;
    v8 = v4;
    v7 = (float *)(a1 + 948);
LABEL_5:
    *v7 = v8 + v5;
  }
  FIELD_U32(a1, 1024) = sub_608332B0(a1 + 80, a1 + 948);
  FIELD_U32(a1, 972) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 976) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 980) = FIELD_U32(a1, 88);
  FIELD_U8(a1, 280) = 1;
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 1044) = 20;
  FIELD_U32(a1, 1048) = 0;
  return 0;
}
