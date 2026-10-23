/* sub_6021FDA8
 * address: 0x6021FDA8   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6021FDA8(int a1, unsigned int a2)
{
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r7
  _BYTE *result; // r0
  _BYTE *v9; // r6
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  ActorBuildInfo v13; // [sp+0h] [bp-60h] BYREF
  _DWORD v14[2]; // [sp+30h] [bp-30h] BYREF
  int v15; // [sp+38h] [bp-28h]
  int v16; // [sp+3Ch] [bp-24h]
  int v17; // [sp+40h] [bp-20h]
  int v18; // [sp+44h] [bp-1Ch]

  v4 = (_DWORD *)sub_60186FEC(dword_60CC6D78 + 984, 6u, a2);
  v14[0] = *v4;
  v14[1] = v4[1];
  v15 = v4[2];
  v5 = v4[3];
  v6 = v4[4];
  v18 = v4[5];
  v17 = v6;
  v16 = v5;
  v7 = v5;
  result = (_BYTE *)sub_6021EE50(6, a2);
  v9 = result;
  if ( !v7 )
  {
    memset(&v13, 0, sizeof(v13));
    v10 = 0;
    if ( FIELD_U8(a1, 57) )
    {
      FIELD_U8(a1, 57) = 0;
      v10 = 1;
    }
    if ( v9 == (_BYTE *)890 )
    {
      v11 = FIELD_U8(dword_60CC6D78, 2091);
      v10 |= v11 << 12;
      FIELD_U8(a1, 60) = v11;
    }
    v13.settings1 = v10;
    v12 = sub_6021EE50(6, a2);
    v13.profile = Profile__get(v12);
    v13.position = *(Vec3 *)sub_601E0040((int)v14);
    v13.field_1C = 0;
    v13.eventId2 = 6;
    v13.field_20 = 0;
    v13.movementId = v15;
    v13.linkId = a2;
    return ActorMgr__create((void *)ActorMgr__instance, &v13, 0);
  }
  return result;
}
