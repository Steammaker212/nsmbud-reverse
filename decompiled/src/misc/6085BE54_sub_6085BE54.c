/* sub_6085BE54
 * address: 0x6085BE54   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085BE54(int a1, int a2)
{
  int result; // r0
  int v3; // r4
  char *v4; // r9
  int v5; // r11
  int v6; // r5
  int v7; // r6
  int v8; // r10
  char *v9; // r7
  char *v10; // r9
  int v11; // r4
  int v12; // r4
  int v13; // r6
  int v14; // r0
  int v16; // [sp+28h] [bp-E8h]
  int v18; // [sp+30h] [bp-E0h] BYREF
  int v19; // [sp+34h] [bp-DCh]
  int v20; // [sp+38h] [bp-D8h]
  int v21; // [sp+3Ch] [bp-D4h]
  char v22; // [sp+40h] [bp-D0h] BYREF
  __int16 v23; // [sp+44h] [bp-CCh]
  int v24; // [sp+48h] [bp-C8h]
  int v25; // [sp+4Ch] [bp-C4h]
  const char *v26; // [sp+50h] [bp-C0h]
  _DWORD v27[22]; // [sp+B8h] [bp-58h] BYREF

  result = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1);
  v3 = FIELD_U32(result, 28);
  if ( v3 >= 1 )
  {
    v4 = &v22;
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1)
                                             + 32)
                                 + dword_60BF9D80[FIELD_U32(a1, 4)]
                                 + 2 * v5)
                     + 104);
      memset(v27, 0, 48);
      sub_6083D7A8((int)v27);
      memset(v4, 0, 120);
      v7 = 0;
      v8 = 0;
      v9 = v4;
      if ( sub_6083BDB8(v6, 0, 0, "aVertexIndex") >= 0 )
      {
        sub_6083D774((int)v4);
        v8 = 8;
        v7 = 1;
        v26 = "aVertexIndex";
        v23 = 0;
        v25 = 5893;
        v24 = 0;
      }
      v16 = v3;
      if ( sub_6083BDB8(v6, 0, 0, "aPosition") >= 0 )
      {
        v10 = &v4[8 * (v7 | (4 * v7))];
        sub_6083D774((int)&v9[8 * (v7 | (4 * v7))]);
        ++v7;
        *((_DWORD *)v10 + 4) = "aPosition";
        *((_WORD *)v10 + 2) = 0;
        *((_DWORD *)v10 + 3) = 6149;
        *((_DWORD *)v10 + 2) = v8;
        v8 += 12;
      }
      if ( sub_6083BDB8(v6, 0, 0, "aTexCoord") >= 0 )
      {
        v11 = (int)&v9[40 * v7];
        sub_6083D774(v11);
        LOWORD(v7) = v7 + 1;
        FIELD_U32(v11, 16) = "aTexCoord";
        FIELD_U16(v11, 4) = 0;
        FIELD_U32(v11, 12) = 5893;
        FIELD_U32(v11, 8) = v8;
        v8 += 8;
      }
      v21 = 0;
      v20 = 0;
      v19 = 0;
      v18 = 0;
      sub_6083D798(&v18);
      v27[2] = v9;
      v4 = v9;
      v18 = v8;
      v19 = 0;
      LOWORD(v27[0]) = v7;
      v27[4] = &v18;
      HIWORD(v27[0]) = 1;
      v12 = sub_6083C978((unsigned __int16 *)v27);
      v13 = FIELD_U32(a1, 8);
      v14 = sub_60855BA4(v12, 8);
      sub_6083C9F4(v13 + v5, v14, v12);
      result = sub_6083CA08(FIELD_U32(a1, 8) + v5, a2, (unsigned __int16 *)v27, v6);
      v5 += 32;
      v3 = v16 - 1;
    }
    while ( v16 != 1 );
  }
  return result;
}
