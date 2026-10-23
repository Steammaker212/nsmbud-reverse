/* sub_60301AF4
 * address: 0x60301AF4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60301AF4(int a1, int a2)
{
  char v3; // r0
  _DWORD v5[5]; // [sp+0h] [bp-28h] BYREF
  char v6; // [sp+14h] [bp-14h]
  int v7; // [sp+18h] [bp-10h]
  char v8; // [sp+1Ch] [bp-Ch]

  Enemy__vf15C(a1, a2);
  v3 = sub_602856EC((int *)(a1 + 6292), FIELD_U32(EnemyCounterMaybe_instance, 240));
  v5[0] = 0;
  v5[1] = 0;
  v5[2] = -1065353216;
  v5[3] = unk_60C906E8;
  v5[4] = &dword_60C92C60;
  v6 = v3;
  v7 = FIELD_U32(a1, 80);
  v8 = 4;
  return sub_602A852C(a1 + 6104, v5);
}
