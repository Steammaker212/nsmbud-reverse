/* sub_6059499C
 * address: 0x6059499C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6059499C(int a1)
{
  char v1; // r12
  int v2; // r2
  int v3; // r2
  int v4; // r8
  int v5; // r5
  int v6; // r7
  int v7; // [sp+0h] [bp-30h]

  v2 = FIELD_U32(a1, 8168);
  if ( v2 )
  {
    v3 = v2 - 1;
    FIELD_U32(a1, 8168) = v3;
    if ( v3 == 1 )
    {
      v4 = 0;
      v7 = a1 + 6112;
      v5 = a1 + 6116;
      do
      {
        if ( *(_DWORD *)(v5 + 2 * v4) == 2 )
        {
          v6 = *(_DWORD *)(PlayerMgr_instance + v4 + 48);
          if ( ((unsigned int)&dword_60C7B374 & ~(1616464452 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
          {
            dword_60C7B370 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B374);
          }
          if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B370) == 1 )
          {
            if ( FIELD_U8(v6, 12013) )
            {
              sub_607A81AC(v6);
              *(_DWORD *)(v5 + 2 * v4) = 0;
            }
            else
            {
              *(_DWORD *)(v5 + 2 * v4) = 3;
              *(_BYTE *)(v7 + 2 * v4) = 1;
            }
          }
        }
        v4 += 4;
      }
      while ( v4 != 16 );
    }
  }
}
