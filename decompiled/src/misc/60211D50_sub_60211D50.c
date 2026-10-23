/* sub_60211D50
 * address: 0x60211D50   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60211D50(int a1)
{
  int v2; // r5
  int v3; // r6
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r1
  float v7; // s0
  float v8; // s1
  int v9; // r0
  int v10; // r1
  int v11; // r6
  int result; // r0
  char v13; // r0
  float v14; // s0
  float v15; // s1
  int v16; // r0
  int v17; // r1
  char *v18; // r0
  int i; // r2
  int v20; // [sp+4h] [bp-14h]

  v2 = dword_60C8996C;
  sub_601CF9C0(dword_60C8AEF0);
  v20 = sub_6019112C(v2);
  if ( FIELD_U8(v2, 1384) )
  {
    if ( (unsigned int)(v20 - 188) >= 0xC )
    {
      if ( v20 == 180 )
      {
        v4 = (_DWORD *)sub_601E0010(a1 + 284);
        v5 = sub_601916F4(dword_60C8996C);
        v6 = FIELD_U32(a1, 276);
        if ( v5 )
        {
          if ( v6 )
            sub_602118F0(a1, 0, -1.0, -2.0);
          else
            sub_602118F0(a1, 1, 0.0, 2.0);
        }
        else
        {
          if ( v6 )
          {
            v14 = 0.0;
            v15 = 2.0;
            v16 = a1;
            v17 = 1;
          }
          else
          {
            v14 = -1.0;
            v15 = -2.0;
            v16 = a1;
            v17 = 0;
          }
          sub_602118F0(v16, v17, v14, v15);
          (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
          (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
          v18 = (char *)v4[1];
          if ( v18 == "Ff22" )
          {
LABEL_46:
            sub_601E4C88((_DWORD *)dword_60C8B13C, 113, (_DWORD *)(a1 + 80));
          }
          else
          {
            for ( i = 0; i <= 0x80000; ++i )
            {
              if ( v18[i] != aFf22[i] )
                break;
              if ( !v18[i] )
                goto LABEL_46;
            }
          }
        }
      }
    }
    else
    {
      v3 = sub_601916F4(dword_60C8996C);
      if ( sub_602120D8(a1, v20, v3) == 1 )
      {
        switch ( v3 )
        {
          case 2:
            if ( FIELD_U32(a1, 276) )
              goto LABEL_17;
            goto LABEL_12;
          case 3:
            if ( FIELD_U32(a1, 276) )
            {
LABEL_12:
              v7 = 0.0;
              v8 = 2.0;
              goto LABEL_20;
            }
LABEL_17:
            v7 = -1.0;
            v8 = -2.0;
            goto LABEL_18;
          case 4:
            if ( !FIELD_U32(a1, 276) )
              goto LABEL_16;
            goto LABEL_19;
          case 5:
            if ( FIELD_U32(a1, 276) )
            {
LABEL_16:
              v7 = 0.0;
              v8 = 2.0;
LABEL_18:
              v9 = a1;
              v10 = 1;
            }
            else
            {
LABEL_19:
              v7 = -1.0;
              v8 = -2.0;
LABEL_20:
              v9 = a1;
              v10 = 0;
            }
            sub_602118F0(v9, v10, v7, v8);
LABEL_22:
            sub_60212CFC(a1, v20);
            break;
          default:
            goto LABEL_22;
        }
      }
    }
  }
  if ( (unsigned int)(v20 - 188) >= 0xC )
  {
    if ( v20 == 180 )
    {
      result = sub_601916F4(dword_60C8996C);
      if ( (*(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 268) + 28) + 28) & 0x20) == 0 )
        return result;
LABEL_32:
      v13 = 0;
LABEL_33:
      FIELD_U8(a1, 280) = v13;
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  v11 = sub_601916F4(dword_60C8996C);
  if ( sub_602120D8(a1, v20, v11) != 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  result = v11 - 2;
  switch ( v11 )
  {
    case 2:
    case 3:
      result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 268) + 28) + 28);
      if ( (result & 0x20) != 0 )
      {
        v13 = 1;
        goto LABEL_33;
      }
      break;
    case 4:
    case 5:
      result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 268) + 28) + 28);
      if ( (result & 0x20) != 0 )
        goto LABEL_32;
      break;
    default:
      return result;
  }
  return result;
}
