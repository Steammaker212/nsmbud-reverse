/* BoomBoomW1__vf4C4
 * address: 0x6004E3BC   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomW1__vf4C4(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0
  _DWORD v7[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v8[6]; // [sp+8h] [bp-18h] BYREF

  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "run1";
  sub_60051780(a1, v8, 1);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "run";
  sub_60051794(a1, v7, 1);
  FIELD_U8(a1, 8389) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1188))(a1);
  FIELD_U16(a1, 6276) = FIELD_U32(a1, 7836);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1256))(a1);
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 104) = FIELD_U32(a1, 7852);
  FIELD_U32(a1, 100) = -1085485875;
  v2 = *(_DWORD **)(a1 + 7204);
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  result = *v3;
  *(_DWORD *)(*v3 + 24) = FIELD_U32(a1, 7208);
  return result;
}
