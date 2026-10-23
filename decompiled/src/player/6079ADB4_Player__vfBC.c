/* Player__vfBC
 * address: 0x6079ADB4   size: 136   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079ADB4(int a1)
{
  int v2; // r0
  int v3; // r0
  bool v4; // zf

  FIELD_U32(a1, 1204) &= ~0x20000000u;
  FIELD_U32(a1, 1216) &= ~0x200000u;
  FIELD_U32(a1, 12920) = 0;
  FIELD_U8(a1, 12917) = 1;
  FIELD_U8(a1, 12918) = 1;
  v2 = sub_6079D894(a1);
  if ( v2 )
    FIELD_U8(v2, 12918) = 1;
  FIELD_U32(a1, 12924) = 0;
  v3 = FIELD_U32(a1, 11484);
  v4 = v3 == 4;
  if ( v3 != 4 )
    v4 = v3 == 2;
  if ( v4 )
    sub_607957D4(a1, 0);
  return sub_607B9C78(a1, 6);
}
