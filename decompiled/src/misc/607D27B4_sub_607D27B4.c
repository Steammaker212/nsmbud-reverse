/* sub_607D27B4
 * address: 0x607D27B4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607D27B4(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s4
  int v5; // r0
  int v6; // r0
  int v7; // r1

  if ( FIELD_U32(a1, 652) == 1 )
  {
    v2 = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
    FIELD_F32(a1, 108) = v2;
    v3 = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
    FIELD_F32(a1, 112) = v3;
    v4 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
    FIELD_F32(a1, 116) = v4;
    v5 = FIELD_U32(a1, 644);
    FIELD_U32(v5, 4) = 1126825984;
    FIELD_F32(v5, 12) = v2;
    FIELD_F32(v5, 16) = v3;
    FIELD_F32(v5, 20) = v4;
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 644) + 4))(FIELD_U32(a1, 644));
    v6 = FIELD_U32(a1, 648);
    if ( v6 == 1 )
    {
      v7 = 6;
    }
    else
    {
      if ( v6 )
      {
LABEL_7:
        StageActor__cullCheck((StageActor *)a1, 0);
        return 1;
      }
      v7 = 1;
    }
    EffectWrapper_update((EffectWrapper *)(a1 + 0x290), v7, (Vec3 *)(a1 + 108), 0, (Vec3 *)&dword_60CC5430);
    goto LABEL_7;
  }
  return 1;
}
