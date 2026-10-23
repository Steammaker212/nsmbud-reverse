/* sub_601B0DB0
 * address: 0x601B0DB0   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_601B0DB0(int a1, unsigned int a2)
{
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r0
  unsigned int v8; // r0
  int v9; // r7
  float *v10; // r0
  float v11; // r6
  float v12; // r11
  float v13; // r9
  int v14; // r0
  unsigned int v15; // r0
  ActorBuildInfo v17; // [sp+0h] [bp-80h] BYREF
  _DWORD v18[2]; // [sp+2Ch] [bp-54h] BYREF
  int v19; // [sp+34h] [bp-4Ch]
  _DWORD v20[3]; // [sp+38h] [bp-48h] BYREF
  _DWORD v21[15]; // [sp+44h] [bp-3Ch] BYREF

  v4 = (_DWORD *)sub_60186FEC(dword_60CC6D78 + 984, 3u, a2);
  v5 = v4[3];
  v6 = v4[4];
  v7 = v4[5];
  v20[0] = 3;
  v20[1] = 0;
  v20[2] = 0;
  v21[5] = v7;
  v21[4] = v6;
  v21[3] = v5;
  v18[0] = -1;
  v18[1] = -1;
  v19 = -1;
  sub_6021F6E0(dword_60C8D4EC, v18, v20, a2);
  v21[0] = 3;
  v21[1] = 0;
  v21[2] = v19;
  v8 = 0;
  if ( a2 < 5 )
    v8 = a2;
  v9 = a1 + 4 * v8;
  v10 = (float *)sub_601DFFE4(v18);
  v11 = v10[18];
  v12 = v10[19];
  v13 = v10[20];
  FIELD_U8(v9, 18) = 1;
  sub_60186FC0(dword_60CC6D78 + 984, 3u, a2, (int)v21);
  memset(&v17.settings2, 0, 40);
  v14 = 0;
  if ( a2 == 3 )
    v14 = 272;
  if ( a2 == 1 )
    v14 = 176;
  v17.settings1 = v14;
  v15 = sub_6021EE50(3, a2);
  v17.profile = Profile__get(v15);
  v17.position.x = v11;
  v17.position.y = v12;
  v17.position.z = v13;
  v17.field_1C = 0;
  v17.eventId2 = 3;
  v17.field_20 = 0;
  v17.linkId = a2;
  return ActorMgr__create((void *)ActorMgr__instance, &v17, 0);
}
