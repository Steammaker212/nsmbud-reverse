/* sub_60722FB4
 * address: 0x60722FB4   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60722FB4(int a1, unsigned __int16 *a2, int a3)
{
  int v3; // r10
  int result; // r0
  unsigned __int16 *v5; // r9
  unsigned int v6; // r8
  int v7; // r11
  __int16 v8; // r5
  unsigned __int8 v9; // r0
  __int16 v10; // r1
  __int16 v11; // r0
  int v12; // t1
  unsigned int *v13; // [sp+24h] [bp-C54h]
  _BYTE v16[3072]; // [sp+30h] [bp-C48h] BYREF
  int v17; // [sp+C30h] [bp-48h]
  __int16 v18; // [sp+C34h] [bp-44h]
  __int16 v19; // [sp+C36h] [bp-42h]
  __int16 v20; // [sp+C38h] [bp-40h]
  unsigned __int16 v21; // [sp+C42h] [bp-36h]
  __int16 v22; // [sp+C44h] [bp-34h]
  __int16 v23; // [sp+C46h] [bp-32h]
  __int16 v24; // [sp+C48h] [bp-30h]
  __int16 v25; // [sp+C4Ah] [bp-2Eh]
  __int16 v26; // [sp+C4Ch] [bp-2Ch]
  __int16 v27; // [sp+C50h] [bp-28h]
  char v28; // [sp+C52h] [bp-26h]

  v3 = TilesetMgr_instance;
  v13 = (unsigned int *)(a1 + 9244);
  v27 = FIELD_U32(a1, 9244);
  result = *a2;
  if ( result != 0xFFFF )
  {
    v5 = a2 + 8;
    do
    {
      v22 = result;
      v6 = (unsigned __int16)result;
      v23 = *(v5 - 7);
      v24 = *(v5 - 6);
      v25 = *(v5 - 5);
      v26 = *(v5 - 4);
      v28 = *((_BYTE *)v5 - 6);
      if ( (unsigned __int16)result != 0x7FFF )
      {
        v7 = 3 * (result & 0xFFF);
        v21 = sub_6071B258(v3, *v13, (unsigned __int16)result >> 12, v7);
        v8 = sub_6071B258(v3, *v13, v6 >> 12, v7 + 1);
        v17 = sub_6071B284(v3, *v13, v6 >> 12, v21);
        v18 = v8;
        if ( v6 >> 12 )
        {
          v9 = sub_6071B258(v3, *v13, v6 >> 12, (unsigned __int16)(v7 + 2));
          v10 = v9 >> 4;
          v11 = v9 & 0xF;
          v19 = v10;
        }
        else
        {
          v11 = 0;
          v19 = 0;
        }
        v20 = v11;
        sub_60726188(a1, v16, a3);
      }
      v12 = *v5;
      v5 += 8;
      result = v12;
    }
    while ( v12 != 0xFFFF );
  }
  return result;
}
