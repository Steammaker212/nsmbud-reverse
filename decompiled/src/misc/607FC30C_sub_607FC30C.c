/* sub_607FC30C
 * address: 0x607FC30C   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FC30C(int a1)
{
  unsigned __int8 *v2; // r5
  int result; // r0
  bool v4; // zf
  int v5; // r6
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11[2]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v12[4]; // [sp+14h] [bp-34h] BYREF
  int v13; // [sp+24h] [bp-24h] BYREF
  int v14; // [sp+28h] [bp-20h]
  int v15; // [sp+2Ch] [bp-1Ch]
  int v16; // [sp+30h] [bp-18h]
  unsigned __int8 v17; // [sp+37h] [bp-11h] BYREF

  v2 = (unsigned __int8 *)(a1 + 204);
  sub_607FF398(a1 + 204);
  sub_607FD794(FIELD_U32(a1, 172));
  if ( *(_BYTE *)(FIELD_U32(a1, 200) + 40)
    || *(int *)(FIELD_U32(a1, 172) + 32) > 0
    || *(int *)(FIELD_U32(a1, 176) + 28) > 0
    || *(_BYTE *)(FIELD_U32(a1, 196) + 28) )
  {
    goto LABEL_8;
  }
  result = FIELD_U8(a1, 205);
  v4 = result == 0;
  if ( FIELD_U8(a1, 205) )
  {
    result = *v2;
    v4 = result == 0;
  }
  if ( !v4 )
  {
LABEL_8:
    v17 = 0;
    v5 = sub_60805268(FIELD_U32(a1, 176), &v17);
    v13 = 2139095039;
    v14 = 2139095039;
    v15 = -8388609;
    v16 = -8388609;
    sub_607FD83C(FIELD_U32(a1, 172), &v13, 0, v5 >= 0);
    FIELD_U32(a1, 24) = v13;
    FIELD_U32(a1, 28) = v14;
    FIELD_U32(a1, 32) = v15;
    FIELD_U32(a1, 36) = v16;
    sub_608034D4(FIELD_U32(a1, 184), a1 + 24, v5, v17, 1, *(unsigned __int8 *)(FIELD_U32(a1, 200) + 40));
    v6 = sub_607FA390(FIELD_U32(a1, 196), *(_DWORD *)(FIELD_U32(a1, 200) + 28));
    if ( v6 == 1 )
    {
      v7 = FIELD_U32(a1, 184);
      if ( FIELD_U32(v7, 48) == 24 )
        sub_60803A08(v7);
    }
    v8 = FIELD_U32(a1, 168);
    v9 = FIELD_U32(a1, 184);
    v10 = FIELD_U32(a1, 192);
    v12[0] = a1 + 24;
    v12[1] = v8;
    v12[2] = v9;
    v12[3] = v10;
    sub_6080126C(FIELD_U32(a1, 200), v12);
    if ( v6 == 1 )
    {
      sub_608013D0(FIELD_U32(a1, 200), v11, a1 + 24, FIELD_U32(a1, 184));
      sub_607FA378(FIELD_U32(a1, 196), v11);
    }
    sub_608013A8(FIELD_U32(a1, 200), a1 + 16, a1 + 40);
    sub_607FBEB4(a1);
    sub_607FE6C0(a1 + 248, FIELD_F32(a1, 112), FIELD_F32(a1, 124), FIELD_F32(a1, 16));
    FIELD_U32(a1, 20) = FIELD_U32(a1, 16);
    FIELD_U32(a1, 56) = FIELD_U32(a1, 40);
    FIELD_U32(a1, 60) = FIELD_U32(a1, 44);
    FIELD_U32(a1, 64) = FIELD_U32(a1, 48);
    FIELD_U32(a1, 68) = FIELD_U32(a1, 52);
    FIELD_U32(a1, 152) = FIELD_U32(a1, 136);
    FIELD_U32(a1, 156) = FIELD_U32(a1, 140);
    FIELD_U32(a1, 160) = FIELD_U32(a1, 144);
    result = FIELD_U32(a1, 148);
    FIELD_U32(a1, 164) = result;
  }
  return result;
}
