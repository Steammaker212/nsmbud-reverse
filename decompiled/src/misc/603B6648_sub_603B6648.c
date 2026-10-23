/* sub_603B6648
 * address: 0x603B6648   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B6648(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r0
  int v5; // r1
  int result; // r0
  int speed[7]; // [sp+4h] [bp-1Ch] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  ((void (__fastcall *)(int))loc_603B7478)(a1);
  v2 = FIELD_U32(a1, 80);
  speed[0] = 0x4000000;
  if ( moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2 ^ 1], speed) )
  {
    FIELD_U32(a1, 80) ^= 1u;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9818C);
  }
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
    v5 = FIELD_U32(a1, 112);
    speed[0] = FIELD_U32(a1, 108);
    speed[1] = v5;
    speed[2] = 1166843904;
    sub_602A38A4(a1, (float *)speed);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98270);
  }
  else
  {
    result = FIELD_U8(a1, 22646);
    if ( FIELD_U8(a1, 22646) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9820C);
  }
  return result;
}
