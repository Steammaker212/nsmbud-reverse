/* sub_6085B474
 * address: 0x6085B474   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085B474(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r2
  _DWORD *v8; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r0
  int v12; // r7
  int v13; // r0
  _DWORD *v14; // r1
  int v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // r6
  int v19; // r0
  __int64 v20; // [sp+8h] [bp-30h] BYREF
  int v21; // [sp+10h] [bp-28h]
  int v22; // [sp+14h] [bp-24h]

  result = FIELD_U32(a1, 172);
  if ( result && (**(_BYTE **)(a2 + 192) & 2) == 0 )
  {
    sub_60868CA4();
    v7 = FIELD_U32(a1, 172);
    if ( FIELD_U8(a1, 192) > 3u )
    {
      if ( sub_6085406C(a2, FIELD_U32(v7, 24), FIELD_U8(v7, 51)) == 1 )
        sub_6086A1FC(FIELD_U32(a1, 172), a3);
      v22 = 0;
      v21 = 0;
      v20 = 0;
      v8 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a2, 192) + 8) + 16 * *(_DWORD *)(FIELD_U32(a2, 192) + 28));
      LODWORD(v20) = *v8;
      v9 = v8[1];
      v10 = v8[2];
      v22 = v8[3];
      v21 = v10;
      HIDWORD(v20) = v9;
      v11 = FIELD_U32(a1, 196);
      v20 += FIELD_S32(v11, 4);
      v12 = sub_608A7E14(FIELD_U32(v11, 12));
      v13 = sub_608A7E38(*(_DWORD *)(FIELD_U32(a1, 196) + 12));
      sub_60835D28(a3, 0, &v20, v12, v13);
      FIELD_U8(a2, 212) = 1;
      sub_60869BB8(FIELD_U32(a1, 172), a3, a2);
      v14 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a2, 192) + 8) + 16 * *(_DWORD *)(FIELD_U32(a2, 192) + 28));
      LODWORD(v20) = *v14;
      v15 = v14[1];
      v16 = v14[2];
      v22 = v14[3];
      v21 = v16;
      HIDWORD(v20) = v15;
      v17 = FIELD_U32(a1, 196);
      v20 += FIELD_S32(v17, 8);
      v18 = sub_608A7E50(FIELD_U32(v17, 12));
      v19 = sub_608A7E60(*(_DWORD *)(FIELD_U32(a1, 196) + 12));
      return sub_60835624(a3, 3, v18, &v20, v19, 0);
    }
    else
    {
      return sub_60865468(a3, a2, v7);
    }
  }
  return result;
}
