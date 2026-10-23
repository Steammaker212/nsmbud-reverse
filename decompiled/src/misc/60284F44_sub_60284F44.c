/* sub_60284F44
 * address: 0x60284F44   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60284F44(int a1, int a2, int a3, int a4)
{
  int result; // r0
  bool v6; // zf
  int v7; // r0
  float v8; // r1
  float v9; // s4
  unsigned int v10; // r1
  char v11; // r3
  float v12[4]; // [sp+0h] [bp-38h] BYREF
  char v13; // [sp+10h] [bp-28h]
  char v14; // [sp+11h] [bp-27h]
  char v15; // [sp+12h] [bp-26h]
  char v16; // [sp+13h] [bp-25h]
  char v17; // [sp+14h] [bp-24h]
  char v18; // [sp+15h] [bp-23h]
  char v19; // [sp+16h] [bp-22h]

  result = FIELD_U8(a1, 21);
  if ( (result & 0xF0) != 0 )
  {
    v6 = a4 == 0;
    if ( a4 )
      v6 = a3 == 0;
    if ( !v6 )
    {
      result = FIELD_U8(a1, 8940);
      if ( !FIELD_U8(a1, 8940) )
      {
        v7 = sub_603FC6A0(dword_60C99DE4);
        v8 = FIELD_F32(a1, 116);
        v9 = FIELD_F32(a1, 6472) + (float)((float)(FIELD_F32(a1, 6480) - FIELD_F32(a1, 6472)) * 0.5);
        v12[0] = FIELD_F32(a1, 6468) + (float)((float)(FIELD_F32(a1, 6476) - FIELD_F32(a1, 6468)) * 0.5);
        v12[1] = v9;
        v12[2] = v8;
        v10 = FIELD_U32(a1, 20);
        LODWORD(v12[3]) = HIWORD(v10) & 0xF;
        v11 = 4;
        if ( v7 % 10 == v7 / 10 % 10 )
          v11 = 8;
        v13 = v11;
        v14 = 0;
        v15 = (BYTE1(v10) & 0xF) + 1;
        v16 = 0;
        v17 = (v10 >> 20) & 0xF;
        v18 = 0;
        v19 = 0;
        sub_60583000(dword_60CAF15C, v12, 3);
        result = sub_603FD768(dword_60C99DF4, FIELD_U8(LevelInfo_instance, 18), 1);
        FIELD_U8(a1, 8940) = 1;
      }
    }
  }
  return result;
}
