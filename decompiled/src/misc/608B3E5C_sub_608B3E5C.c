/* sub_608B3E5C
 * address: 0x608B3E5C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B3E5C(int result, int a2, int a3)
{
  int *v5; // r5
  int v6; // r0
  _DWORD v7[3]; // [sp+0h] [bp-58h] BYREF
  char v8; // [sp+Ch] [bp-4Ch]
  _BYTE v9[8]; // [sp+18h] [bp-40h] BYREF
  _DWORD v10[2]; // [sp+20h] [bp-38h] BYREF
  __int16 v11; // [sp+28h] [bp-30h]
  int v12; // [sp+2Ch] [bp-2Ch] BYREF

  v5 = (int *)result;
  if ( a2 != -1 )
  {
    result = sub_608A9BC0(FIELD_U32(result, 4), (int)&v12, a2);
    if ( result == 1 )
    {
      v10[1] = 0;
      v11 = 0;
      result = sub_608A9D48(v5[1], a2, (int)v10);
      if ( result == 1 )
      {
        result = (*(int (__fastcall **)(int *, int))(*v5 + 16))(v5, v12);
        if ( result )
        {
          v6 = sub_608CBCA4(v9, result);
          v8 = 0;
          v7[2] = 0;
          result = sub_608CBE0C(v6, v7, v10[0], 0);
          if ( result == 1 )
            return sub_608B3F18(v5, v7[0], a3);
        }
      }
    }
  }
  return result;
}
