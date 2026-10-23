/* sub_608F8E10
 * address: 0x608F8E10   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F8E10(int a1, int *a2)
{
  int v4; // r4
  int result; // r0
  bool v6; // zf
  unsigned int v7; // r2
  int v8; // r1
  bool v9; // zf
  unsigned int v10; // r1
  unsigned int v11; // r2

  v4 = 0;
  result = FIELD_U8(a1, 120);
  if ( (result & 1) != 0 )
  {
    v4 = a1 + 84;
    result = sead__CriticalSection__lock(a1 + 84);
  }
  v6 = *a2 == 0;
  if ( *a2 )
  {
    result = FIELD_U32(a1, 124);
    v6 = *a2 == result;
  }
  if ( !v6 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    if ( result == 1 )
    {
      v7 = FIELD_U32(a1, 124);
      if ( *a2 <= v7 )
      {
        sub_608F98A4(a1, *a2, v7);
        result = *a2;
        FIELD_U32(a1, 124) = *a2;
      }
    }
  }
  v8 = a2[1];
  v9 = v8 == 0;
  if ( v8 )
  {
    result = FIELD_U32(a1, 128);
    v9 = v8 == result;
  }
  if ( !v9 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
    if ( result == 1 )
    {
      v10 = FIELD_U32(a1, 128);
      v11 = a2[1];
      if ( v11 >= v10 )
      {
        sub_608F98A4(a1, v10, v11);
        result = a2[1];
        FIELD_U32(a1, 128) = result;
      }
    }
  }
  if ( v4 )
    return sead__CriticalSection__unlock(v4);
  return result;
}
