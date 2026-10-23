/* sub_601C0478
 * address: 0x601C0478   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C0478(int a1)
{
  _DWORD *v2; // r8
  int v3; // r7
  int v4; // r5
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r0
  float v10; // s0
  float v11; // s2
  float v12; // s0
  float v13; // s2
  float *v15; // r0
  int v16; // s2

  v2 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  v3 = dword_60C8996C;
  v4 = *((__int16 *)sub_601B6A5C() + 71);
  v5 = v4 * sub_601C5EEC(a1);
  FIELD_U32(a1, 1044) = v5 + 4 * sub_601C5EEC(a1) - 4;
  sub_601B69E0(a1);
  v6 = 0;
  FIELD_U32(a1, 972) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 976) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 980) = FIELD_U32(a1, 88);
  FIELD_U32(a1, 200) = 1086324736;
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 208) = 0;
  v7 = sub_601916F4(v3);
  FIELD_U32(a1, 1464) = v7;
  if ( (unsigned int)(v7 - 4) < 2 )
    goto LABEL_4;
  if ( v7 == 1 )
  {
    v15 = (float *)sub_601E0040(a1 + 1084);
    v6 = 5;
    *(__n64 *)(a1 + 948) = sub_601BA56C(a1, v15, 0);
    FIELD_U32(a1, 956) = v16;
    if ( (FIELD_U32(a1, 264) | 1) == 7 && FIELD_U32(dword_60CC6D78, 440) != 19 )
    {
      v6 = 7;
      FIELD_U32(a1, 1044) = 0;
    }
    goto LABEL_5;
  }
  if ( !v7 )
  {
LABEL_4:
    FIELD_U32(a1, 948) = v2[242];
    FIELD_U32(a1, 952) = v2[243];
    FIELD_U32(a1, 956) = v2[244];
LABEL_5:
    FIELD_U32(a1, 1076) = v6;
  }
  v8 = sub_608332B0(a1 + 80, a1 + 948);
  FIELD_U32(a1, 192) = v8;
  FIELD_U32(a1, 180) = v8;
  FIELD_U32(a1, 1096) = 2;
  v9 = 5;
  v10 = FIELD_F32(a1, 80);
  v11 = FIELD_F32(a1, 948);
  if ( v11 <= v10 && (v9 = 4, v11 >= v10) && (v12 = FIELD_F32(a1, 88), v13 = FIELD_F32(a1, 956), v9 = 2, v13 <= v12) )
  {
    if ( v13 < v12 )
      FIELD_U32(a1, 1096) = 3;
  }
  else
  {
    FIELD_U32(a1, 1096) = v9;
  }
  FIELD_U8(a1, 280) = 1;
  return 1;
}
