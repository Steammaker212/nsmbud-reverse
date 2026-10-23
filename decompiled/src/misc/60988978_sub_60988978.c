/* sub_60988978
 * address: 0x60988978   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60988978(int a1, int a2, int *a3, int a4)
{
  unsigned __int16 *v4; // lr
  int v5; // r4
  unsigned int v6; // r12
  int result; // r0
  int v8; // r4
  int v9; // lr
  int (__fastcall *v10)(int); // r5
  int v11; // lr

  if ( (a2 | 1) == 0xF )
  {
    v4 = (unsigned __int16 *)a3[1];
    v5 = *(v4 - 1);
    if ( v5 == 15 )
    {
      v6 = (unsigned int)(v4 + 2);
    }
    else
    {
      if ( v5 != 14 )
      {
LABEL_9:
        nullsub_127();
        return 4;
      }
      v6 = (unsigned int)v4 + v4[2] + 6;
    }
    if ( v6 > a3[2] )
      goto LABEL_9;
    v8 = *v4;
    if ( *v4 )
    {
      v9 = *(_DWORD *)a1;
      if ( v8 == 1 )
        v10 = *(int (__fastcall **)(int))(v9 + 72);
      else
        v10 = *(int (__fastcall **)(int))(v9 + 76);
      return v10(a1);
    }
    else
    {
      v11 = v4[1];
      switch ( v11 )
      {
        case 0:
          v10 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 80);
          return v10(a1);
        case 1:
          v10 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 88);
          return v10(a1);
        case 2:
          v10 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 92);
          return v10(a1);
        case 3:
          v10 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 96);
          return v10(a1);
        case 4:
          v10 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 100);
          return v10(a1);
        default:
          switch ( v11 )
          {
            case 128:
              v10 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 104);
              return v10(a1);
            case 129:
              v10 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 108);
              return v10(a1);
            case 130:
              v10 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 112);
              return v10(a1);
            case 131:
              v10 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 116);
              return v10(a1);
            default:
              result = 0;
              break;
          }
          break;
      }
    }
  }
  else
  {
    if ( a4 )
      JUMPOUT(0x6084C89C);
    return sub_6084C7E0(a1, a2, a3);
  }
  return result;
}
