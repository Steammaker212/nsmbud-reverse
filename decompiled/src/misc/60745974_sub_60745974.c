/* sub_60745974
 * address: 0x60745974   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60745974(int a1)
{
  int v2; // r0
  int v3; // r0

  j_ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 648));
  sub_604218E0(*(float **)(a1 + 648));
  j_ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 652));
  sub_604218E0(*(float **)(a1 + 652));
  if ( (FIELD_U8(a1, 20) & 1) == 0 )
    FIELD_U32(a1, 688) += 0x4000000;
  v2 = FIELD_U32(a1, 696);
  if ( v2 )
    FIELD_U32(a1, 696) = v2 - 1;
  v3 = FIELD_U32(a1, 824);
  if ( v3 )
    FIELD_U32(a1, 824) = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 872));
  ((void (__fastcall *)(int))loc_60745A24)(a1);
  sub_60745580((float *)a1);
  if ( (float)(FIELD_F32(a1, 112) + -16.0) > FIELD_F32(dword_60CC6484, 124) )
    FIELD_U8(a1, 19) = 1;
  return 1;
}
