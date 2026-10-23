/* sub_605A0A98
 * address: 0x605A0A98   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A0A98(int a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  float v6; // s0
  int result; // r0
  int (__fastcall *v8)(int, void *); // r2
  void *v9; // r1
  int v10; // r1

  v3 = *(_DWORD **)(a1 + 6616);
  if ( !v3 )
    goto LABEL_11;
  while ( 1 )
  {
    if ( *v3 )
    {
      v4 = *(_DWORD *)(*v3 + 2196);
      if ( (unsigned int)FIELD_U8(v4, 533) - 1 <= 1 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1616513812 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
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
  if ( v10 == 3 )
  {
LABEL_11:
    v6 = FIELD_F32(a1, 124);
    if ( v6 < 3.0 )
      FIELD_F32(a1, 124) = v6 - FIELD_F32(a1, 6316);
    result = a1 + 6308;
    if ( FIELD_F32(a1, 112) > FIELD_F32(a1, 6308) )
    {
      v8 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      v9 = &unk_60CAFE54;
      return v8(a1, v9);
    }
  }
  else
  {
    if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(a1, 6308) + -16.0) )
    {
      v8 = *(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192);
      v9 = &unk_60CAFE34;
      return v8(a1, v9);
    }
    FIELD_F32(a1, 124) = FIELD_F32(a1, 124) * 0.25;
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAFDD4);
    FIELD_U32(a1, 6316) = 1031798784;
    return 6316;
  }
  return result;
}
