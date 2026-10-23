/* MovementHandler_findMovementController_helper_6B1188
 * address: 0x606B1188   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MovementHandler_findMovementController_helper_6B1188(int result, int a2)
{
  float v2; // s4
  float v3; // s0
  float v4; // s2
  float v5; // s0
  float v6; // s2
  int v7; // r3
  int v8; // r12

  ++FIELD_U32(a2, 44);
  FIELD_U8(a2, 64) |= byte_60AFDF9C[FIELD_U32(result, 192)] & 3;
  v2 = FIELD_F32(result, 20) - FIELD_F32(a2, 112);
  v3 = FIELD_F32(result, 12) - FIELD_F32(a2, 104);
  v4 = FIELD_F32(result, 16) - FIELD_F32(a2, 108);
  FIELD_F32(result, 32) = v2;
  v5 = FIELD_F32(result, 36) + v3;
  FIELD_F32(result, 24) = v5;
  v6 = v4 - FIELD_F32(result, 40);
  FIELD_F32(result, 28) = v6;
  *(float *)result = FIELD_F32(a2, 128)
                   + (float)((float)((float)(v6 * FIELD_F32(a2, 120)) + (float)(v5 * FIELD_F32(a2, 116)))
                           + (float)(v2 * FIELD_F32(a2, 124)));
  FIELD_F32(result, 4) = FIELD_F32(a2, 144)
                         + (float)((float)((float)(v6 * FIELD_F32(a2, 136)) + (float)(v5 * FIELD_F32(a2, 132)))
                                 + (float)(v2 * FIELD_F32(a2, 140)));
  FIELD_F32(result, 8) = FIELD_F32(a2, 160)
                         + (float)((float)((float)(v6 * FIELD_F32(a2, 152)) + (float)(v5 * FIELD_F32(a2, 148)))
                                 + (float)(v2 * FIELD_F32(a2, 156)));
  v7 = FIELD_U32(a2, 28);
  v8 = FIELD_U32(a2, 32);
  FIELD_U32(result, 160) = FIELD_U32(a2, 24);
  FIELD_U32(result, 164) = v7;
  FIELD_U32(result, 168) = v8;
  FIELD_U32(result, 80) = FIELD_U32(result, 168);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    if ( FIELD_F32(a2, 84) == 0.0 )
    {
      FIELD_F32(a2, 164) = v5;
      FIELD_U32(a2, 168) = FIELD_U32(result, 28);
      result = FIELD_U32(result, 32);
      FIELD_U32(a2, 172) = result;
    }
  }
  return result;
}
