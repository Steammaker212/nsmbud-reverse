/* sub_601F7C94
 * address: 0x601F7C94   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601F7C94(int a1, int a2)
{
  float result; // s0
  float v4; // s0
  float v5; // s2
  float v6; // s4

  if ( a2 == 13 )
  {
    sub_601F2688(a1, 0, 1, 0, 5.0, 1.0);
    v4 = FIELD_F32(a1, 568) + 0.0;
    FIELD_F32(a1, 80) = v4;
    v5 = FIELD_F32(a1, 572) + 100.0;
    FIELD_F32(a1, 84) = v5;
    v6 = FIELD_F32(a1, 576) + -400.0;
    result = v4 + 300.0;
    FIELD_F32(a1, 88) = v6;
    FIELD_F32(a1, 848) = v6;
    FIELD_F32(a1, 844) = v5 + 800.0;
    FIELD_F32(a1, 840) = result;
    FIELD_U32(a1, 192) = 0;
    FIELD_U32(a1, 176) = 0;
    FIELD_U32(a1, 180) = 0;
    FIELD_U32(a1, 184) = 0;
    FIELD_U32(a1, 200) = 0;
    FIELD_U32(a1, 116) = 0;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 584) = 0;
    FIELD_U32(a1, 888) = 0x80000;
    FIELD_U32(a1, 892) = 0x10000;
  }
  else if ( a2 == 11 )
  {
    sub_601F2688(a1, 0, 1, 0, 5.0, 1.0);
    FIELD_F32(a1, 84) = FIELD_F32(a1, 572) + 150.0;
    FIELD_F32(a1, 80) = FIELD_F32(a1, 568) + (float)((float)((float)(-0.024128 * 0.11111) + -0.17096) * 250.0);
    FIELD_F32(a1, 88) = FIELD_F32(a1, 576) + (float)((float)((float)(0.0044924 * 0.11111) + -0.98528) * 250.0);
    FIELD_U32(a1, 180) = 1193046471;
    FIELD_U32(a1, 192) = 1193046471;
    FIELD_U32(a1, 632) = 1132068864;
    FIELD_U32(a1, 624) = 600;
    result = (*(float (__fastcall **)(int, int))(*(_DWORD *)a1 + 332))(a1, 600);
    FIELD_F32(a1, 200) = result;
    FIELD_U32(a1, 588) = 0x100000000LL / FIELD_S32(a1, 624);
  }
  return result;
}
