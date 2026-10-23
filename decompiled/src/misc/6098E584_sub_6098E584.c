/* sub_6098E584
 * address: 0x6098E584   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char **__fastcall sub_6098E584(int a1)
{
  const char **result; // r0
  const char **v3; // r4
  const char **v4; // r6
  int v5; // r4
  const char **v6; // r6
  bool v7; // zf
  int v8; // r7
  _DWORD *v9; // r0
  float v10; // s16
  const char **v11; // r7
  int v12; // r7
  const char **v13; // r0
  float v14; // s18
  float v15; // s0
  float v16; // s2
  float v17; // s4

  result = sub_6085982C(a1, "CenteringPairLeft");
  v3 = result;
  if ( result )
  {
    result = sub_6085982C(a1, "CenteringPairRight");
    v4 = result;
    if ( result )
    {
      v5 = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)a1 + 48))(a1, &v3[1][(_DWORD)v3], 1);
      result = (const char **)(*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)a1 + 48))(
                                a1,
                                &v4[1][(_DWORD)v4],
                                1);
      v6 = result;
      v7 = v5 == 0;
      if ( v5 )
        v7 = result == 0;
      if ( !v7 )
      {
        v8 = sub_60990BBC(result);
        v9 = (_DWORD *)(*((int (__fastcall **)(const char **))*v6 + 2))(v6);
        if ( v9 )
        {
          while ( v9 != (_DWORD *)v8 )
          {
            v9 = (_DWORD *)*v9;
            if ( !v9 )
              goto LABEL_12;
          }
          result = (const char **)(*((_BYTE *)v6 + 218) & 3);
          if ( result == (const char **)1 )
          {
            v10 = 1.0;
            v11 = (const char **)v5;
            v5 = (int)v6;
LABEL_18:
            v13 = sub_6085982C(a1, "CenteringPairMargin");
            if ( v13 )
              v14 = *(float *)&v13[1][(_DWORD)v13];
            else
              v14 = 0.0;
            v15 = sub_60985DE8(v5);
            v16 = *((float *)v11 + 14);
            v17 = v14 + (float)(v15 + v16);
            *((float *)v11 + 6) = (float)(v10 * (float)(v16 - v17)) * 0.5;
            *((_BYTE *)v11 + 64) |= 0x10u;
            FIELD_F32(v5, 24) = v10 * (float)((float)((float)(v17 + FIELD_F32(v5, 56)) * 0.5) - v15);
            result = (const char **)(FIELD_U8(v5, 64) | 0x10);
            FIELD_U8(v5, 64) = (_BYTE)result;
          }
        }
        else
        {
LABEL_12:
          v12 = sub_60990BBC(v9);
          result = (const char **)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          if ( result )
          {
            while ( result != (const char **)v12 )
            {
              result = (const char **)*result;
              if ( !result )
                return result;
            }
            result = (const char **)(FIELD_U8(v5, 218) & 3);
            if ( result == (const char **)2 )
            {
              v10 = -1.0;
              v11 = v6;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  return result;
}
