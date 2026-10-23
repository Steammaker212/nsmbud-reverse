/* sub_605E48AC
 * address: 0x605E48AC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E48AC(int a1)
{
  int v2; // r0
  int v3; // r5
  float v4; // r7
  int result; // r0
  Vec3 v6[6]; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_U32(a1, 6268);
  if ( (v2 & 0x10) == 0
    && (FIELD_U8(a1, 6264) & 1) == 0
    && !(FIELD_U32(a1, 6260) & 0x880 | v2 & 1 | FIELD_U32(a1, 6260) & 0x40)
    && !sub_605DBD64(a1)
    && (FIELD_U32(a1, 6804) & 0x4802) == 2
    && ((FIELD_U8(a1, 6260) & 0x10) == 0
     || !FIELD_U8(a1, 6348) && (FIELD_F32(a1, 6324) <= 0.0 || FIELD_F32(a1, 124) <= 0.0)) )
  {
    v3 = FIELD_U32(a1, 6844);
    if ( v3 != -1 )
    {
      v4 = FIELD_F32(a1, 112);
      v6[0].x = FIELD_F32(a1, 108);
      v6[0].y = v4;
      v6[0].z = sub_600024C4(a1);
      EffectData_create(dword_60B05A84[v3], v6, 0, 0);
    }
  }
  if ( (FIELD_U8(a1, 6261) & 1) != 0 )
  {
    sub_605EAB0C(a1 + 6064, v6, 6);
    sub_602372C0(a1 + 7792, 754, (__int64 *)v6, 1);
  }
  result = sub_605DD6E8(a1);
  if ( result == 1 )
    return sub_605E4A14(a1);
  return result;
}
