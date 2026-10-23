/* sub_601E6C04
 * address: 0x601E6C04   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E6C04(int a1)
{
  int v2; // r9
  char v3; // r0
  bool v4; // zf
  char v5; // r1
  char v6; // r10
  char v7; // r11
  char v8; // r5
  char v9; // r7
  char v10; // r4
  char v11; // r8
  char v12; // r0
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf
  bool v16; // zf
  char v17; // r0
  bool v18; // zf
  char v19; // r1
  int result; // r0
  int v21; // [sp+0h] [bp-30h]
  int v22; // [sp+4h] [bp-2Ch]
  int v23; // [sp+8h] [bp-28h]

  v2 = dword_60CC6D78;
  v21 = dword_60CC6D78 + 796;
  if ( ((int (*)(void))sub_603F6F84)() == 1 )
    FIELD_U8(v2, 2092) |= 2u;
  v22 = a1;
  if ( FIELD_U8(a1, 56) == 255 )
  {
    v3 = FIELD_U8(v2, 2092);
    v4 = (v3 & 2) == 0;
    v5 = v3 | 4;
    if ( (v3 & 2) == 0 )
      v3 |= 6u;
    FIELD_U8(v2, 2092) = v5;
    if ( v4 )
      FIELD_U8(v2, 2092) = v3;
  }
  v23 = (unsigned __int8)sub_60408230(v2 + 52, 8, 0);
  v6 = sub_60408230(v2 + 52, 8, 1);
  v7 = sub_60408230(v2 + 52, 8, 2);
  v8 = sub_60408230(v2 + 52, 8, 3);
  v9 = sub_60408230(v2 + 52, 8, 4);
  v10 = sub_60408230(v2 + 52, 8, 5);
  v11 = sub_60408230(v2 + 52, 8, 6);
  v12 = sub_60408230(v2 + 52, 8, 7);
  v13 = v23 == 7;
  if ( v23 == 7 )
    v13 = v6 == 7;
  if ( v13 )
  {
    v14 = v7 == 7;
    if ( v7 == 7 )
      v14 = v8 == 7;
    if ( v14 )
    {
      v15 = v9 == 7;
      if ( v9 == 7 )
        v15 = v10 == 7;
      if ( v15 )
      {
        v16 = v11 == 7;
        if ( v11 == 7 )
          v16 = v12 == 7;
        if ( v16 )
        {
          v17 = FIELD_U8(v2, 2092);
          v18 = (v17 & 2) == 0;
          v19 = v17 | 8;
          if ( (v17 & 2) == 0 )
            v17 |= 0xAu;
          FIELD_U8(v2, 2092) = v19;
          if ( v18 )
            FIELD_U8(v2, 2092) = v17;
        }
      }
    }
  }
  result = sub_608FBB8C(FIELD_U8(v2, 109034));
  if ( result == 7 )
  {
    result = FIELD_U8(v22, 57);
    if ( (result & 1) != 0 )
    {
      result = sub_603F7144(v21);
      if ( result == 1 )
      {
        result = sub_603F6F84(v21);
        if ( result == 1 )
        {
          result = sub_603F6AA0(v21, 8, 0);
          if ( result != 4 )
          {
            result = sub_603F6AA0(v21, 8, 1);
            if ( result != 4 )
            {
              result = sub_603F6AA0(v21, 8, 2);
              if ( result != 4 )
              {
                result = sub_603F6AA0(v21, 8, 3);
                if ( result != 4 )
                {
                  result = sub_603F6AA0(v21, 8, 4);
                  if ( result != 4 )
                  {
                    result = sub_603F6AA0(v21, 8, 5);
                    if ( result != 4 )
                    {
                      result = sub_603F6AA0(v21, 8, 6);
                      if ( result != 4 )
                      {
                        result = sub_603F6AA0(v21, 8, 7);
                        if ( result != 4 )
                        {
                          result = sub_603F6AA0(v21, 8, 8);
                          if ( result != 4 )
                          {
                            result = FIELD_U8(v2, 2092) | 0x10;
                            FIELD_U8(v2, 2092) = result;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
