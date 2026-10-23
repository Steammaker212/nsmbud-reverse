/* sub_601529D0
 * address: 0x601529D0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601529D0(_DWORD *a1, float *a2, char a3)
{
  int result; // r0
  float v6; // s0
  float v7; // s2
  int v8; // r1
  TileCheck *v9; // r0
  int v10; // r1
  int v11; // r1
  _DWORD v12[2]; // [sp+0h] [bp-88h] BYREF
  int v13; // [sp+8h] [bp-80h] BYREF
  TileCheck v14; // [sp+1Ch] [bp-6Ch] BYREF
  TileCheck_Param v15; // [sp+68h] [bp-20h] BYREF
  int (**v16)(); // [sp+74h] [bp-14h] BYREF

  result = TileMgr_instance;
  if ( FIELD_U8(TileMgr_instance, 10273)
    && (v6 = *a2, v7 = FIELD_F32(dword_60CC6484, 40), v7 <= *a2)
    && v6 <= FIELD_F32(dword_60CC6484, 48)
    && *(float *)(TileMgr_instance + 4 * (int)(float)((float)(v6 - v7) * 0.5) + 5152) >= a2[1] )
  {
    *a1 = 4;
    return 4;
  }
  else
  {
    v8 = FIELD_U32(TileMgr_instance, 10276);
    *a1 = v8;
    if ( !v8 || a2[1] > FIELD_F32(result, 24) )
    {
      v16 = off_60BD4B30;
      v15.field_0 = 1;
      v15.field_1 = 1;
      v15.field_2 = a3;
      v15.field_3 = 3;
      v15.field_4 = 1;
      v15.field_8 = (int)&v16;
      v9 = TileCheck_ctor(&v14, &v15);
      v10 = *((_DWORD *)a2 + 1);
      *(float *)v12 = *a2;
      v12[1] = v10;
      result = sub_6015DD58(v9, &v13, v12);
      v11 = 0;
      if ( result == 1 )
      {
        result = v13;
        if ( (unsigned __int16)v13 == 0xD )
        {
          result = BYTE2(v13);
          v11 = dword_60BD43CC[BYTE2(v13)];
        }
      }
      *a1 = v11;
    }
  }
  return result;
}
