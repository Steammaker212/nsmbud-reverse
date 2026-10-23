/* sub_602FD358
 * address: 0x602FD358   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602FD358(int a1, int a2)
{
  int v4; // r9
  int v5; // r10
  int v6; // r0
  int v7; // r6
  int v8; // r7
  _DWORD v10[11]; // [sp+4h] [bp-6Ch] BYREF
  _DWORD v11[16]; // [sp+30h] [bp-40h] BYREF

  v11[0] = -536870912;
  v11[1] = -1610612736;
  v11[2] = 0x20000000;
  v11[3] = 1610612736;
  v11[4] = -238609294;
  v11[5] = -1908874354;
  v11[6] = 238609294;
  v11[7] = 1908874353;
  v4 = FIELD_U32(a1, 164);
  v5 = v11[2 * a2 + FIELD_U32(a1, 80)];
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 704))(a1);
  v7 = FIELD_U32(a1, 80);
  v8 = v6;
  memset(&v10[1], 0, 40);
  v10[0] = (16 * a2) | (v8 << 20) | (v7 << 8) | 4;
  v10[3] = Profile__get(0x1DDu);
  v10[4] = FIELD_U32(a1, 8456);
  v10[5] = FIELD_U32(a1, 8460);
  v10[6] = FIELD_U32(a1, 8464);
  v10[7] = v4 + v5;
  LOBYTE(v10[8]) = FIELD_U8(a1, 86);
  return sub_600080BC((_DWORD *)ActorMgr__instance, v10);
}
