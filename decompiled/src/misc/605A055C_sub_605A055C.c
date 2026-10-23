/* sub_605A055C
 * address: 0x605A055C   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A055C(int a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  int result; // r0
  float v7; // s0
  int (__fastcall *v8)(int, int *); // r2
  int *v9; // r1
  int v10; // r1
  float v11; // s0

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
          if ( ((unsigned int)&dword_60C7B37C & ~(1616512472 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
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
    v10 = FIELD_U8(v4, 1320);
    FIELD_U8(a1, 6359) = v10;
    FIELD_U8(a1, 84) = v5;
    if ( v10 != 3 )
    {
      v8 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      v9 = (int *)&unk_60CAFD94;
      return v8(a1, v9);
    }
    result = a1 + 6308;
    FIELD_F32(a1, 124) = FIELD_F32(a1, 6320) + FIELD_F32(a1, 124);
    v11 = FIELD_F32(a1, 6308);
    if ( FIELD_F32(a1, 112) > v11 )
    {
      FIELD_F32(a1, 112) = v11;
      v8 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      v9 = (int *)&unk_60CAFD74;
      return v8(a1, v9);
    }
  }
  else
  {
LABEL_11:
    result = a1 + 6308;
    FIELD_F32(a1, 124) = FIELD_F32(a1, 6320) + FIELD_F32(a1, 124);
    v7 = FIELD_F32(a1, 6308);
    if ( FIELD_F32(a1, 112) > v7 )
    {
      if ( FIELD_U8(a1, 6359) == 3 )
      {
        FIELD_F32(a1, 112) = v7;
        FIELD_U16(a1, 6356) = 20;
        v8 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
        v9 = (int *)&unk_60CAFD74;
      }
      else
      {
        FIELD_U16(a1, 6354) = 20;
        v8 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
        v9 = &dword_60CAFE74;
      }
      return v8(a1, v9);
    }
  }
  return result;
}
