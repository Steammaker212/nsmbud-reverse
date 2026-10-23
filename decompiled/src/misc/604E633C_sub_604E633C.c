/* sub_604E633C
 * address: 0x604E633C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E633C(int a1, int a2)
{
  int result; // r0
  int v5; // r5
  int v6; // r7
  int i; // r2
  int (**v8)(); // [sp+8h] [bp-20h] BYREF
  int v9; // [sp+Ch] [bp-1Ch]

  v8 = &sead__SafeStringBase__vtable;
  v9 = dword_60CA5A58;
  result = sub_6047467C(*(_DWORD **)(a1 + 4), 0xCu, &v8, (int)&dword_60CA5C78, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C(FIELD_U32(a1, 4), 0xCu);
    v5 = result;
    if ( result )
    {
      v6 = FIELD_U32(result, 56);
      ((void (__fastcall *)(int (***)()))v8[3])(&v8);
      ((void (__fastcall *)(int (***)()))v8[3])(&v8);
      result = v9;
      if ( v9 == v6 )
      {
        return (*(int (__fastcall **)(int, float))(*(_DWORD *)v5 + 96))(v5, (float)a2);
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == *(unsigned __int8 *)(v6 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v9 + i - 1) )
            return (*(int (__fastcall **)(int, float))(*(_DWORD *)v5 + 96))(v5, (float)a2);
          if ( i > 0x80000 || *(unsigned __int8 *)(v9 + i) != *(unsigned __int8 *)(v6 + i) )
            break;
          if ( !*(_BYTE *)(v9 + i) )
            return (*(int (__fastcall **)(int, float))(*(_DWORD *)v5 + 96))(v5, (float)a2);
        }
      }
    }
  }
  return result;
}
