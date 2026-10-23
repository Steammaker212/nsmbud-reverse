/* sub_6005F1E0
 * address: 0x6005F1E0   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005F1E0(int a1)
{
  int v2; // r0
  int v3; // r0
  int result; // r0
  _DWORD v5[2]; // [sp+0h] [bp-50h] BYREF
  _DWORD v6[2]; // [sp+8h] [bp-48h] BYREF
  _DWORD v7[2]; // [sp+10h] [bp-40h] BYREF
  _DWORD v8[14]; // [sp+18h] [bp-38h] BYREF

  v8[2] = &sead__SafeStringBase__vtable;
  v8[3] = "demo_fly_st";
  sub_60051780(a1);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "demo_fly_st";
  sub_60051794(a1, (int)v8, 0);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "demo_fly_st";
  sub_600517F4(a1, (int)v7, 0);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "demo_fly_st";
  sub_6005186C(a1, (int)v6, 0);
  v2 = FIELD_U32(a1, 7836);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "demo_fly_wing_st";
  sub_60421AE4(v2, v5, 0);
  FIELD_U8(a1, 7840) = 1;
  v3 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 240))(v3);
  sub_608134CC(a1 + 6332, "SE_EMY_BUNBUN_MAGIC_STOCK", FIELD_S16(a1, 6640), 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 7844) = 0;
  result = FIELD_U32(a1, 112);
  FIELD_U32(a1, 7856) = result;
  return result;
}
