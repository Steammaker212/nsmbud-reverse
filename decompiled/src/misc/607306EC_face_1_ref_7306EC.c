/* face_1_ref_7306EC
 * address: 0x607306EC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall face_1_ref_7306EC(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0
  int vtable; // r0
  _DWORD v6[2]; // [sp+4h] [bp-24h] BYREF
  Vec3 v7[2]; // [sp+Ch] [bp-1Ch] BYREF

  result = Enemy__processCollision(a1, a2, a3, 2);
  if ( result )
  {
    result |= 2u;
    if ( result == 3 )
    {
      ((void (__fastcall *)(int *, int, _DWORD))loc_60814A1C)(&a1[1]._._._._.field_2C, 51, 0);
      vtable = a1[1]._._._._.vtable;
      v6[0] = &sead__SafeStringBase__vtable;
      v6[1] = "face_1";
      sub_60793F04(FIELD_U32(vtable, 4), v7, v6);
      sub_60236E40(0xFFFFFFFF, 376, v7, 0, 0);
      return (*(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CBDB60);
    }
  }
  return result;
}
