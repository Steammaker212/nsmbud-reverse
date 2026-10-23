/* sub_605A07A0
 * address: 0x605A07A0   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A07A0(int a1)
{
  char v1; // r12
  _DWORD *v3; // r6
  int v4; // r4
  int result; // r0
  int (__fastcall *v6)(int, void *); // r2
  void *v7; // r1
  float v8; // s0
  float v9; // s2
  float v10; // s4

  v3 = *(_DWORD **)(a1 + 6616);
  if ( !v3 )
  {
LABEL_11:
    FIELD_U16(a1, 6354) = 20;
    v6 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
    v7 = &unk_60CAFE14;
    return v6(a1, v7);
  }
  while ( 1 )
  {
    if ( *v3 )
    {
      v4 = *(_DWORD *)(*v3 + 2196);
      if ( (unsigned int)FIELD_U8(v4, 533) - 1 <= 1 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1616513052 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v4 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1 )
          {
            result = FIELD_S8(v4, 84);
            if ( (unsigned __int8)result < 4u )
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
  FIELD_U8(a1, 84) = result;
  v8 = FIELD_F32(a1, 124);
  if ( v8 >= -1.0 )
  {
    v8 = v8 - FIELD_F32(a1, 6316);
    FIELD_F32(a1, 124) = v8;
  }
  v9 = FIELD_F32(a1, 112);
  v10 = FIELD_F32(a1, 6308);
  if ( v9 <= (float)(v10 + -20.0) || FIELD_U8(a1, 6332) )
  {
    if ( v8 < 0.0 )
    {
      if ( v9 >= (float)(v10 + -64.0) )
      {
        if ( v9 > (float)(v10 + -16.0) )
          JUMPOUT(0x60832560);
      }
      else
      {
        result = *(_DWORD *)(PlayerMgr_instance + 4 * result + 32);
        if ( result )
        {
          (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)result + 748))(
            result,
            1,
            0,
            0,
            1.0,
            FIELD_F32(result, 88));
          v6 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
          v7 = &unk_60CAFDF4;
          return v6(a1, v7);
        }
      }
    }
  }
  else
  {
    result = 1;
    FIELD_F32(a1, 124) = v8 * 0.5;
    FIELD_U8(a1, 6332) = 1;
  }
  return result;
}
