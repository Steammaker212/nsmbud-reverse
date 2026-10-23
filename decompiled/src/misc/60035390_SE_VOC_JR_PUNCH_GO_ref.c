/* SE_VOC_JR_PUNCH_GO_ref
 * address: 0x60035390   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_JR_PUNCH_GO_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int result; // r0
  __int64 v10; // d17
  __int64 v11; // d17
  __int64 v12; // d17

  v3 = a1 + 7100;
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
    sub_60813430(a1 + 6332, "SE_VOC_JR_PUNCH_GO", 0);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += 4 * v8;
  result = *(unsigned __int8 *)(*(_DWORD *)v7 + 28);
  if ( (result & 0x10) != 0 )
  {
    v10 = FIELD_U64(a1, 7200);
    FIELD_U64(a1, 7664) = FIELD_U64(a1, 7192);
    FIELD_U64(a1, 7672) = v10;
    v11 = FIELD_U64(a1, 7216);
    FIELD_U64(a1, 7680) = FIELD_U64(a1, 7208);
    FIELD_U64(a1, 7688) = v11;
    v12 = FIELD_U64(a1, 7232);
    FIELD_U64(a1, 7696) = FIELD_U64(a1, 7224);
    FIELD_U64(a1, 7704) = v12;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FEDC);
  }
  return result;
}
