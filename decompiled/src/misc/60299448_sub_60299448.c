/* sub_60299448
 * address: 0x60299448   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60299448(int a1, int a2)
{
  char v3; // r0
  _DWORD v5[5]; // [sp+0h] [bp-28h] BYREF
  char v6; // [sp+14h] [bp-14h]
  int v7; // [sp+18h] [bp-10h]
  char v8; // [sp+1Ch] [bp-Ch]

  FIELD_U8(a1, 6672) = 1;
  Enemy__vf15C(a1, a2);
  v3 = sub_602856EC((int *)(a1 + 6292), FIELD_U32(EnemyCounterMaybe_instance, 240));
  v5[0] = 1069547520;
  v5[1] = 1081711002;
  v5[2] = -1065353216;
  v5[3] = unk_60C906E8;
  v5[4] = &dword_60C8FD58;
  v6 = v3;
  v7 = 0;
  v8 = 4;
  return sub_602A852C(a1 + 6104, v5);
}
