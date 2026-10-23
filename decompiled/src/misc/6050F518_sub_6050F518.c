/* sub_6050F518
 * address: 0x6050F518   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6050F518(_DWORD *a1)
{
  int v1; // r5
  unsigned int v2; // r7
  int v3; // r4
  _DWORD *result; // r0
  _DWORD *v5; // r4
  int v6; // r6
  int i; // r2
  int v8; // r1
  int j; // r3
  int (**v10)(); // [sp+8h] [bp-20h] BYREF
  int v11; // [sp+Ch] [bp-1Ch]

  v10 = &sead__SafeStringBase__vtable;
  v1 = dword_60CA8160;
  v11 = dword_60CA8160;
  v2 = a1[940] != 7;
  if ( a1[941] != 7 )
    ++v2;
  if ( a1[942] != 7 )
    ++v2;
  v3 = (int)(a1 + 15);
  if ( a1[943] != 7 )
    ++v2;
  if ( v2 )
  {
    result = (_DWORD *)sub_6047467C(a1 + 15, 4u, &v10, (int)&dword_60CA819C, 1.0, 0);
    if ( result == (_DWORD *)1 )
    {
      result = (_DWORD *)sub_6047482C(v3, 4u);
      v5 = result;
      if ( result )
      {
        v6 = result[14];
        ((void (__fastcall *)(int (***)()))v10[3])(&v10);
        ((void (__fastcall *)(int (***)()))v10[3])(&v10);
        result = (_DWORD *)v11;
        if ( v11 == v6 )
        {
LABEL_18:
          if ( v2 >= 4 )
            v2 = 4;
          return (_DWORD *)(*(int (__fastcall **)(_DWORD *, float))(*v5 + 96))(v5, (float)(int)(v2 - 1));
        }
        else
        {
          for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == *(unsigned __int8 *)(v6 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v11 + i - 1) )
              goto LABEL_18;
            if ( i >= 524289 || *(unsigned __int8 *)(v11 + i) != *(unsigned __int8 *)(v6 + i) )
              break;
            if ( !*(_BYTE *)(v11 + i) )
              goto LABEL_18;
          }
        }
      }
    }
  }
  else
  {
    result = (_DWORD *)sub_6047482C((int)(a1 + 15), 4u);
    if ( result )
    {
      v8 = result[14];
      if ( v1 == v8 )
      {
        return (_DWORD *)(*(int (__fastcall **)(_DWORD *, _DWORD))(*result + 16))(result, 0);
      }
      else
      {
        for ( j = 1; *(unsigned __int8 *)(v1 + j - 1) == *(unsigned __int8 *)(v8 + j - 1); j += 2 )
        {
          if ( !*(_BYTE *)(v1 + j - 1) )
            return (_DWORD *)(*(int (__fastcall **)(_DWORD *, _DWORD))(*result + 16))(result, 0);
          if ( j >= 524289 || *(unsigned __int8 *)(v1 + j) != *(unsigned __int8 *)(v8 + j) )
            break;
          if ( !*(_BYTE *)(v1 + j) )
            return (_DWORD *)(*(int (__fastcall **)(_DWORD *, _DWORD))(*result + 16))(result, 0);
        }
      }
    }
  }
  return result;
}
