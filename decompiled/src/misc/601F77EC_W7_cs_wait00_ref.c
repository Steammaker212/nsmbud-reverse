/* W7_cs_wait00_ref
 * address: 0x601F77EC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall W7_cs_wait00_ref(int a1)
{
  __int64 v2; // r0
  int v3; // r1
  int v4; // r0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U8(a1, 932) = 1;
  LODWORD(v2) = FIELD_U32(a1, 240);
  if ( (_DWORD)v2 == 4 )
  {
    sub_601F2688(a1, 0, 1, 0, 5.0, 1.0);
    FIELD_F32(a1, 84) = FIELD_F32(a1, 572) + 200.0;
    FIELD_F32(a1, 88) = (float)(FIELD_F32(a1, 576) + -250.0) + 0.0;
    FIELD_U32(a1, 80) = FIELD_U32(a1, 568);
    FIELD_U32(a1, 180) = 0x40000000;
    FIELD_U32(a1, 192) = 0x40000000;
    FIELD_U32(a1, 632) = 1132068864;
    FIELD_U32(a1, 624) = 800;
    FIELD_F32(a1, 200) = (*(float (__fastcall **)(int, int))(*(_DWORD *)a1 + 332))(a1, 800);
    v2 = 0x100000000LL / FIELD_S32(a1, 624);
    FIELD_U32(a1, 588) = v2;
  }
  else if ( (_DWORD)v2 == 6 )
  {
    sub_601F2688(a1, 0, 1, 0, 5.0, 1.0);
    FIELD_U8(a1, 933) = 1;
    v3 = FIELD_U32(a1, 772);
    v4 = **(_DWORD **)(FIELD_U32(a1, 768) + 12);
    v6[0] = &sead__SafeStringBase__vtable;
    v6[1] = "W7_cs_wait00";
    LODWORD(v2) = SkeletalAnim_play(v4, v3, (int)v6);
    FIELD_F32(a1, 80) = FIELD_F32(a1, 568) + 0.0;
    FIELD_F32(a1, 84) = FIELD_F32(a1, 572) + 100.0;
    FIELD_F32(a1, 88) = FIELD_F32(a1, 576) + -400.0;
  }
  return v2;
}
