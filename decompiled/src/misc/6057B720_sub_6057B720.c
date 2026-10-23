/* sub_6057B720
 * address: 0x6057B720   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057B720(int a1, int a2)
{
  char v2; // r12
  int v5; // r0
  unsigned int v6; // r5
  int v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r1
  _DWORD v12[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60C7B408 & ~(1616361280 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( a2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B404) == 1 )
    {
      v5 = FIELD_U32(a2, 11420);
      if ( (unsigned __int8)v5 != 255 )
      {
        v6 = (char)v5;
        sub_60584408(dword_60CAF15C, (char)v5, 1);
        v7 = FIELD_U32(a1, 36);
        if ( FIELD_U8(v7, 7339) )
        {
          v8 = FIELD_U32(v7, 7316);
          v12[0] = FIELD_U32(v7, 6980);
          if ( v8 != 2 )
            v8 = 0;
          v12[1] = FIELD_U32(v7, 6984);
          ((void (__fastcall *)(int, _DWORD *, int))sub_60584678)(dword_60CAF15C, v12, v8);
          v7 = FIELD_U32(a1, 36);
        }
        SE_OBJ_GET_COIN_ref(v6, (float *)(v7 + 108));
        v9 = FIELD_U32(a1, 36);
        v10 = FIELD_U32(v9, 7308);
        if ( v10 )
          sub_6058568C(dword_60CAF15C, v10, FIELD_U32(v9, 7316));
      }
    }
  }
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 336))(FIELD_U32(a1, 36));
  *(_BYTE *)(FIELD_U32(a1, 36) + 19) = 1;
  return 1;
}
