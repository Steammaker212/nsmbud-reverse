/* sub_603B6820
 * address: 0x603B6820   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B6820(int a1)
{
  int *v2; // r7
  int v3; // r6
  int v4; // r0
  float v5; // r1
  int result; // r0
  float v7[9]; // [sp+4h] [bp-24h] BYREF

  v2 = (int *)(a1 + 23120);
  --FIELD_U32(a1, 23120);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  ((void (__fastcall *)(int))loc_603B7478)(a1);
  if ( !FIELD_U8(a1, 536) )
  {
    v3 = sub_60001B14((StageActor *)a1, a1 + 648);
    v4 = sub_60001814((StageActor *)a1, a1 + 648);
    if ( v3 || v4 == 1 )
      FIELD_U8(a1, 22644) = 1;
  }
  if ( FIELD_U8(a1, 22644) )
  {
    FIELD_U8(a1, 22647) = 1;
    FIELD_U8(a1, 536) = 1;
    v5 = FIELD_F32(a1, 112);
    v7[0] = FIELD_F32(a1, 108);
    v7[1] = v5;
    v7[2] = 4500.0;
    sub_602A38A4(a1, v7);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98270);
  }
  else if ( FIELD_U8(a1, 22646) )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9820C);
  }
  result = *v2;
  if ( *v2 <= 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9818C);
  return result;
}
