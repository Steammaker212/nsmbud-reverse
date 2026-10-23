/* sub_6060225C
 * address: 0x6060225C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060225C(int a1)
{
  int v2; // r0
  int v3; // r12
  unsigned __int8 v4; // lr
  int v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r10
  int v9; // r11
  int v10; // r8
  unsigned int v11; // r9
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r6
  int v16; // r4
  unsigned __int8 *v18; // [sp+4h] [bp-2Ch]
  int v19; // [sp+8h] [bp-28h]

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = ((int (__fastcall *)(int))loc_606031C8)(a1);
  v3 = a1;
  if ( v2 == 1 )
  {
    v4 = FIELD_U8(a1, 6101);
    v18 = (unsigned __int8 *)(a1 + 6101);
    if ( v4 )
    {
      v5 = a1 + 144;
      v6 = 0;
      do
      {
        v7 = 0;
        if ( (unsigned int)v6 < 4 )
          v7 = v6;
        v8 = v3 + 220 * v7;
        v9 = FIELD_U32(v8, 6868);
        if ( v9 >= 1 )
        {
          v10 = v9 * v6;
          v11 = 0;
          v19 = v6;
          do
          {
            v12 = 0;
            if ( v11 < 0x10 )
              v12 = v11;
            v13 = v8 + 12 * v12 + 6884;
            v14 = v10 + v11;
            if ( v10 + v11 >= 0x40 )
              v14 = 0;
            v15 = v3;
            sub_6060352C(v3 + 104 * v14 + 27484, v13, 0, v5);
            ++v11;
            v3 = v15;
          }
          while ( v9 != v11 );
          v4 = *v18;
          v6 = v19;
        }
        ++v6;
      }
      while ( v6 < v4 );
    }
  }
  v16 = v3;
  ((void (__fastcall *)(int))loc_60602DF0)(v3);
  if ( ((int (__fastcall *)(int))loc_606031C8)(v16) == 1 )
  {
    sub_60601F6C(v16);
    ShapedCollider_execute((ColliderBase *)(v16 + 6160));
  }
  return 1;
}
