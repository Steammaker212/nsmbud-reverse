/* ShellEnemy__collisionSlide
 * address: 0x603A2630   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A5C00
// 
// Overridden by: None
signed int __fastcall ShellEnemy__collisionSlide(int a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r3
  signed int result; // r0
  int v9; // r2
  int v10; // r4
  _BOOL4 v11; // r0
  float v12[6]; // [sp+8h] [bp-18h] BYREF

  v6 = FIELD_U32(a3, 64);
  v7 = FIELD_U32(a1, 6420);
  result = 0;
  if ( FIELD_U32(v6, 8) != v7 )
  {
    if ( FIELD_U8(a1, 6392) )
    {
      v9 = FIELD_S8(v6, 84);
      if ( (unsigned __int8)v9 > 3u || !*(_WORD *)(a1 + 2 * v9 + 6140) )
      {
        v10 = 0;
        if ( (unsigned __int8)v9 >= 4u )
          v9 = 0;
        *(_WORD *)(a1 + 2 * v9 + 6140) = 16;
        v11 = sub_6000ADDC(a1, v6);
        if ( FIELD_U32(a1, 80) != !v11 )
          v10 = 1;
        v12[0] = *(float *)&dword_60AFE3F8[v11] * 0.5;
        v12[1] = 3.5;
        return SE_EMY_DOWN_ref_3A1830(a1, a3, v12, 1, v10);
      }
    }
    else
    {
      return Enemy__collisionSlide(a1, a2, a3);
    }
  }
  return result;
}
