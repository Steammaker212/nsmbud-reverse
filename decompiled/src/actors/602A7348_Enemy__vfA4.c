/* Enemy__vfA4
 * address: 0x602A7348   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003558
// 
// Overridden by: None
int __fastcall Enemy__vfA4(Enemy *a1, int a2)
{
  char *p_playerId; // r2
  char v3; // r1
  _DWORD v5[5]; // [sp+0h] [bp-28h] BYREF
  char v6; // [sp+14h] [bp-14h]
  int v7; // [sp+18h] [bp-10h]
  char v8; // [sp+1Ch] [bp-Ch]

  p_playerId = (char *)(a2 + 0x54);
  if ( !a2 )
    p_playerId = &FIELD_U32(a1, 0x0)._._.playerId;
  v3 = *p_playerId;
  memset(v5, 0, 16);
  v5[4] = &stru_60C90758;
  v6 = -1;
  v7 = 0;
  v8 = v3;
  return sub_602A852C((int)&FIELD_F32(a1, 0x17D8), v5);
}
