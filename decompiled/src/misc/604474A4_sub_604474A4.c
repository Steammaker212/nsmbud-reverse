/* sub_604474A4
 * address: 0x604474A4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604474A4(_DWORD *a1)
{
  unsigned __int8 *v2; // r0
  int v3; // r4
  unsigned __int8 *v4; // r5
  int v5; // r6
  unsigned __int8 *i; // r7
  _DWORD *v7; // r4
  char v8; // r1
  bool v9; // zf
  void *v10; // r5

  *a1 = off_60BFB044;
  v2 = (unsigned __int8 *)a1[1];
  v3 = v2[103];
  if ( v2[103] )
  {
    v2 = (unsigned __int8 *)a1[618];
    do
    {
      v4 = v2 + 584;
      (**(void (__fastcall ***)(unsigned __int8 *))v2)(v2);
      --v3;
      v2 = v4;
    }
    while ( v3 );
  }
  v5 = 0;
  for ( i = 0; i != (unsigned __int8 *)88; ++i )
  {
    v7 = &a1[v5];
    v8 = a1[v5 + 2];
    v9 = (v8 & 2) == 0;
    if ( (v8 & 2) != 0 )
    {
      v2 = (unsigned __int8 *)v7[6];
      v9 = v2 == 0;
    }
    if ( !v9 )
    {
      operator_delete(v2);
      v8 = *((_BYTE *)v7 + 8);
    }
    if ( (v8 & 1) != 0 )
    {
      v10 = (void *)sub_609593CC(v7[5]);
      sub_609589A4(v7[5]);
      if ( v10 )
        operator_delete(v10);
    }
    v2 = (unsigned __int8 *)*((unsigned __int8 *)v7 + 10);
    if ( i == v2 )
    {
      v2 = (unsigned __int8 *)v7[8];
      if ( v2 )
        v2 = (unsigned __int8 *)(*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v2 + 4))(v2);
    }
    v5 += 7;
  }
  sub_609589A4(a1 + 662);
  return a1;
}
