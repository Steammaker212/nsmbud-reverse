/* sub_606F2F70
 * address: 0x606F2F70   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F2F70(int a1)
{
  Vec3 v2; // [sp+4h] [bp-14h] BYREF

  v2.x = FIELD_F32(dword_60CC6484, 116);
  v2.y = FIELD_F32(dword_60CC6484, 128);
  v2.z = 9000.0;
  if ( FIELD_U32(a1, 6168) == 3 )
    v2.y = FIELD_F32(TileMgr_instance, 24);
  sub_60237208(a1 + 6064, &v2, 0, (Vec3 *)(a1 + 144));
  return 1;
}
