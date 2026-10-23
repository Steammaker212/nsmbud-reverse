/* sub_60211AF4
 * address: 0x60211AF4   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60211AF4(int a1)
{
  int v2; // r0
  bool v3; // zf
  unsigned int v4; // r0
  float v5; // s1
  int v6; // r0
  int v7; // r0
  int v8; // r0
  float v9; // s0
  int v10; // r0
  int v11; // r1
  float v12; // s0
  float v13; // s1
  int v14; // r0
  int v15; // r1

  sub_601861EC((Actor *)a1);
  if ( !sub_60190968(dword_60C8996C) )
  {
    v2 = FIELD_U32(a1, 272);
    v3 = v2 == 2;
    if ( v2 != 2 )
      v3 = v2 == 1;
    if ( v3 )
    {
      if ( (*(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 268) + 28) + 28) & 0x20) == 0 )
        goto LABEL_31;
      v6 = 0;
      goto LABEL_30;
    }
    if ( !v2 && FIELD_U8(a1, 281) )
    {
      FIELD_U8(a1, 281) = 0;
      if ( FIELD_U8(a1, 280) )
      {
        v4 = sub_601CFE3C(dword_60C8AEF0) - 1;
        if ( v4 > 4 )
          v5 = 1.0;
        else
          v5 = flt_60AFD390[v4];
        v8 = FIELD_U32(a1, 276);
        if ( FIELD_U8(a1, 282) )
        {
          if ( v8 )
            sub_602118F0(a1, 0, -1.0, -v5);
          else
            sub_602118F0(a1, 1, 0.0, v5);
        }
        else
        {
          if ( v8 )
          {
            v9 = 0.0;
            v10 = a1;
            v11 = 1;
          }
          else
          {
            v9 = -1.0;
            v5 = -v5;
            v10 = a1;
            v11 = 0;
          }
          sub_602118F0(v10, v11, v9, v5);
          if ( !FIELD_U32(a1, 276) )
            sub_601E4C88((_DWORD *)dword_60C8B13C, 113, (_DWORD *)(a1 + 80));
        }
        FIELD_U8(a1, 280) = 0;
        v6 = 2;
LABEL_30:
        FIELD_U32(a1, 272) = v6;
        goto LABEL_31;
      }
      v7 = FIELD_U32(a1, 276);
      if ( FIELD_U8(a1, 282) )
      {
        if ( !v7 )
          goto LABEL_23;
      }
      else if ( v7 )
      {
LABEL_23:
        v12 = 0.0;
        v13 = 1.0;
        v14 = a1;
        v15 = 0;
LABEL_25:
        sub_602118F0(v14, v15, v12, v13);
        sub_601E4C88((_DWORD *)dword_60C8B13C, 112, (_DWORD *)(a1 + 80));
        FIELD_U8(a1, 280) = 1;
        FIELD_U32(a1, 272) = 1;
        goto LABEL_31;
      }
      v12 = -1.0;
      v14 = a1;
      v15 = 1;
      v13 = -1.0;
      goto LABEL_25;
    }
  }
LABEL_31:
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
  {
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 52))(**(_DWORD **)(a1 + 268));
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 56))(**(_DWORD **)(a1 + 268));
  }
  return 1;
}
