/* sub_605A033C
 * address: 0x605A033C   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A033C(int a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  int v4; // r6
  unsigned int v5; // r1
  int v6; // r0
  int (__fastcall *v7)(int, void *); // r2
  void *v8; // r1
  int result; // r0
  float v10; // s0

  v3 = *(_DWORD **)(a1 + 6616);
  if ( !v3 )
  {
LABEL_11:
    if ( FIELD_U8(a1, 6359) == 3 )
      v6 = 6356;
    else
      v6 = 6354;
    *(_WORD *)(a1 + v6) = 20;
    v7 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
    v8 = &unk_60CAFDB4;
    return v7(a1, v8);
  }
  while ( 1 )
  {
    if ( *v3 )
    {
      v4 = *(_DWORD *)(*v3 + 2196);
      if ( (unsigned int)FIELD_U8(v4, 533) - 1 <= 1 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1616511928 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
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
  result = FIELD_U32(v4, 1320);
  FIELD_U8(a1, 6359) = result;
  FIELD_U8(a1, 84) = v5;
  FIELD_F32(a1, 124) = FIELD_F32(a1, 124) - FIELD_F32(a1, 6320);
  v10 = FIELD_F32(a1, 6308) + -4.0;
  if ( FIELD_F32(a1, 112) < v10 )
  {
    if ( (unsigned __int8)result == 3 )
    {
      v7 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      v8 = &unk_60CAFDB4;
    }
    else
    {
      FIELD_F32(a1, 112) = v10;
      FIELD_U32(a1, 124) = 0;
      v7 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      v8 = &unk_60CAFDD4;
    }
    return v7(a1, v8);
  }
  return result;
}
