/* sub_6050BF9C
 * address: 0x6050BF9C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050BF9C(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r7
  int i; // r2
  _DWORD v6[2]; // [sp+8h] [bp-28h] BYREF
  int (**v7)(); // [sp+10h] [bp-20h] BYREF
  int v8; // [sp+14h] [bp-1Ch]

  v7 = &sead__SafeStringBase__vtable;
  v8 = CharaSet_Team_Loop_ref(1);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = G_Icon_00_G_Team_00_G_Loop_00_ref(1);
  result = sub_6047467C((_DWORD *)(a1 + 60), 1u, &v7, (int)v6, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C(a1 + 60, 1u);
    v3 = result;
    if ( result )
    {
      v4 = FIELD_U32(result, 56);
      ((void (__fastcall *)(int (***)()))v7[3])(&v7);
      ((void (__fastcall *)(int (***)()))v7[3])(&v7);
      result = v8;
      if ( v8 == v4 )
      {
        return (*(int (__fastcall **)(int, float))(*(_DWORD *)v3 + 96))(v3, (float)FIELD_S32(a1, 3652));
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v8 + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v8 + i - 1) )
            return (*(int (__fastcall **)(int, float))(*(_DWORD *)v3 + 96))(v3, (float)FIELD_S32(a1, 3652));
          if ( i > 0x80000 || *(unsigned __int8 *)(v8 + i) != *(unsigned __int8 *)(v4 + i) )
            break;
          if ( !*(_BYTE *)(v8 + i) )
            return (*(int (__fastcall **)(int, float))(*(_DWORD *)v3 + 96))(v3, (float)FIELD_S32(a1, 3652));
        }
      }
    }
  }
  return result;
}
