/* sub_601EB66C
 * address: 0x601EB66C   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EB66C(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // r1
  int result; // r0
  int v6; // r0
  float v7; // s0
  int v8; // [sp+4h] [bp-14h]

  v2 = dword_60C8996C;
  v8 = sub_6019112C(dword_60C8996C);
  v3 = sub_601DB42C();
  if ( FIELD_U8(v2, 1384) )
  {
    if ( v8 > 290 )
    {
      if ( v8 == 291 )
      {
        if ( FIELD_U8(a1, 272) )
          goto LABEL_16;
        v4 = a1 + 80;
        goto LABEL_15;
      }
      if ( v8 != 341 )
        goto LABEL_16;
LABEL_8:
      sub_601E4C88((_DWORD *)dword_60C8B13C, 123, (_DWORD *)(a1 + 80));
      goto LABEL_16;
    }
    if ( v8 != 248 )
    {
      if ( v8 != 284 )
        goto LABEL_16;
      sub_601E4DEC(dword_60C8B13C, 229);
      v4 = a1 + 80;
      FIELD_U32(a1, 268) = 10;
LABEL_15:
      ((void (__fastcall *)(int, int, void *, int *))loc_60186074)(a1, v4, &unk_60AFD230, &dword_60B3B980);
      goto LABEL_16;
    }
    if ( *v3 == FIELD_U32(dword_60CC6D78, 428)
      && v3[1] == FIELD_U32(dword_60CC6D78, 440)
      && sub_601916EC(v2) == 30 )
    {
      goto LABEL_8;
    }
  }
LABEL_16:
  switch ( v8 )
  {
    case 284:
      result = sub_601860F8(a1);
      if ( result == 1 )
      {
        v6 = FIELD_U32(a1, 268);
        if ( v6 < 1 )
        {
          sub_601E4C88((_DWORD *)dword_60C8B13C, 123, (_DWORD *)(a1 + 80));
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 264) + 12) + 24) = 1065353216;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
          FIELD_U8(a1, 272) = 1;
        }
        else
        {
          result = v6 - 1;
          FIELD_U32(a1, 268) = result;
        }
      }
      return result;
    case 285:
      if ( FIELD_U8(dword_60C8B144, 65) )
        goto LABEL_27;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      result = 0;
      goto LABEL_25;
    case 291:
      if ( FIELD_U8(a1, 272) )
        goto LABEL_31;
      result = sub_601860F8(a1);
      if ( result == 1 )
      {
        *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 264) + 12) + 24) = 1065353216;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        result = 1;
LABEL_25:
        FIELD_U8(a1, 272) = result;
      }
      break;
    case 292:
      if ( !FIELD_U8(a1, 272) )
        goto LABEL_31;
LABEL_27:
      v7 = ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 128, 0.0, 0.1, 1.0, 0.1);
      if ( v7 <= 0.00000011921 && v7 >= -0.00000011921 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        FIELD_U8(a1, 272) = 0;
      }
      result = FIELD_U32(a1, 128);
      FIELD_U32(a1, 132) = result;
      FIELD_U32(a1, 136) = result;
      break;
    default:
LABEL_31:
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      break;
  }
  return result;
}
