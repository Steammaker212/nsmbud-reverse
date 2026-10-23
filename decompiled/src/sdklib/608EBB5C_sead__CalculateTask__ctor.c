/* sead__CalculateTask__ctor
 * address: 0x608EBB5C   size: 312   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sead__CalculateTask__ctor(sead_IDisposer *a1, int **a2, int a3)
{
  void (__fastcall ***v5)(_DWORD, sead_IDisposer *, int); // r0
  _DWORD v7[8]; // [sp+0h] [bp-20h] BYREF

  sead__TaskBase__ctor(a1, a2, a3);
  FIELD_U32(a1, 0x0) = (int)&sead__CalculateTask__vtable;
  a1[7].vtable = (int)off_60BFA048;
  sead__TreeNode__ctor(&a1[8].vtable);
  a1[9].vtable = (int)&a1[7];
  a1[9].containingHeap = (int)&sead__SafeStringBase__vtable;
  a1[9].field_8 = (int)&byte_60ABC94D;
  sead_IDisposer_ctor(a1 + 7);
  a1[7].vtable = (int)off_60BFA048;
  a1[11].field_8 = 0;
  a1[11].field_C = 0;
  a1[10].field_C = 0;
  a1[10].field_8 = 0;
  a1[10].containingHeap = 0;
  a1[10].vtable = 0;
  a1[9].field_C = (int)off_60BFA060;
  a1[11].containingHeap = 0;
  sead__MethodTreeNode__lock(&a1[7]);
  v5 = (void (__fastcall ***)(_DWORD, sead_IDisposer *, int))a1[11].field_8;
  if ( v5 )
    (**v5)(v5, a1 + 7, 3);
  a1[11].containingHeap = 3;
  sead__MethodTreeNode__unlock(&a1[7]);
  sead__MethodTreeNode__lock(&a1[7]);
  a1[10].vtable = (int)a1;
  a1[10].containingHeap = 88;
  a1[10].field_8 = 1;
  a1[9].field_C = (int)off_60C5C418;
  sead__MethodTreeNode__unlock(&a1[7]);
  if ( a3 )
  {
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = a3;
    sead__SafeStringBase__operator_assign((int)&a1[9].containingHeap, (int)v7);
  }
  return a1;
}
