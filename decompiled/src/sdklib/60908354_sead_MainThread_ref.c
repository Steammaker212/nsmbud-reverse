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
  FIELD_U32(a1 + (1) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(a1 + (1) * 16, 0x4) = (int)"sead__MainThread";
  FIELD_U32(a1, 0x0) = (int)off_60C5CDC8;
  FIELD_U32(a1 + (1) * 16, 0x8) = (int)&off_60C5CE1C;
  sub_60912E1C(&FIELD_U32(a1 + (1) * 16, 0xC));
  FIELD_U32(a1 + (5) * 16, 0x0) = FIELD_U32(a3, 48);
  FIELD_U32(a1 + (5) * 16, 0x4) = 0;
  FIELD_U32(a1 + (5) * 16, 0x8) = 0;
  FIELD_U32(a1 + (5) * 16, 0xC) = 0;
  FIELD_U32(a1 + (6) * 16, 0x0) = 0;
  FIELD_U32(a1 + (6) * 16, 0x4) = 0;
  sub_608FACE4(&FIELD_U32(a1 + (6) * 16, 0x8));
  FIELD_U32(a1 + (6) * 16, 0xC) = 1;
  FIELD_U32(a1 + (7) * 16, 0x0) = 0x7FFFFFFF;
  FIELD_U32(a1 + (7) * 16, 0x4) = a4;
  FIELD_U32(a1 + (7) * 16, 0x8) = 1;
  v13[1] = 0;
  FIELD_U32(a1 + (7) * 16, 0xC) = 1;
  FIELD_U32(a1 + (8) * 16, 0x0) = a3;
  a1[8].containingHeap = 0;
  FIELD_U32(a1 + (8) * 16, 0x8) = 0;
  FIELD_U32(a1 + (8) * 16, 0xC) = nn__os__GetThreadPriority(a3);
  FIELD_U32(a1 + (5) * 16, 0xC) = (int)a1;
  sub_60912E2C(&FIELD_U32(a1 + (1) * 16, 0xC), 32, a2);
  nn__os__GetCurrentStackInfo((nn__os *)v13, (unsigned int *)&v12, v8);
  FIELD_U32(a1 + (8) * 16, 0x8) = v13[0];
  v9 = v12;
  FIELD_U32(a1 + (5) * 16, 0x0) = (int)v12;
  v10 = FIELD_U32(a1 + (7) * 16, 0xC);
  nn__os__GetThreadAvailableCoreMask(v9);
  nn__os__SetThreadCoreMask(FIELD_U32(a1 + (8) * 16, 0x0), -1, v10, 0);
  return a1;
}
