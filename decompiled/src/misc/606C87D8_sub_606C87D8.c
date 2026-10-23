/* sub_606C87D8
 * address: 0x606C87D8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606C87D8(int a1, int a2)
{
  char v2; // r12
  int v3; // r6
  int v4; // r7
  int v5; // r4
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  unsigned int v11; // r1
  int v13; // [sp+Ch] [bp-3Ch]

  v3 = a1 + 7104;
  v4 = 0;
  v13 = a1 + 7120;
  do
  {
    *(_DWORD *)(v3 + 4 * v4) = 0;
    if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v4)) != 0 )
    {
      v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617725588 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v5 )
      {
        v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378);
        v7 = v6 == 1;
        if ( v6 == 1 )
          v7 = (FIELD_U8(v5, 1219) & 8) == 0;
        if ( v7 )
        {
          *(_DWORD *)(v3 + 4 * v4) = 1;
          v8 = FIELD_U32(v5, 1320);
          if ( FIELD_U32(v5, 1316) == 4 )
          {
            v9 = v8 - 5;
            v10 = 22;
            if ( v9 <= 4 )
              v10 = dword_60B08AB0[v9];
          }
          else
          {
            v11 = v8 - 2;
            v10 = 2;
            if ( v11 >= 8 )
              v10 = dword_60B08A98[a2];
          }
          *(_DWORD *)(v13 + 4 * v4) = v10;
        }
      }
    }
    ++v4;
  }
  while ( v4 != 4 );
}
