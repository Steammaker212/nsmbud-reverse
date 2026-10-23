/* sub_600988F8
 * address: 0x600988F8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600988F8(int a1)
{
  float *v2; // r1
  int v3; // r0
  float v4; // s0

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
    (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  sub_60421AD4(FIELD_U32(a1, 7096));
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) == 1 )
  {
    v2 = (float *)(a1 + 120);
    FIELD_U32(a1, 104) = 1029785518;
LABEL_6:
    v4 = 2.5;
    goto LABEL_8;
  }
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  FIELD_U32(a1, 104) = 1029785518;
  v2 = (float *)(a1 + 120);
  if ( v3 == 1 )
    goto LABEL_6;
  v4 = 3.0;
LABEL_8:
  *v2 = v4;
  FIELD_F32(a1, 132) = v4;
  if ( FIELD_U32(a1, 80) == 1 )
  {
    *v2 = -*v2;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
  }
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 100) = 0;
  return sub_608134CC(a1 + 6332, "SE_BOSS_IGGY_SLIP", FIELD_S16(a1, 6640), 0);
}
