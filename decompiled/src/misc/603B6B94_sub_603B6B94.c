/* sub_603B6B94
 * address: 0x603B6B94   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B6B94(int a1)
{
  int v2; // r6
  int v3; // r0
  int result; // r0
  float v5; // r1
  float v6[7]; // [sp+4h] [bp-1Ch] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  if ( !FIELD_U8(a1, 536) )
  {
    v2 = sub_60001B14((StageActor *)a1, a1 + 648);
    v3 = sub_60001814((StageActor *)a1, a1 + 648);
    if ( v2 || v3 == 1 )
      FIELD_U8(a1, 22644) = 1;
  }
  result = FIELD_U8(a1, 22644);
  if ( FIELD_U8(a1, 22644) )
  {
    FIELD_U8(a1, 22647) = 1;
    FIELD_U8(a1, 536) = 1;
    v5 = FIELD_F32(a1, 112);
    v6[0] = FIELD_F32(a1, 108);
    v6[1] = v5;
    v6[2] = 4500.0;
    sub_602A38A4(a1, v6);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98270);
  }
  return result;
}
