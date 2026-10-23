/* sub_603D0AEC
 * address: 0x603D0AEC   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603D0AEC(int a1)
{
  char v1; // r12
  float v3; // s10
  float v4; // s12
  float v5; // s6
  int v6; // r4
  int v7; // r5
  float v8; // s10
  float v9; // s2
  float v10; // s0
  float v11; // s16
  float v12; // s18
  float v13; // s22
  float v14; // s20
  int v15; // r6
  float v17; // [sp+4h] [bp-3Ch] BYREF
  float v18; // [sp+8h] [bp-38h]

  if ( ((unsigned int)&dword_60C98CF4 & ~(1614613264 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C98CF4) )
  {
    flt_60C98D08[0] = -10.0;
    flt_60C98D08[1] = -15.9;
    flt_60C98D08[2] = 10.0;
    flt_60C98D08[3] = 15.9;
    _cxa_guard_release(&dword_60C98CF4);
  }
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v5 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  v6 = dword_60CBF354;
  v7 = PlayerMgr_instance;
  v8 = v3 + (float)(v5 * 18.0);
  v9 = (float)(flt_60C98D08[3] - flt_60C98D08[1]) * 0.5;
  v10 = (float)(flt_60C98D08[2] - flt_60C98D08[0]) * 0.5;
  v11 = v9 + (float)(v4 + 8.0);
  v12 = (float)(v4 + 8.0) - v9;
  v13 = v10 + v8;
  v14 = v8 - v10;
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) != 1
    || (sub_6075DE94(v6, &v17, 0), v18 > v11)
    || (v15 = 1, v14 > v17 || v17 > v13 || v12 > v18) )
  {
    v15 = 1;
    if ( !PlayerMgr_hasPlayer(v7, 1u) || (sub_6075DE94(v6, &v17, 1), v18 > v11) || v14 > v17 || v17 > v13 || v12 > v18 )
    {
      if ( PlayerMgr_hasPlayer(v7, 2u) != 1
        || (sub_6075DE94(v6, &v17, 2), v18 > v11)
        || (v15 = 1, v14 > v17 || v17 > v13 || v12 > v18) )
      {
        if ( PlayerMgr_hasPlayer(v7, 3u) == 1 && (sub_6075DE94(v6, &v17, 3), v18 <= v11) )
          return v14 <= v17 && v17 <= v13 && v12 <= v18;
        else
          return 0;
      }
    }
  }
  return v15;
}
