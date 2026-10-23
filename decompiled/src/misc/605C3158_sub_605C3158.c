/* sub_605C3158
 * address: 0x605C3158   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C3158(_DWORD *a1)
{
  int v2; // r1
  _DWORD v4[2]; // [sp+8h] [bp-18h] BYREF
  _DWORD v5[4]; // [sp+10h] [bp-10h] BYREF

  v2 = TileMgr_instance;
  if ( !FIELD_U8(TileMgr_instance, 44736) )
  {
    FIELD_U8(TileMgr_instance, 44736) = 1;
    v5[0] = &sead__SafeStringBase__vtable;
    v4[0] = &sead__SafeStringBase__vtable;
    v5[1] = "env_underwater";
    v4[1] = "wmy_ef_bubble";
    output_bfres_ref_448C14(v5, v4, v2 + 44744, a1 + 1575, 0);
    v2 = TileMgr_instance;
  }
  sub_6044B314((int)(a1 + 1576), v2 + 44744, -1, 15);
  a1[4927] = 0;
  a1[4915] = -915135504;
  a1[4916] = -915135504;
  a1[4917] = 0;
  a1[4929] = 20;
  a1[4918] = -915135504;
  a1[4919] = -915135504;
  a1[4920] = 0;
  a1[4930] = 20;
  a1[4921] = -915135504;
  a1[4922] = -915135504;
  a1[4923] = 0;
  a1[4931] = 20;
  a1[4924] = -915135504;
  a1[4925] = -915135504;
  a1[4926] = 0;
  a1[4932] = 20;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 32))(a1);
  return 1;
}
