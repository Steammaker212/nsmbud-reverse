/* sead__MethodTreeNode__attachMutexRec_const
 * address: 0x608EE2AC   size: 68   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__MethodTreeNode__attachMutexRec_const(_DWORD *a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r0
  int result; // r0
  bool v7; // zf

  do
  {
    a1[15] = a2;
    v4 = a1[5];
    if ( v4 )
    {
      v5 = *(_DWORD **)(v4 + 16);
      if ( v5 )
        sead__MethodTreeNode__attachMutexRec_const(v5, a2);
    }
    result = a1[6];
    v7 = result == 0;
    if ( result )
    {
      a1 = *(_DWORD **)(result + 16);
      v7 = a1 == 0;
    }
  }
  while ( !v7 );
  return result;
}
