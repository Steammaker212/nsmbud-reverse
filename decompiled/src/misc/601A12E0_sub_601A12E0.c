/* sub_601A12E0
 * address: 0x601A12E0   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A12E0(int a1)
{
  int i; // r5
  int result; // r0
  int v4; // r0
  unsigned int v5; // r1
  int (***v6)(); // r2
  int (**v7)(); // [sp+14h] [bp-34h] BYREF
  const char *v8; // [sp+18h] [bp-30h]
  int (**v9)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v10; // [sp+20h] [bp-28h]

  for ( i = 0; i < 9; ++i )
  {
    result = sub_601A443C(dword_60C89E18, i, 0);
    if ( !result )
      break;
    switch ( i )
    {
      case 0:
        v9 = &sead__SafeStringBase__vtable;
        v10 = "RFd01W1M0";
        if ( (sub_6022DD38(dword_60C8D864, 0) | 2) == 3 )
          sub_601A11E4(a1, 0, (const char **)&v9, 1);
        v7 = &sead__SafeStringBase__vtable;
        v8 = "RFd02W1X0";
        result = sub_6022DD38(dword_60C8D864, 9) | 2;
        if ( result != 3 )
          break;
        v4 = a1;
        v5 = 0;
        v6 = &v7;
        goto LABEL_13;
      case 1:
        v9 = &sead__SafeStringBase__vtable;
        v10 = "RFd01W2M0";
        result = sub_6022DD38(dword_60C8D864, 1) | 2;
        if ( result == 3 )
        {
          v4 = a1;
          v5 = 1;
          v6 = &v9;
LABEL_13:
          result = sub_601A11E4(v4, v5, (const char **)v6, 1);
        }
        break;
      case 8:
        v9 = &sead__SafeStringBase__vtable;
        v7 = &sead__SafeStringBase__vtable;
        v10 = "RW9M0W909";
        v8 = "W909";
        result = sub_6022C144(dword_60C8D864, &v7);
        if ( result == 3 )
          return sub_601A11E4(a1, 8u, (const char **)&v9, 1);
        return result;
    }
  }
  return result;
}
