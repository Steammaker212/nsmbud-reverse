/* sub_604AAB3C
 * address: 0x604AAB3C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AAB3C(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r4
  int v5; // r4
  int v6; // r1
  int result; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r0

  v2 = FIELD_U32(a1, 279736);
  if ( v2 < 1 )
  {
LABEL_8:
    v6 = 0;
  }
  else
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = 0;
      if ( v3 < 4 )
        v4 = v3;
      v5 = a1 + 20556 * v4;
      if ( FIELD_U8(v5, 24276) )
      {
        if ( FIELD_U32(v5, 24228) == 6 )
          break;
      }
      if ( (int)++v3 >= v2 )
        goto LABEL_8;
    }
    v6 = 1;
  }
  sub_604AD96C(a1, v6, 0, -1.0);
  result = FIELD_U32(a1, 80);
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
        sub_6047E0EC(&dword_60CA16E0, v10, 0);
    }
    result = FIELD_U32(a1, 80);
    if ( result )
    {
      result = sub_60980A3C(result, "Pa_BtnR_00");
      if ( result )
      {
        v11 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(result + 12) + 48))(
                FIELD_U32(result, 12),
                "T_Btn_00",
                1);
        result = sub_604749C4(v11);
        if ( result )
          return sub_6047E0EC(&dword_60CA16E8, result, 0);
      }
    }
  }
  return result;
}
