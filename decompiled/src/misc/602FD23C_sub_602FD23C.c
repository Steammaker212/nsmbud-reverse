/* sub_602FD23C
 * address: 0x602FD23C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602FD23C(int a1, int a2)
{
  int v4; // r7
  int v5; // r9
  int v6; // r5
  _BYTE *result; // r0
  ActorBuildInfo v8; // [sp+4h] [bp-6Ch] BYREF
  _DWORD v9[16]; // [sp+30h] [bp-40h] BYREF

  v9[0] = -536870912;
  v9[1] = -1610612736;
  v9[2] = 0x20000000;
  v9[3] = 1610612736;
  v9[4] = -238609294;
  v9[5] = -1908874354;
  v9[6] = 238609294;
  v9[7] = 1908874353;
  v4 = FIELD_U32(a1, 80);
  v5 = FIELD_U32(a1, 164);
  v6 = v9[2 * a2 + v4];
  memset(&v8.settings2, 0, 40);
  v8.settings1 = (16 * a2) | (v4 << 8) | 4;
  v8.profile = Profile__get(0x1DBu);
  v8.position = *(Vec3 *)(a1 + 8456);
  v8.field_1C = v5 + v6;
  v8.field_20 = FIELD_U8(a1, 86);
  result = ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  if ( result )
    *((_DWORD *)result + 1685) = FIELD_U32(a1, 8);
  return result;
}
