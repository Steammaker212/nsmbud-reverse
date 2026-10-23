/* sub_607C20E8
 * address: 0x607C20E8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C20E8(int a1)
{
  int v2; // r5
  float v3; // s16
  float v4; // s18
  unsigned int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r0
  float v8; // s0
  int v9; // r0
  float v10; // s0
  int v11; // r1

  v2 = 0;
  if ( !FIELD_U8(dword_60C9A1F0, 6536) && sub_60786744(a1 + 688) == 1 )
  {
    v3 = FIELD_F32(a1, 108);
    v4 = FIELD_F32(a1, 11380);
    v5 = (unsigned __int16)(int)(float)-(float)(FIELD_F32(a1, 112) + -1.0);
    v6 = sub_607160F4(TileMgr_instance, (int)(float)(v3 - (float)(v4 + 1.0)), v5, FIELD_U8(a1, 86), 1);
    if ( sub_60155344(v6)
      || (v7 = sub_607160F4(TileMgr_instance, (int)(float)(v3 + v4), v5, FIELD_U8(a1, 86), 1),
          sub_60155344(v7)) )
    {
      v8 = sub_6079B208((_DWORD *)a1);
      v9 = FIELD_U32(a1, 108);
      v10 = FIELD_F32(a1, 112) - v8;
      FIELD_F32(a1, 112) = v10;
      v11 = FIELD_U32(a1, 116);
      FIELD_U32(a1, 584) = v9;
      FIELD_F32(a1, 588) = v10;
      FIELD_U32(a1, 592) = v11;
      FIELD_U32(a1, 608) = v9;
      FIELD_F32(a1, 612) = v10;
      FIELD_U32(a1, 616) = v11;
      FIELD_U32(a1, 11480) = 10;
      Player_changeState(a1, (StateBase *)&dword_60CC4F2C, 3);
      return 1;
    }
  }
  return v2;
}
