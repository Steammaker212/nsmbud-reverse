/* sead__TaskBase__ctor
 * address: 0x608EF360   size: 200   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sead__TaskBase__ctor(sead_IDisposer *a1, int **a2, int a3)
{
  int v6; // r2
  int v7; // r3
  int v8; // r4
  int v9; // r5
  int v10; // r6
  _DWORD v12[11]; // [sp+4h] [bp-2Ch] BYREF

  FIELD_U32(a1, 0x0) = (int)&sead__TaskBase__vtable;
  sead__TreeNode__ctor(&a1[1].vtable);
  a1[2].vtable = (int)a1;
  sead_IDisposer_ctor(a1);
  a1[2].containingHeap = (int)&sead__SafeStringBase__vtable;
  a1[2].field_8 = (int)&byte_60ABC94D;
  FIELD_U32(a1, 0x0) = (int)&sead__TaskBase__vtable;
  a1[2].field_C = (int)a2[2];
  a1[3].vtable = 0;
  a1[3].containingHeap = 0;
  a1[3].field_8 = 0;
  a1[3].field_C = (int)a1;
  a1[4].vtable = 0;
  v6 = (*a2)[1];
  v7 = (*a2)[2];
  v8 = (*a2)[3];
  v9 = (*a2)[4];
  v10 = (*a2)[5];
  a1[4].containingHeap = **a2;
  a1[4].field_8 = v6;
  a1[4].field_C = v7;
  a1[5].vtable = v8;
  a1[5].containingHeap = v9;
  a1[5].field_8 = v10;
  a1[5].field_C = (int)a2[1];
  a1[6].field_8 = 0;
  a1[6].field_C = 0;
  a1[3].vtable = 0;
  a1[6].vtable = 0;
  a1[6].containingHeap = 1;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = a3;
  sead__SafeStringBase__operator_assign((int)&a1[2].containingHeap, (int)v12);
  return a1;
}
