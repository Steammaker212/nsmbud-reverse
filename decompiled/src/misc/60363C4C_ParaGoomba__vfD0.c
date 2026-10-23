/* ParaGoomba__vfD0
 * address: 0x60363C4C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A9358
// 
// Overridden by: None
signed int __fastcall ParaGoomba__vfD0(int a1)
{
  int v1; // s2
  float v2; // s6
  int v3; // s0
  float v4; // s4
  float v5; // s6
  int v6; // r1
  _DWORD v8[10]; // [sp+0h] [bp-28h] BYREF

  if ( FIELD_U8(a1, 6843) )
  {
    v1 = 1072064102;
    if ( FIELD_U32(a1, 80) == 1 )
      v2 = 2.5;
    else
      v2 = -2.5;
    v3 = 1067869798;
    v4 = FIELD_F32(a1, 108) + v2;
  }
  else
  {
    v3 = 1067030938;
    v4 = FIELD_F32(a1, 108);
    v1 = 1067030938;
  }
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_U32(a1, 116);
  v8[0] = 0;
  *(float *)&v8[1] = v4;
  *(float *)&v8[2] = v5 + -2.0;
  v8[3] = v6;
  v8[4] = v1;
  v8[5] = v3;
  v8[6] = 1067030938;
  v8[7] = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), v8, 1u);
}
