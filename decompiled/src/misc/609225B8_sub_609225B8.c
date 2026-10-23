/* sub_609225B8
 * address: 0x609225B8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609225B8(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r2
  _BYTE v16[68]; // [sp+0h] [bp-70h] BYREF
  int v17[11]; // [sp+44h] [bp-2Ch] BYREF

  v8 = (_DWORD *)(a1 + 248);
  if ( FIELD_U32(a1, 248) )
  {
    dword_60CC7464(a1 + 8);
    FIELD_U8(a1, 64) = 0;
    FIELD_U8(a1, 76) = 0;
    FIELD_U8(a1, 88) = 0;
    FIELD_U8(a1, 100) = 0;
    FIELD_U8(a1, 112) = 0;
    FIELD_U8(a1, 124) = 0;
    FIELD_U8(a1, 136) = 0;
    FIELD_U8(a1, 148) = 0;
    FIELD_U8(a1, 160) = 0;
    FIELD_U8(a1, 172) = 0;
    FIELD_U8(a1, 184) = 0;
    FIELD_U8(a1, 196) = 0;
    FIELD_U8(a1, 208) = 0;
    FIELD_U8(a1, 220) = 0;
    FIELD_U8(a1, 232) = 0;
    FIELD_U8(a1, 244) = 0;
    sub_60913AD4(v8);
    FIELD_U32(a1, 260) = 0;
    FIELD_U32(a1, 264) = 0;
    FIELD_U32(a1, 268) = 0;
  }
  v9 = a2[1];
  v10 = a2[2];
  FIELD_U32(a1, 248) = *a2;
  FIELD_U32(a1, 252) = v9;
  FIELD_U32(a1, 256) = v10;
  FIELD_U32(a1, 260) = a3;
  if ( a3 )
  {
    v11 = a4 / a3;
    a4 = a4 / a3 * a3;
  }
  else
  {
    v11 = 1;
  }
  FIELD_U32(a1, 264) = v11;
  FIELD_U32(a1, 268) = a4;
  dword_60CC7444(v16, FIELD_U32(dword_60CCFC8C, 28));
  dword_60CC7448(v16);
  dword_60CC744C(v16, FIELD_U32(a1, 248), FIELD_U32(a1, 252), FIELD_U32(a1, 268));
  dword_60CC745C(a1 + 8, v16);
  v12 = FIELD_U32(a1, 252);
  v13 = FIELD_U32(a1, 268);
  v14 = FIELD_U32(a1, 256);
  v17[0] = FIELD_U32(a1, 248);
  v17[1] = v12;
  v17[2] = v14;
  return sub_60913B04(v17, v13);
}
