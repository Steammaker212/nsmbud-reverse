/* sub_6016AD7C
 * address: 0x6016AD7C   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016AD7C(_DWORD *a1, unsigned int a2)
{
  int v3; // r1
  int v4; // r1
  int v5; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  _DWORD v9[12]; // [sp+0h] [bp-70h] BYREF
  _DWORD v10[16]; // [sp+30h] [bp-40h] BYREF

  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "CS_W1";
  v10[2] = &sead__SafeStringBase__vtable;
  v9[0] = &sead__SafeStringBase__vtable;
  v10[3] = "CS_W2a";
  v10[4] = &sead__SafeStringBase__vtable;
  v10[5] = "CS_W3";
  v10[6] = &sead__SafeStringBase__vtable;
  v10[7] = "CS_W4";
  v10[8] = &sead__SafeStringBase__vtable;
  v10[9] = "CS_W5a";
  v10[10] = &sead__SafeStringBase__vtable;
  v10[11] = "CS_W5b";
  v9[1] = "CS_W6a";
  v9[2] = &sead__SafeStringBase__vtable;
  v9[3] = "CS_W7";
  v9[4] = &sead__SafeStringBase__vtable;
  v9[5] = "CS_W8a";
  v9[6] = &sead__SafeStringBase__vtable;
  v9[7] = "CS_W8b";
  v9[8] = &sead__SafeStringBase__vtable;
  v9[9] = "CS_W9a";
  v9[10] = &sead__SafeStringBase__vtable;
  v9[11] = "CS_W9b";
  v3 = a1[425];
  if ( v3 >= 0 && v3 < a1[4] && (v4 = **(_DWORD **)(a1[6] + 4 * v3)) != 0 )
  {
    v5 = 0;
    if ( v4 != 1 )
      return v5;
    v6 = a1 + 428;
    v7 = v10;
  }
  else
  {
    v7 = v9;
    v6 = a1 + 429;
  }
  v5 = *v6;
  if ( (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 64))(*v6, 4) <= a2 )
  {
    sub_6082293C(ArchiveManagerMaybe_instance, v7 + 10);
    if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 64))(v5, 4) <= a2 )
    {
      sub_6082293C(ArchiveManagerMaybe_instance, v7 + 8);
      if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 64))(v5, 4) <= a2 )
      {
        sub_6082293C(ArchiveManagerMaybe_instance, v7 + 6);
        if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 64))(v5, 4) <= a2 )
        {
          sub_6082293C(ArchiveManagerMaybe_instance, v7 + 4);
          if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 64))(v5, 4) <= a2 )
          {
            sub_6082293C(ArchiveManagerMaybe_instance, v7 + 2);
            if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 64))(v5, 4) <= a2 )
            {
              sub_6082293C(ArchiveManagerMaybe_instance, v7);
              return 0;
            }
          }
        }
      }
    }
  }
  return v5;
}
