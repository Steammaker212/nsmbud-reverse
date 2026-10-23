/* sub_60507044
 * address: 0x60507044   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60507044(_DWORD *a1, unsigned int a2)
{
  int v4; // r6
  int *result; // r0
  int *v6; // r6
  int v7; // r5
  int i; // r2
  int v9; // r5
  int v10; // r5
  unsigned int v11; // r0
  int v12; // r0
  int v13; // r1
  int (**v14)(); // [sp+8h] [bp-20h] BYREF
  int v15; // [sp+Ch] [bp-1Ch]

  v4 = (int)(a1 + 15);
  v14 = &sead__SafeStringBase__vtable;
  v15 = dword_60CA7A84;
  result = (int *)sub_6047467C(a1 + 15, 0, &v14, (int)&dword_60CA7A88, 1.0, 0);
  if ( result == (int *)1 )
  {
    result = (int *)sub_6047482C(v4, 0);
    v6 = result;
    if ( result )
    {
      v7 = result[14];
      ((void (__fastcall *)(int (***)()))v14[3])(&v14);
      ((void (__fastcall *)(int (***)()))v14[3])(&v14);
      result = (int *)v15;
      if ( v15 == v7 )
      {
LABEL_11:
        result = (int *)(*(int (__fastcall **)(int *, float))(*v6 + 96))(v6, (float)a2);
        if ( a2 != 6 )
          return result;
        v9 = a1[904];
        if ( !v9 )
        {
          result = &dword_60CC6D78;
          v10 = dword_60CC6D78;
          if ( !dword_60CC6D78 )
            return result;
          v11 = sub_6050DF1C(a1, a1[3]);
          if ( v11 >= 4 )
            v11 = 0;
          v9 = v10 + 1784 * v11 + 102208;
        }
        if ( a1[900] && sub_6098E0F8(a1[903], v9, 0) == 1 )
          sub_6098E754(a1[900], a1[903], 0);
        result = (int *)a1[901];
        if ( result )
        {
          v12 = a1[903];
          if ( a1[902] > 1u )
            v12 += 24;
          result = (int *)sub_6098E0F8(v12, v9, 0);
          if ( result == (int *)1 )
          {
            v13 = a1[903];
            if ( a1[902] > 1u )
              v13 += 24;
            return (int *)sub_6098E754(a1[901], v13, 0);
          }
        }
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v15 + i - 1) == *(unsigned __int8 *)(v7 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v15 + i - 1) )
            goto LABEL_11;
          if ( i > 0x80000 || *(unsigned __int8 *)(v15 + i) != *(unsigned __int8 *)(v7 + i) )
            break;
          if ( !*(_BYTE *)(v15 + i) )
            goto LABEL_11;
        }
      }
    }
  }
  return result;
}
