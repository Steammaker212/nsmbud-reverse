/* sub_6003AB08
 * address: 0x6003AB08   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003AB08(int a1)
{
  int v2; // r0
  _BOOL4 v3; // r1
  float v4; // s0
  float v6[8]; // [sp+0h] [bp-20h]

  sub_60045DB4(a1, 2, 1, 1, 0.0, 1.0);
  sub_60037BB0(FIELD_U32(a1, 11456), 0, 1, 0.0, 1.0);
  v2 = FIELD_U32(a1, 11452);
  if ( v2 )
  {
    v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 724))(v2) == 1;
    (*(void (__fastcall **)(int, _BOOL4))(*(_DWORD *)a1 + 780))(a1, v3);
  }
  ((void (__fastcall *)(int))loc_60040A94)(a1);
  FIELD_U16(a1, 6278) = 15;
  v4 = sqrtf(fabsf((float)(FIELD_F32(a1, 11644) * FIELD_F32(a1, 11644)) + -0.1225));
  v6[0] = -v4;
  v6[1] = v4;
  FIELD_F32(a1, 120) = v6[FIELD_U32(a1, 11464)];
  FIELD_U32(a1, 124) = 1051931443;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 1067450368;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = 1000593162;
  FIELD_U32(a1, 104) = 1040187392;
  FIELD_U32(a1, 11492) = 3;
  FIELD_U32(a1, 11440) = 0;
  FIELD_U32(a1, 11432) = 0;
  return 11432;
}
