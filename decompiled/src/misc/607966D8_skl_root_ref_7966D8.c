/* skl_root_ref_7966D8
 * address: 0x607966D8   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_7966D8(int a1)
{
  int result; // r0
  Vec3 v3; // [sp+1Ch] [bp-4Ch] BYREF
  _DWORD v4[16]; // [sp+28h] [bp-40h] BYREF

  result = FIELD_U8(a1, 1204);
  if ( (result & 2) != 0 )
  {
    sub_6076DE34(a1);
    sub_6079E494(a1);
    sub_6079E3A8(a1);
    sub_607B9614(a1);
    FIELD_U32(a1, 1220) &= 0xFEBFFFFF;
    if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
    {
      sub_60796828(a1);
      sub_607B8404(a1);
    }
    sub_60760908(a1);
    sub_60794210(FIELD_U32(a1, 11360));
    SE_PLY_SPIN_ATTACK_ref(a1);
    sub_607BA7C0(a1);
    sub_60792680(*(_DWORD **)(a1 + 11368), (int)v4);
    sub_600213C4(FIELD_U32(a1, 628), v4);
    SE_PLY_P_MSSB_ref(a1);
    if ( sub_607BB578(a1) == 1 )
    {
      sub_60793F04(FIELD_U32(a1, 11360), &v3);
      LightSource_update1((LightSource *)(a1 + 11868), 2, &v3, 0, 0, 0, 0, 0, 0);
    }
    result = FIELD_U8(a1, 6900);
    if ( (result & 1) != 0 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 228))(a1);
  }
  return result;
}
