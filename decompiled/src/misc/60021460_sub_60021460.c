/* sub_60021460
 * address: 0x60021460   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60021460(int a1, Vec3 *a2)
{
  int v4; // r0

  v4 = FIELD_U32(a1, 4);
  if ( v4 == 2 )
  {
LABEL_9:
    if ( sub_60235E50(a1 + 24) == 1 )
      sub_60237208(a1 + 8, (int)a2, 0, 0);
    else
      FIELD_U32(a1, 4) = 0;
    goto LABEL_12;
  }
  if ( v4 == 1 )
  {
    if ( !FIELD_U8(a1, 117) )
    {
      FIELD_U32(a1, 4) = 2;
      sub_60236074(a1 + 24);
    }
    goto LABEL_9;
  }
  if ( !v4 && FIELD_U8(a1, 117) )
  {
    FIELD_U32(a1, 4) = 1;
    if ( FIELD_U8(a1, 116) )
      sub_60236EC4(FIELD_U32(a1, 112), a1 + 8, dword_60AF49B0[*(_DWORD *)a1], a2, 0, 0);
    else
      EffectWrapper_update((EffectWrapper *)(a1 + 8), dword_60AF49B0[*(_DWORD *)a1], a2, 0, 0);
  }
LABEL_12:
  FIELD_U8(a1, 117) = 0;
  return 0;
}
