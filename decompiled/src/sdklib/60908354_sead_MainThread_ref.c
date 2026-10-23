/* sead_MainThread_ref
 * address: 0x60908354   size: 280   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sead_MainThread_ref(sead_IDisposer *a1, int a2, int a3, int a4)
{
  unsigned int *v8; // r2
  nn__os *v9; // r0
  int v10; // r5
  nn__os *v12; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v13[10]; // [sp+8h] [bp-28h] BYREF

  sead_IDisposer_ctor(a1);
  a1[1].vtable = (int)&sead__SafeStringBase__vtable;
  a1[1].containingHeap = (int)"sead__MainThread";
  FIELD_U32(a1, 0x0) = (int)off_60C5CDC8;
  a1[1].field_8 = (int)&off_60C5CE1C;
  sub_60912E1C(&a1[1].field_C);
  a1[5].vtable = FIELD_U32(a3, 48);
  a1[5].containingHeap = 0;
  a1[5].field_8 = 0;
  a1[5].field_C = 0;
  a1[6].vtable = 0;
  a1[6].containingHeap = 0;
  sub_608FACE4(&a1[6].field_8);
  a1[6].field_C = 1;
  a1[7].vtable = 0x7FFFFFFF;
  a1[7].containingHeap = a4;
  a1[7].field_8 = 1;
  v13[1] = 0;
  a1[7].field_C = 1;
  a1[8].vtable = a3;
  a1[8].containingHeap = 0;
  a1[8].field_8 = 0;
  a1[8].field_C = nn__os__GetThreadPriority(a3);
  a1[5].field_C = (int)a1;
  sub_60912E2C(&a1[1].field_C, 32, a2);
  nn__os__GetCurrentStackInfo((nn__os *)v13, (unsigned int *)&v12, v8);
  a1[8].field_8 = v13[0];
  v9 = v12;
  a1[5].vtable = (int)v12;
  v10 = a1[7].field_C;
  nn__os__GetThreadAvailableCoreMask(v9);
  nn__os__SetThreadCoreMask(a1[8].vtable, -1, v10, 0);
  return a1;
}
