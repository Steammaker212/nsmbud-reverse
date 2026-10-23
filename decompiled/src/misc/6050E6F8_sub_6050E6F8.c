/* sub_6050E6F8
 * address: 0x6050E6F8   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6050E6F8(int *a1, unsigned int a2)
{
  int v4; // r6
  unsigned int result; // r0
  unsigned int v6; // r6
  int v7; // r5
  int i; // r2
  int v9; // r5
  int (**v10)(); // [sp+8h] [bp-20h] BYREF
  int v11; // [sp+Ch] [bp-1Ch]

  v4 = (int)(a1 + 15);
  v10 = &sead__SafeStringBase__vtable;
  v11 = dword_60CA80E0;
  result = sub_6047467C(a1 + 15, 0, &v10, (int)&dword_60CA80F4, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C(v4, 0);
    v6 = result;
    if ( result )
    {
      v7 = FIELD_U32(result, 56);
      ((void (__fastcall *)(int (***)()))v10[3])(&v10);
      ((void (__fastcall *)(int (***)()))v10[3])(&v10);
      result = v11;
      if ( v11 == v7 )
      {
LABEL_11:
        result = (*(int (__fastcall **)(unsigned int, float))(*(_DWORD *)v6 + 96))(v6, (float)a2);
        if ( a2 == 6 )
        {
          result = (unsigned int)&dword_60CC6D78;
          v9 = dword_60CC6D78;
          if ( dword_60CC6D78 )
          {
            result = sub_6050DF1C((int)a1, a1[3]);
            if ( a1[912] )
            {
              if ( result >= 4 )
                result = 0;
              result = sub_6098E0F8(a1[915], v9 + 1784 * result + 102208, 0);
              if ( result == 1 )
                return sub_6098E754(a1[912], a1[915], 0);
            }
          }
        }
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == *(unsigned __int8 *)(v7 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v11 + i - 1) )
            goto LABEL_11;
          if ( i > 0x80000 || *(unsigned __int8 *)(v11 + i) != *(unsigned __int8 *)(v7 + i) )
            break;
          if ( !*(_BYTE *)(v11 + i) )
            goto LABEL_11;
        }
      }
    }
  }
  return result;
}
