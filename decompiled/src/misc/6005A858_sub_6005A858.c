/* sub_6005A858
 * address: 0x6005A858   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005A858(int a1)
{
  int v2; // r0
  _DWORD v4[2]; // [sp+0h] [bp-30h] BYREF
  _DWORD v5[2]; // [sp+8h] [bp-28h] BYREF
  _DWORD v6[8]; // [sp+10h] [bp-20h] BYREF

  v6[2] = &sead__SafeStringBase__vtable;
  v6[3] = "scale_up";
  sub_60051780(a1);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "scale_up";
  sub_60051794(a1, (int)v6, 0);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "scale_up";
  sub_600517F4(a1, (int)v5, 0);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "scale_up";
  sub_6005186C(a1, (int)v4, 0);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v2 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 240))(v2);
  return sub_608134CC(a1 + 6332, "SE_EMY_BUNBUN_MAGIC_STOCK", FIELD_S16(a1, 6640), 0);
}
