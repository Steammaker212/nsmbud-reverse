/* sub_6037BE04
 * address: 0x6037BE04   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6037BE04(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r10
  int v4; // r9
  int v5; // r4
  int v6; // r7
  unsigned int v7; // r1
  int v8; // r0
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
  v2 = a1 + 1878;
  v3 = a1[1878];
  v4 = a1[1667];
  v5 = a1[20];
  v6 = FIELD_U8(dword_60CC6D8C, 17);
  memset(&v10[1], 0, 40);
  v7 = ((16 * v3) | (v5 << 8) | v4) & 0xFFFFEFFF;
  if ( !v6 )
    v7 = (16 * v3) | (v5 << 8) | v4 | 0x1000;
  v10[0] = v7;
  v10[3] = Profile__get(0x1DDu);
  v10[4] = *(v2 - 297);
  v10[5] = *(v2 - 296);
  v10[6] = *(v2 - 295);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v8 = a1[41] + v11[2 * *v2 + a1[20]];
  else
    v8 = a1[40];
  v10[7] = v8;
  LOBYTE(v10[8]) = 0;
  return sub_600080BC((_DWORD *)ActorMgr__instance, v10);
}
