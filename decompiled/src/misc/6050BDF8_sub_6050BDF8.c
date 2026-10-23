/* sub_6050BDF8
 * address: 0x6050BDF8   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6050BDF8(_DWORD *a1, unsigned int a2)
{
  unsigned int result; // r0
  unsigned int v5; // r6
  int v6; // r5
  int i; // r2
  int v8; // r5
  _DWORD v9[2]; // [sp+8h] [bp-28h] BYREF
  int (**v10)(); // [sp+10h] [bp-20h] BYREF
  int v11; // [sp+14h] [bp-1Ch]

  v10 = &sead__SafeStringBase__vtable;
  v11 = CharaSet_Team_Loop_ref(0);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = G_Icon_00_G_Team_00_G_Loop_00_ref(0);
  result = sub_6047467C(a1 + 15, 0, &v10, (int)v9, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C((int)(a1 + 15), 0);
    v5 = result;
    if ( result )
    {
      v6 = FIELD_U32(result, 56);
      ((void (__fastcall *)(int (***)()))v10[3])(&v10);
      ((void (__fastcall *)(int (***)()))v10[3])(&v10);
      result = v11;
      if ( v11 == v6 )
      {
LABEL_11:
        result = (*(int (__fastcall **)(unsigned int, float))(*(_DWORD *)v5 + 96))(v5, (float)a2);
        if ( a2 == 6 )
        {
          v8 = dword_60CC6D78;
          result = sub_6050DF1C(a1, a1[3]);
          if ( a1[910] )
          {
            if ( result >= 4 )
              result = 0;
            result = sub_6098E0F8(a1[912], v8 + 1784 * result + 102208, 0);
            if ( result == 1 )
              return sub_6098E754(a1[910], a1[912], 0);
          }
        }
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == *(unsigned __int8 *)(v6 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v11 + i - 1) )
            goto LABEL_11;
          if ( i > 0x80000 || *(unsigned __int8 *)(v11 + i) != *(unsigned __int8 *)(v6 + i) )
            break;
          if ( !*(_BYTE *)(v11 + i) )
            goto LABEL_11;
        }
      }
    }
  }
  return result;
}
