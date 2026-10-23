/* sub_6047572C
 * address: 0x6047572C   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047572C(int result, _DWORD *a2, int a3, unsigned int a4, int a5)
{
  int v7; // r9
  int v8; // r3
  int v9; // r11
  int *v10; // r0
  int v11; // r2
  int v12; // r7
  int v13; // r8
  int v14; // r0
  int v15; // r3
  bool v16; // nf
  bool v17; // zf
  float v18; // s0
  int v19; // r0
  unsigned int v20; // [sp+4h] [bp-2Ch]

  v7 = result;
  if ( a3 >= 0 )
  {
    v8 = dword_60C99DD4 + 272;
    if ( !dword_60C99DD4 )
      v8 = dword_60C99DEC + 16;
    if ( (unsigned int)a3 >= 6 )
      a3 = 0;
    v9 = v8 + 72 * a3;
    v20 = FIELD_U32(v9, 36);
    v10 = (int *)(result + 32);
    while ( 1 )
    {
      v12 = *v10;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v13 = a2[1];
      (*(void (__fastcall **)(int))(FIELD_U32(v12, 16) + 12))(v12 + 16);
      v14 = FIELD_U32(v12, 20);
      if ( v13 == v14 )
        break;
      v11 = 0;
      while ( 1 )
      {
        v15 = *(unsigned __int8 *)(a2[1] + v11);
        v16 = v15 - *(unsigned __int8 *)(v14 + v11) < 0;
        if ( v15 != *(unsigned __int8 *)(v14 + v11) )
          break;
        if ( *(_BYTE *)(a2[1] + v11) )
        {
          if ( ++v11 < 0x80000 )
            continue;
        }
        goto LABEL_16;
      }
      v10 = (int *)(v12 + 8);
      if ( v16 )
        v10 = (int *)(v12 + 4);
    }
LABEL_16:
    LoopRandom_ref((_DWORD *)v7, 0, a2, 0, 1.0, *(int **)(v12 + 24));
    v17 = a5 == 1;
    if ( a5 == 1 )
      v17 = FIELD_U32(v9, 32) == 6;
    if ( v17 )
    {
      v18 = 4.0;
    }
    else if ( v20 > 5 )
    {
      v18 = 0.0;
    }
    else
    {
      v18 = flt_60B02950[v20];
    }
    *(float *)(**(_DWORD **)(v7 + 3512) + 16) = v18;
    v19 = FIELD_U32(dword_60CD0B40, 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > a4 )
      v19 += 4 * a4;
    sub_604739E8((_DWORD *)v7, (__int64 *)(*(_DWORD *)(*(_DWORD *)v19 + 72) + 4), 0);
    return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(v7 + 3512) + 100))(**(_DWORD **)(v7 + 3512));
  }
  return result;
}
