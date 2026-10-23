/* sub_601B1144
 * address: 0x601B1144   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_601B1144(int a1, int a2, unsigned int a3)
{
  unsigned int v6; // r11
  unsigned int v7; // r0
  float *v8; // r6
  float v9; // r7
  float v10; // r5
  float v11; // r8
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r0
  ActorBuildInfo v17; // [sp+0h] [bp-68h] BYREF
  _DWORD v18[2]; // [sp+2Ch] [bp-3Ch] BYREF
  int v19; // [sp+34h] [bp-34h]
  int v20; // [sp+38h] [bp-30h]
  int v21; // [sp+3Ch] [bp-2Ch]
  int v22; // [sp+40h] [bp-28h]

  v6 = sub_6021EE50(3, a3);
  v7 = 0;
  if ( a3 < 5 )
    v7 = a3;
  *(_BYTE *)(a1 + 4 * v7 + 18) = 1;
  v8 = (float *)sub_601DFFE4(a2);
  v9 = v8[18];
  v10 = v8[19];
  v11 = v8[20];
  v12 = (_DWORD *)sub_60186FEC(dword_60CC6D78 + 984, 3u, a3);
  v13 = v12[3];
  v14 = v12[4];
  v22 = v12[5];
  v21 = v14;
  v20 = v13;
  v15 = *((_DWORD *)v8 + 24);
  v18[0] = 3;
  v18[1] = 0;
  v19 = v15;
  sub_60186FC0(dword_60CC6D78 + 984, 3u, a3, (int)v18);
  memset(&v17.settings2, 0, 40);
  v17.profile = Profile__get(v6);
  v17.settings1 = 1;
  v17.position.x = v9;
  v17.position.y = v10;
  v17.position.z = v11;
  v17.field_1C = 0;
  v17.eventId2 = 3;
  v17.field_20 = 0;
  v17.movementId = v19;
  v17.linkId = a3;
  return ActorMgr__create((void *)ActorMgr__instance, &v17, 0);
}
