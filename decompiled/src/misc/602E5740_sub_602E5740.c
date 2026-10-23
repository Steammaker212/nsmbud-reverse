/* sub_602E5740
 * address: 0x602E5740   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602E5740(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r4
  int v9; // r7
  int v10; // r9
  int v11; // r4
  float v12; // s16
  float v13; // [sp+0h] [bp-48h] BYREF
  int v14; // [sp+4h] [bp-44h]
  int v15; // [sp+8h] [bp-40h]
  char v16; // [sp+10h] [bp-38h]
  char v17; // [sp+11h] [bp-37h]
  char v18; // [sp+12h] [bp-36h]
  char v19; // [sp+13h] [bp-35h]
  char v20; // [sp+14h] [bp-34h]
  char v21; // [sp+15h] [bp-33h]
  char v22; // [sp+16h] [bp-32h]

  v7 = 1;
  if ( a1 + 188 == a2 )
  {
    v9 = FIELD_U32(a2, 64);
    if ( ((unsigned int)dword_60C922C8 & ~(1613649812 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C922C8) )
    {
      dword_60C922C4 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C922C8);
    }
    v7 = 0;
    if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C922C4) == 1 )
    {
      v10 = FIELD_U32(v9, 6384);
      v11 = FIELD_U32(v9, 6380);
      v13 = FIELD_F32(v9, 6376) + 8.0;
      v12 = v13;
      v14 = v11;
      v15 = v10;
      v16 = 5;
      v17 = 0;
      v20 = 0;
      v19 = 0;
      v22 = 0;
      v21 = 0;
      v18 = 0;
      sub_60583000(dword_60CAF15C, &v13, 3);
      v13 = v12;
      v14 = v11;
      v15 = v10;
      v16 = 5;
      v20 = 0;
      v19 = 0;
      v22 = 0;
      v21 = 0;
      v18 = 0;
      v17 = 0;
      sub_60583000(dword_60CAF15C, &v13, 3);
      v13 = v12;
      v14 = v11;
      v15 = v10;
      v16 = 5;
      v20 = 0;
      v19 = 0;
      v22 = 0;
      v21 = 0;
      v18 = 0;
      v17 = 0;
      sub_60583000(dword_60CAF15C, &v13, 3);
      v13 = v12;
      v14 = v11;
      v15 = v10;
      v16 = 5;
      v20 = 0;
      v19 = 0;
      v22 = 0;
      v21 = 0;
      v18 = 0;
      v17 = 0;
      sub_60583000(dword_60CAF15C, &v13, 3);
      return Enemy__collisionPipeCannon(a1, a2, a3);
    }
  }
  return v7;
}
