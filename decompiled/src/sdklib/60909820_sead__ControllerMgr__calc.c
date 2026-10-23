/* sead__ControllerMgr__calc
 * address: 0x60909820   size: 124   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sead__ControllerMgr__calc(_DWORD *a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r5
  int v4; // r7
  char *v5; // r0
  int *result; // r0
  int *v7; // r5
  int v8; // t1

  v2 = (_DWORD *)a1[50];
  v3 = a1 + 49;
  if ( v2 != a1 + 49 )
  {
    v4 = a1[52];
    v5 = (char *)v2 - v4;
    do
    {
      (*(void (__fastcall **)(char *))(*(_DWORD *)v5 + 16))(v5);
      v2 = (_DWORD *)v2[1];
      v5 = (char *)v2 - v4;
    }
    while ( (char *)v2 - v4 != (char *)v3 - a1[52] );
  }
  result = (int *)a1[53];
  if ( result )
  {
    v7 = (int *)a1[55];
    do
    {
      v8 = *v7++;
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 16))(v8);
      result = (int *)(a1[55] + 4 * a1[53]);
    }
    while ( v7 != result );
  }
  return result;
}
