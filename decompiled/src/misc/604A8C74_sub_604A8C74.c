/* sub_604A8C74
 * address: 0x604A8C74   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A8C74(_DWORD *a1)
{
  int v2; // r9
  int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r6
  _DWORD *v6; // r6
  int result; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r0
  _DWORD v18[12]; // [sp+8h] [bp-30h] BYREF

  v2 = 0;
  v3 = a1[69934];
  if ( v3 >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = 0;
      if ( v4 < 4 )
        v5 = v4;
      v6 = &a1[5139 * v5];
      if ( *((_BYTE *)v6 + 24276) )
      {
        if ( v6[6057] == 6 )
          break;
      }
      if ( (int)++v4 >= v3 )
      {
        v2 = 0;
        goto LABEL_10;
      }
    }
    v2 = 1;
  }
LABEL_10:
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = dword_60CA1784;
  sub_6047467C(a1 + 16, 1u, v18, (int)&unk_60CA1738, 1.0, 0);
  sub_6047467C(a1 + 16, 2u, v18, (int)&dword_60CA1740, 1.0, 0);
  sub_6047467C(a1 + 16, 3u, v18, (int)&dword_60CA1748, 1.0, 0);
  if ( v2 == 1 )
    sub_6047467C(a1 + 16, 5u, v18, (int)&dword_60CA1758, 1.0, 0);
  result = a1[20];
  if ( result )
  {
    v8 = sub_60980A3C(result, "Pa_BtnL_00");
    if ( v8 )
    {
      v9 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(v8 + 12) + 48))(
             FIELD_U32(v8, 12),
             "T_Btn_00",
             1);
      v10 = sub_604749C4(v9);
      if ( v10 )
        sub_6047E0EC(&dword_60CA16D0, v10, 0);
    }
    result = a1[20];
    if ( result )
    {
      v11 = sub_60980A3C(result, "Pa_BtnR_00");
      if ( v11 )
      {
        v12 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(v11 + 12) + 48))(
                FIELD_U32(v11, 12),
                "T_Btn_00",
                1);
        v13 = sub_604749C4(v12);
        if ( v13 )
          sub_6047E0EC(&dword_60CA16D8, v13, 0);
      }
      result = a1[20];
      if ( result )
      {
        v14 = sub_60980A3C(result, "Pa_BtnL_01");
        if ( v14 )
        {
          v15 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(v14 + 12) + 48))(
                  FIELD_U32(v14, 12),
                  "T_Btn_00",
                  1);
          v16 = sub_604749C4(v15);
          if ( v16 )
            sub_6047E0EC(&dword_60CA16D0, v16, 0);
        }
        result = a1[20];
        if ( result )
        {
          result = sub_60980A3C(result, "Pa_BtnR_01");
          if ( result )
          {
            v17 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(result + 12) + 48))(
                    FIELD_U32(result, 12),
                    "T_Btn_00",
                    1);
            result = sub_604749C4(v17);
            if ( result )
              return sub_6047E0EC(&dword_60CA16D8, result, 0);
          }
        }
      }
    }
  }
  return result;
}
