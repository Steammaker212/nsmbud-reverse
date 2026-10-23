/* sub_60746A24
 * address: 0x60746A24   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60746A24(int a1)
{
  int v2; // r0
  int v3; // r0

  j_ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 644));
  sub_604218E0(*(float **)(a1 + 644));
  v2 = FIELD_U32(a1, 648);
  if ( v2 )
    FIELD_U32(a1, 648) = v2 - 1;
  StateMgr__execute((StateMgr *)(a1 + 752));
  v3 = FIELD_U32(a1, 724);
  if ( v3 )
  {
    FIELD_U32(a1, 716) += byte_60B0A5AE[FIELD_U32(a1, 80)] * FIELD_U32(a1, 720);
    FIELD_U32(a1, 724) = v3 - 1;
  }
  else
  {
    FIELD_U32(a1, 716) = 0;
  }
  sub_60746ADC(a1);
  if ( (float)(FIELD_F32(a1, 112) + -16.0) > FIELD_F32(dword_60CC6484, 124) )
    FIELD_U8(a1, 19) = 1;
  return 1;
}
