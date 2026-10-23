/* sub_601D5E38
 * address: 0x601D5E38   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601D5E38(int a1)
{
  unsigned int v1; // r1
  float *v2; // r2
  float v3; // s12
  float v4; // s0
  float v5; // s4

  sub_601B51B8(a1);
  v1 = FIELD_U32(a1, 192);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = FIELD_F32(a1, 200);
  v4 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v5 = v3 * (float)(v2[2] + (float)(v4 * v2[3]));
  FIELD_F32(a1, 116) = v3 * (float)(*v2 + (float)(v2[1] * v4));
  FIELD_F32(a1, 124) = v5;
  JUMPOUT(0x60168D78);
}
