/* ShellEnemy__collisionPenguinSlide
 * address: 0x603A272C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A675C
// 
// Overridden by: None
int __fastcall ShellEnemy__collisionPenguinSlide(int a1, int a2, int a3)
{
  int v5; // r1
  int v6; // r2
  int result; // r0
  int v8; // r6
  _BOOL4 v9; // r0
  float v10[6]; // [sp+8h] [bp-18h] BYREF

  if ( !FIELD_U8(a1, 6392) )
    return Enemy__collisionPenguinSlide(a1);
  v5 = FIELD_U32(a3, 64);
  v6 = FIELD_S8(v5, 84);
  if ( (unsigned __int8)v6 > 3u || (result = 0, !*(_WORD *)(a1 + 2 * v6 + 6140)) )
  {
    v8 = 0;
    if ( (unsigned __int8)v6 >= 4u )
      v6 = 0;
    *(_WORD *)(a1 + 2 * v6 + 6140) = 16;
    v9 = sub_6000ADDC(a1, v5);
    if ( FIELD_U32(a1, 80) != !v9 )
      v8 = 1;
    v10[0] = *(float *)&dword_60AFE3F8[v9] * 0.5;
    v10[1] = 3.5;
    return SE_EMY_DOWN_ref_3A1830(a1, a3, v10, 1, v8);
  }
  return result;
}
