/* sub_605A0FA4
 * address: 0x605A0FA4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605A0FA4(int a1)
{
  char v1; // r12
  _DWORD *v3; // r4
  int v4; // r6
  unsigned int v5; // r0
  int v6; // r1
  _DWORD v7[11]; // [sp+4h] [bp-2Ch] BYREF

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
          if ( ((unsigned int)&dword_60C7B37C & ~(1616515104 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
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
    v6 = FIELD_U32(a1, 6308);
    v7[0] = FIELD_U32(a1, 108);
    v7[1] = v6;
    TileMgr_splashRelated(TileMgr_instance, v7, 27);
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAFD94);
  }
  else
  {
LABEL_11:
    if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
           a1 + 112,
           FIELD_F32(a1, 6308),
           0.16667,
           3.0,
           0.5) == 0.0 )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAFD54);
  }
}
