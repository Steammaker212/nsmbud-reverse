/* sub_60704498
 * address: 0x60704498   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60704498(int a1, int a2)
{
  float v4; // s0
  float v5; // s2
  float v6; // s4
  int v7; // r0
  char v8; // r1
  float v9; // s0
  int v10; // r6
  int v11; // s0
  _DWORD *v12; // r6
  int v13; // t1

  v4 = FIELD_F32(a2, 108);
  v5 = FIELD_F32(a2, 572);
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_S8(a2, 84);
  v8 = v7;
  v9 = v4 + v5;
  if ( (unsigned __int8)v7 >= 4u )
    v7 = 0;
  v10 = a1 + 4 * v7;
  v11 = (int)(float)(fabsf(v9 - v6) * 0.0625);
  v13 = FIELD_U32(v10, 6428);
  v12 = (_DWORD *)(v10 + 6428);
  *v12 = v13 - 1;
  if ( v13 <= 1 )
  {
    if ( FIELD_U32(a2, 1320) == 5 )
      AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, v8, dword_60AF4F30[v11], 0, 0);
    else
      AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, v8, dword_60AF4F50[v11], 0, 0);
    *v12 = 8;
  }
  JUMPOUT(0x607BFCD0);
}
