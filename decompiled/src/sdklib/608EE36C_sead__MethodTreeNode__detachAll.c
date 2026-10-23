/* sead__MethodTreeNode__detachAll
 * address: 0x608EE36C   size: 76   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__MethodTreeNode__detachAll(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0

  v2 = a1[15];
  sead__MethodTreeNode__attachMutexRec_const(a1, 0);
  a1[15] = v2;
  if ( v2 )
    sead__CriticalSection__lock(v2);
  sead__TreeNode__detachAll(a1 + 4);
  v3 = a1[15];
  if ( v3 )
    sead__CriticalSection__unlock(v3);
  a1[15] = 0;
  return 0;
}
