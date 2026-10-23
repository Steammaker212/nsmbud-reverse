/* sub_60943560
 * address: 0x60943560   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60943560(int a1)
{
  int v2; // r1
  int result; // r0
  _DWORD *v4; // r0
  int v5; // r1
  _DWORD *v6; // r0
  _DWORD *v7; // r0

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1) - 1;
  result = 0;
  switch ( v2 )
  {
    case 0:
      *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1) = 0;
      goto LABEL_8;
    case 2:
      v6 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      *v6 = 0;
      v6[1] = 0;
      goto LABEL_8;
    case 3:
      v7 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      *v7 = 0;
      v7[1] = 0;
      v7[2] = 0;
      goto LABEL_8;
    case 4:
    case 5:
      v4 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      v5 = 0;
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      goto LABEL_7;
    case 15:
      v4 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      v5 = 1065353216;
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
LABEL_7:
      v4[3] = v5;
LABEL_8:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}
