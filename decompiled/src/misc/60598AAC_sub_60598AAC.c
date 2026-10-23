/* sub_60598AAC
 * address: 0x60598AAC   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60598AAC(int a1)
{
  int *v2; // r5
  int v3; // r1
  signed int v4; // r0
  Vec3 v6[3]; // [sp+4h] [bp-24h] BYREF

  FIELD_U8(a1, 10420) = 0;
  v2 = (int *)(a1 + 6260);
  if ( (FIELD_U8(a1, 6264) & 2) != 0 && (FIELD_U8(a1, 6262) & 8) != 0 )
    ((void (__fastcall *)(int))loc_60598BD4)(a1);
  v3 = *v2;
  if ( (*v2 & 0x80000) != 0 )
  {
    if ( FIELD_U8(a1, 13888) && (v4 = sub_60235E50(a1 + 13892), v3 = *v2, !v4) )
    {
      if ( (v3 & 0x80000) != 0 && !sub_60235E50(a1 + 13892) )
      {
        sub_6059BDF8(a1 + 8036, v6, 0);
        sub_602375C4((EffectData *)(a1 + 13892), 1121, v6, 0, 0);
      }
    }
    else if ( (v3 & 0x80000) != 0 && sub_60235E50(a1 + 13892) == 1 )
    {
      sub_6059BDF8(a1 + 8036, v6, 0);
      EffectData_update((EffectData *)(a1 + 13892), v6, 0, 0);
    }
  }
  return nullsub_37(a1);
}
