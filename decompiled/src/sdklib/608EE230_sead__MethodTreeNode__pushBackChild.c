/* sead__MethodTreeNode__pushBackChild
 * address: 0x608EE230   size: 108   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__MethodTreeNode__pushBackChild(int a1, _DWORD *a2)
{
  int v4; // r0
  _DWORD *v5; // r0
  bool v6; // zf
  int result; // r0

  v4 = FIELD_U32(a1, 60);
  if ( v4 )
    sead__CriticalSection__lock(v4);
  sub_608DF090(a2 + 4);
  a2[15] = FIELD_U32(a1, 60);
  v5 = (_DWORD *)a2[5];
  v6 = v5 == 0;
  if ( v5 )
  {
    v5 = (_DWORD *)v5[4];
    v6 = v5 == 0;
  }
  if ( !v6 )
    sead__MethodTreeNode__attachMutexRec_const(v5, FIELD_U32(a1, 60));
  sub_608DEFB0(a1 + 16, a2 + 4);
  result = FIELD_U32(a1, 60);
  if ( result )
    return sead__CriticalSection__unlock(result);
  return result;
}
