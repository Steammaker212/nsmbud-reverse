/* sub_605A0D80
 * address: 0x605A0D80   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A0D80(int a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  int result; // r0
  float v7; // s6
  float v8; // s0
  float v9; // s2
  float v10; // s4
  unsigned int v11; // r2
  int v12; // r1

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
          if ( ((unsigned int)&dword_60C7B37C & ~(1616514556 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
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
    v12 = FIELD_U8(v4, 1320);
    FIELD_U8(a1, 6359) = v12;
    FIELD_U8(a1, 84) = v5;
    if ( v12 != 3 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAFDD4);
  }
LABEL_11:
  result = a1 + 6316;
  v7 = FIELD_F32(a1, 6316);
  v8 = FIELD_F32(a1, 124) - v7;
  FIELD_F32(a1, 124) = v8;
  v9 = FIELD_F32(a1, 6308);
  v10 = FIELD_F32(a1, 112);
  if ( v7 <= 0.0 )
  {
    if ( v10 > v9 )
    {
      *(_DWORD *)result = 1035993088;
      FIELD_F32(a1, 124) = v8 * 0.25;
      result = FIELD_U8(a1, 6358);
      if ( !FIELD_U8(a1, 6358) )
      {
        FIELD_F32(a1, 112) = v9;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAFE74);
      }
    }
  }
  else
  {
    v11 = FIELD_U8(a1, 6358);
    if ( v10 < (float)(v9 - (float)v11) )
    {
      *(_DWORD *)result = -1111490560;
      FIELD_F32(a1, 124) = v8 * 0.5;
      FIELD_U8(a1, 6358) = v11 >> 2;
      return v11 >> 2;
    }
  }
  return result;
}
