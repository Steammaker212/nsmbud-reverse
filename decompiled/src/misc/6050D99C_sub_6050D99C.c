/* sub_6050D99C
 * address: 0x6050D99C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050D99C(int a1, int a2, _DWORD *a3)
{
  _DWORD *v6; // r5
  unsigned int v7; // r4
  int result; // r0
  int v9; // r5
  int v10; // r7
  int i; // r2
  int v12; // [sp+4h] [bp-24h] BYREF
  int (**v13)(); // [sp+8h] [bp-20h] BYREF
  int v14; // [sp+Ch] [bp-1Ch]

  v6 = (_DWORD *)(a1 + 60);
  sub_604734E4((_DWORD *)(a1 + 60), 0);
  sub_60476388(v6, a2, a3);
  v12 = 1;
  sub_60474848((int)v6, &dword_60CA8070, &v12);
  v7 = sub_6050DF0C(a1);
  v13 = &sead__SafeStringBase__vtable;
  v14 = dword_60CA8074;
  result = sub_6047467C(v6, 0, &v13, (int)&dword_60CA8078, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C((int)v6, 0);
    v9 = result;
    if ( result )
    {
      v10 = FIELD_U32(result, 56);
      ((void (__fastcall *)(int (***)()))v13[3])(&v13);
      ((void (__fastcall *)(int (***)()))v13[3])(&v13);
      result = v14;
      if ( v14 == v10 )
      {
        return (*(int (__fastcall **)(int, float))(*(_DWORD *)v9 + 96))(v9, (float)v7);
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v14 + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v14 + i - 1) )
            return (*(int (__fastcall **)(int, float))(*(_DWORD *)v9 + 96))(v9, (float)v7);
          if ( i > 0x80000 || *(unsigned __int8 *)(v14 + i) != *(unsigned __int8 *)(v10 + i) )
            break;
          if ( !*(_BYTE *)(v14 + i) )
            return (*(int (__fastcall **)(int, float))(*(_DWORD *)v9 + 96))(v9, (float)v7);
        }
      }
    }
  }
  return result;
}
