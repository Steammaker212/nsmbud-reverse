/* sub_608DEA40
 * address: 0x608DEA40   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DEA40(char *a1, int a2, int (__fastcall *a3)(char *, char *))
{
  int result; // r0
  char *v7; // r8
  char *v8; // r4
  char *v9; // r6
  _DWORD *v10; // r0

  result = *((_DWORD *)a1 + 2);
  if ( result >= 2 )
  {
    result = *((_DWORD *)a1 + 1);
    v7 = *(char **)(result + 4);
    while ( v7 != a1 )
    {
      v8 = v7;
      v9 = *(char **)v7;
      v7 = *((char **)v7 + 1);
      result = a3(&v9[-a2], &v8[-a2]);
      if ( result >= 1 )
      {
        while ( 1 )
        {
          v9 = *(char **)v9;
          if ( v9 == a1 )
            break;
          if ( a3(&v9[-a2], &v8[-a2]) <= 0 )
            goto LABEL_8;
        }
        v9 = a1;
LABEL_8:
        if ( *(_DWORD *)v8 )
          *(_DWORD *)(*(_DWORD *)v8 + 4) = *((_DWORD *)v8 + 1);
        v10 = *((_DWORD **)v8 + 1);
        if ( v10 )
          *v10 = *(_DWORD *)v8;
        *(_DWORD *)v8 = 0;
        *((_DWORD *)v8 + 1) = 0;
        result = *((_DWORD *)v9 + 1);
        *((_DWORD *)v9 + 1) = v8;
        *(_DWORD *)v8 = v9;
        *((_DWORD *)v8 + 1) = result;
        if ( result )
          *(_DWORD *)result = v8;
      }
    }
  }
  return result;
}
