/* sub_6005BE1C
 * address: 0x6005BE1C   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005BE1C(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s2
  float v5; // s4
  float v6; // s4

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  sub_60421AD4(FIELD_U32(a1, 7204));
  sub_60421AD4(FIELD_U32(a1, 7836));
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1)
    || (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) == 1 )
  {
    v2 = 34.0;
  }
  else
  {
    v2 = 28.0;
  }
  v3 = FIELD_F32(a1, 7876) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 7888) = v3;
  v4 = v3 / v2;
  v5 = FIELD_F32(a1, 7880) - FIELD_F32(a1, 112);
  v6 = (float)(v5 + v5) / (float)(v2 * v2);
  FIELD_F32(a1, 100) = v6;
  FIELD_F32(a1, 124) = v2 * v6;
  FIELD_F32(a1, 120) = v4;
  FIELD_F32(a1, 132) = v4;
  FIELD_F32(a1, 136) = -(float)(v2 * v6);
  FIELD_U32(a1, 140) = 0;
  FIELD_U16(a1, 6276) = (int)v2;
  return sub_608134CC(a1 + 6332, "SE_EMY_BUNBUN_FLYING_SLOW", FIELD_S16(a1, 6640), 0);
}
