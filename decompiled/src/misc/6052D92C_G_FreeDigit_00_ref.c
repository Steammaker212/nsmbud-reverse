/* G_FreeDigit_00_ref
 * address: 0x6052D92C   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall G_FreeDigit_00_ref(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int i; // r2
  int result; // r0
  float *v9; // r5
  int v10; // r4
  int j; // r2
  _DWORD v12[2]; // [sp+8h] [bp-28h] BYREF
  int (**v13)(); // [sp+10h] [bp-20h] BYREF
  int v14; // [sp+14h] [bp-1Ch]

  v3 = (_DWORD *)(a1 + 72);
  v13 = &sead__SafeStringBase__vtable;
  v4 = dword_60CAA6FC;
  v14 = dword_60CAA6FC;
  v5 = sub_6047482C(a1 + 72, 6u);
  if ( v5 )
  {
    v6 = FIELD_U32(v5, 56);
    if ( v4 == v6 )
      goto LABEL_12;
    for ( i = 1; *(unsigned __int8 *)(v4 + i - 1) == *(unsigned __int8 *)(v6 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v4 + i - 1) )
        goto LABEL_12;
      if ( i >= 524289 || *(unsigned __int8 *)(v4 + i) != *(unsigned __int8 *)(v6 + i) )
        break;
      if ( !*(_BYTE *)(v4 + i) )
        goto LABEL_12;
    }
  }
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "G_FreeDigit_00";
  sub_6047467C(v3, 6u, &v13, (int)v12, 1.0, 0);
LABEL_12:
  result = sub_6047482C((int)v3, 6u);
  v9 = (float *)result;
  if ( result )
  {
    v10 = FIELD_U32(result, 56);
    ((void (__fastcall *)(int (***)()))v13[3])(&v13);
    ((void (__fastcall *)(int (***)()))v13[3])(&v13);
    result = v14;
    if ( v14 == v10 )
    {
LABEL_21:
      result = 3;
      if ( a2 < 1000 )
      {
        result = 2;
        if ( a2 <= 99 )
          result = a2 > 9;
      }
      if ( result != (int)v9[4] )
        return (*(int (__fastcall **)(float *, float))(*(_DWORD *)v9 + 96))(v9, (float)result);
    }
    else
    {
      for ( j = 1; *(unsigned __int8 *)(v14 + j - 1) == *(unsigned __int8 *)(v10 + j - 1); j += 2 )
      {
        if ( !*(_BYTE *)(v14 + j - 1) )
          goto LABEL_21;
        if ( j >= 524289 || *(unsigned __int8 *)(v14 + j) != *(unsigned __int8 *)(v10 + j) )
          break;
        if ( !*(_BYTE *)(v14 + j) )
          goto LABEL_21;
      }
    }
  }
  return result;
}
