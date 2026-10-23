/* Kanibo__beginState_BackMove
 * address: 0x6030EB78   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Kanibo__beginState_BackMove(Enemy *a1)
{
  float v2; // s16
  char v3; // r1
  float v4; // s0
  float v5; // s2
  float *v6; // r0

  v2 = (float)byte_60AFE3F4[FIELD_U32(a1, 0x0)._._.direction ^ 1];
  sub_607160F4(
    TileMgr_instance,
    (int)(float)(FIELD_U32(a1, 0x0)._._.position.x + (float)(v2 * 16.0)),
    (unsigned __int16)(int)(float)-(float)(*(float *)&a1[1]._._._._.field_20.next + 24.0),
    (unsigned __int8)FIELD_U32(a1, 0x0)._._.field_56,
    1);
  if ( (v3 & 0xF) != 0 )
  {
    v4 = 0.0;
    v5 = 0.0;
  }
  else
  {
    v6 = dword_6030EC74;
    v4 = v2 * 1.3;
    if ( (FIELD_U32(a1, 0x0)._._._.settings1 & 0x10) == 0 )
      v6 = &dword_6030EC78;
    v5 = *v6;
  }
  FIELD_U32(a1, 0x0)._._.speed.x = v4;
  FIELD_U32(a1, 0x0)._._.xAcceleration = v5;
  FIELD_U32(a1, 0x0)._._.field_64 = -0.1875;
  FIELD_U32(a1, 0x0)._._.maxSpeed.y = -4.0;
}
