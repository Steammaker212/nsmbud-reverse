/* sub_604E7E14
 * address: 0x604E7E14   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E7E14(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r6
  int i; // r2
  int (**v6)(); // [sp+8h] [bp-18h] BYREF
  int v7; // [sp+Ch] [bp-14h]

  v6 = &sead__SafeStringBase__vtable;
  v7 = dword_60CA5A80;
  result = sub_6047467C(*(_DWORD **)(a1 + 4), 0xAu, &v6, (int)&dword_60CA5C68, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C(FIELD_U32(a1, 4), 0xAu);
    v3 = result;
    if ( result )
    {
      v4 = FIELD_U32(result, 56);
      ((void (__fastcall *)(int (***)()))v6[3])(&v6);
      ((void (__fastcall *)(int (***)()))v6[3])(&v6);
      result = v7;
      if ( v7 == v4 )
      {
        return (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v7 + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v7 + i - 1) )
            return (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
          if ( i > 0x80000 || *(unsigned __int8 *)(v7 + i) != *(unsigned __int8 *)(v4 + i) )
            break;
          if ( !*(_BYTE *)(v7 + i) )
            return (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
        }
      }
    }
  }
  return result;
}
