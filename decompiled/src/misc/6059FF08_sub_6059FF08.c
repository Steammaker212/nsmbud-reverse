/* sub_6059FF08
 * address: 0x6059FF08   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059FF08(int a1)
{
  char v1; // r12
  _DWORD *v3; // r4
  int v4; // r6
  unsigned int v5; // r0
  int result; // r0
  int v7; // r1
  _DWORD v8[11]; // [sp+4h] [bp-2Ch] BYREF

  v3 = *(_DWORD **)(a1 + 6616);
  if ( v3 )
  {
    while ( 1 )
    {
      if ( *v3 )
      {
        v4 = *(_DWORD *)(*v3 + 2196);
        if ( (unsigned int)FIELD_U8(v4, 533) - 1 <= 1 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1616510852 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( v4 )
          {
            if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1 )
            {
              v5 = FIELD_U8(v4, 84);
              if ( v5 < 4 )
                break;
            }
          }
        }
      }
      v3 = (_DWORD *)v3[1];
      if ( !v3 )
        goto LABEL_11;
    }
    FIELD_U8(a1, 6359) = FIELD_U32(v4, 1320);
    FIELD_U8(a1, 84) = v5;
    v7 = FIELD_U32(a1, 6308);
    v8[0] = FIELD_U32(a1, 108);
    v8[1] = v7;
    TileMgr_splashRelated(TileMgr_instance, v8, 27);
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAFD94);
  }
  else
  {
LABEL_11:
    result = FIELD_U32(a1, 6308);
    FIELD_U32(a1, 112) = result;
  }
  return result;
}
