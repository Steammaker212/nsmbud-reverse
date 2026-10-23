/* lkp_run_ref
 * address: 0x60082C34   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_run_ref(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  float v5; // s0
  float v6; // s2
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  v2 = 1;
  v3 = FIELD_U32(a1, 7100);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lkp_run";
  sub_60421AE4(v3, v8, 1);
  v4 = FIELD_U32(a1, 7244);
  if ( v4 )
  {
    v5 = FIELD_F32(v4, 108);
    v6 = FIELD_F32(a1, 108);
    if ( v6 < v5 )
    {
      v2 = 0;
      if ( v6 > v5 )
        v2 = 3;
    }
  }
  else
  {
    v2 = 3;
  }
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 104) = 1031127695;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 132) = 1075838976;
  if ( v2 == 1 )
  {
    FIELD_U32(a1, 120) = 0x80000000;
    FIELD_U32(a1, 132) = -1071644672;
  }
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  return -1103101952;
}
