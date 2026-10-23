/* SE_VOC_JR_ref_3
 * address: 0x6011284C   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_JR_ref_3(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  _DWORD *v4; // r0
  int v5; // r7
  _DWORD *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  _DWORD *v9; // r1
  _DWORD *v10; // r5
  unsigned int v11; // r2
  unsigned int v12; // r3
  _DWORD *v13; // r0
  int v14; // r6
  _DWORD *v15; // r1
  unsigned int v16; // r0
  _DWORD *v17; // r1
  unsigned int v18; // r0

  v3 = (_DWORD *)(a1 + 7648);
  v2 = FIELD_U32(a1, 7648);
  if ( v2 == 2 )
  {
    if ( !FIELD_U16(a1, 6278) )
    {
      FIELD_U8(a1, 7644) = 1;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C869C4);
    }
  }
  else if ( v2 == 1 )
  {
    v5 = a1 + 7100;
    v4 = *(_DWORD **)(a1 + 7100);
    v6 = (_DWORD *)v4[3];
    v7 = v4[2];
    v8 = v4[17];
    if ( v7 > v8 )
      v6 += v8;
    if ( sub_60418548(*v6 + 4) )
      FIELD_U8(a1, 7264) = 1;
    v9 = *(_DWORD **)v5;
    v10 = *(_DWORD **)(*(_DWORD *)v5 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v5 + 8);
    v12 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    v13 = v10;
    if ( v11 > v12 )
      v13 = &v10[v12];
    if ( (*(_BYTE *)(*v13 + 28) & 0x20) != 0 )
    {
      FIELD_U16(a1, 6278) = 20;
      *v3 = 2;
      v10 = (_DWORD *)v9[3];
      v11 = v9[2];
      v12 = v9[17];
    }
    LOWORD(v14) = 932;
    if ( v11 > v12 )
      v10 += v12;
    HIWORD(v14) = 256;
    if ( sub_60418548(*v10 + 4) )
    {
      sub_60813430(a1 + 6332, "SE_VOC_JR_NOTICE", 0);
      FIELD_U32(a1, 7092) = v14;
    }
    else
    {
      v15 = *(_DWORD **)(*(_DWORD *)v5 + 12);
      v16 = *(_DWORD *)(*(_DWORD *)v5 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v16 )
        v15 += v16;
      if ( sub_60418548(*v15 + 4) )
      {
        sub_60813430(a1 + 6332, "SE_VOC_JR_CHOUHATSU1", 0);
        FIELD_U32(a1, 7092) = 16780499;
      }
      else
      {
        v17 = *(_DWORD **)(*(_DWORD *)v5 + 12);
        v18 = *(_DWORD *)(*(_DWORD *)v5 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v18 )
          v17 += v18;
        if ( sub_60418548(*v17 + 4) )
        {
          sub_60813430(a1 + 6332, "SE_VOC_JR_CHOUHATSU2", 0);
          FIELD_U32(a1, 7092) = v14 + 1;
        }
      }
    }
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
}
