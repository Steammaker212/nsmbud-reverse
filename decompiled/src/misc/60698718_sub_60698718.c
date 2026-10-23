/* sub_60698718
 * address: 0x60698718   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60698718(int a1)
{
  int v2; // r5
  int v3; // r11
  int v4; // r4
  _BYTE *v5; // r10
  int result; // r0
  int v7; // r6
  int *v8; // r1
  _DWORD *v9; // [sp+4h] [bp-34h]

  v2 = 0;
  v3 = a1 + 6108;
  v4 = a1 + 6104;
  v9 = (_DWORD *)(a1 + 6128);
  v5 = (_BYTE *)(a1 + 6126);
  do
  {
    result = *(unsigned __int8 *)(v4 + v2);
    if ( result == 1 )
    {
      result = Player_getActorSlotChecked(PlayerMgr_instance, v2);
      v7 = result;
      if ( result )
      {
        if ( *(_DWORD *)(v3 + 4 * v2) )
        {
          result = FIELD_U8(result, 6900);
          if ( (result & 1) != 0 )
          {
            if ( (unsigned __int8)*v5 == 255 )
            {
              *v5 = v2;
              *v9 = 121;
            }
            v8 = dword_60698844;
            if ( (FIELD_U32(a1, 20) & 0x1000000) == 0 )
              v8 = &dword_60698844[1];
            ((void (__fastcall *)(int, float, float))loc_60768E4C)(v7, FIELD_F32(a1, 108) + *(float *)v8, 1.5);
            FIELD_U32(v7, 1236) |= 2u;
            result = 2;
            *(_BYTE *)(v4 + v2) = 2;
          }
        }
        else
        {
          result = sub_60779F74(dword_60CBFA90, v2);
          if ( result == 1 )
          {
            result = *(_DWORD *)(v3 + 4 * v2) + 1;
            *(_DWORD *)(v3 + 4 * v2) = result;
          }
        }
      }
    }
    ++v2;
  }
  while ( v2 != 4 );
  return result;
}
