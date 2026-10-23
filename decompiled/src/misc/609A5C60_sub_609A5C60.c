/* sub_609A5C60
 * address: 0x609A5C60   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_609A5C60(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // r7
  int v6; // r8
  char **v7; // r6
  char *v8; // r5
  char *v9; // r0
  char *v10; // r1
  int i; // r2
  char **v12; // r0
  char *result; // r0

  v3 = FIELD_U32(a2, 116);
  if ( v3 == a2 + 112 )
  {
LABEL_13:
    *a1 = &sead__SafeStringBase__vtable;
    v12 = &off_60C5CB34;
  }
  else
  {
    v6 = a2 + 88;
    v7 = (char **)(v3 - 24);
    while ( 1 )
    {
      (*((void (__fastcall **)(char **))*v7 + 3))(v7);
      (*((void (__fastcall **)(char **))*v7 + 3))(v7);
      v8 = v7[1];
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v9 = (char *)a3[1];
      if ( v8 == v9 )
        break;
      v10 = v7[1];
      for ( i = 1; v10[i - 1] == v9[i - 1]; i += 2 )
      {
        if ( !v10[i - 1] )
          goto LABEL_14;
        if ( i > 0x80000 || v10[i] != v9[i] )
          break;
        if ( !v10[i] )
          goto LABEL_14;
      }
      v3 = FIELD_U32(v3, 4);
      v7 = (char **)(v3 - 24);
      if ( v3 - 24 == v6 )
        goto LABEL_13;
    }
LABEL_14:
    *a1 = &sead__SafeStringBase__vtable;
    v12 = v7 + 4;
  }
  result = *v12;
  a1[1] = result;
  return result;
}
