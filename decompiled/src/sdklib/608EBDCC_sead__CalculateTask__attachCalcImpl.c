/* sead__CalculateTask__attachCalcImpl
 * address: 0x608EBDCC   size: 140   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__CalculateTask__attachCalcImpl(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r2
  int v7; // r0
  int v8; // r1

  v2 = sead__TaskBase__getMethodTreeMgr_const(a1) + 4;
  sead__CriticalSection__lock(v2);
  v3 = FIELD_U32(a1, 16);
  if ( v3 )
    v4 = FIELD_U32(v3, 16);
  else
    v4 = 0;
  if ( !FIELD_U32(a1, 100) )
  {
    v6 = a1 + 112;
    v7 = a1;
    v8 = 0;
LABEL_9:
    sead__TaskBase__attachMethodWithCheck(v7, v8, v6);
    return sead__CriticalSection__unlock(v2);
  }
  if ( !v4 )
  {
    v6 = a1 + 112;
    v7 = a1;
    v8 = 1;
    goto LABEL_9;
  }
  v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 80))(v4, 1);
  sead__MethodTreeNode__pushBackChild(v5, a1 + 112);
  return sead__CriticalSection__unlock(v2);
}
