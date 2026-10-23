/* sub_6017A6F8
 * address: 0x6017A6F8   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6017A6F8(int a1)
{
  int v2; // r7
  int v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r6
  int v8; // r0
  int v9; // r1
  bool v10; // zf
  int v11; // r0
  char v12; // r5
  _BYTE *result; // r0
  int v14; // r0
  bool v15; // zf
  char v16; // r7
  ActorBuildInfo v17; // [sp+0h] [bp-50h] BYREF
  _DWORD v18[9]; // [sp+2Ch] [bp-24h] BYREF

  v3 = FIELD_U32(dword_60CC6D78, 416);
  v4 = FIELD_U32(dword_60CC6D78, 420);
  v18[0] = FIELD_U32(dword_60CC6D78, 412);
  v2 = v18[0];
  v18[1] = v3;
  v18[2] = v4;
  v5 = sub_601E028C(v18);
  sub_6019A120(v5);
  v7 = sub_601A7618(a1, v6);
  v8 = sub_601E028C(v18);
  v9 = FIELD_U32(a1, 240);
  v10 = v2 == v9;
  if ( v2 == v9 )
    v10 = v8 == FIELD_U32(a1, 252);
  if ( !v10 )
    goto LABEL_4;
  v14 = FIELD_U32(dword_60CC6D78, 32);
  v15 = v14 == 1;
  if ( v14 != 1 )
    v15 = v14 == 5;
  if ( v15 )
  {
LABEL_4:
    v11 = sub_601A763C(a1);
    v12 = v11;
    if ( v11 )
      v12 = 2;
  }
  else if ( v14 == 2 )
  {
    if ( v7 - 2 >= 6 )
    {
      v12 = 0;
      if ( sub_601A763C(a1) )
        v12 = 2;
    }
    else
    {
      v12 = 0;
      if ( ((0x33u >> ((v7 - 2) & 0x3F)) & 1) != 0 )
        v12 = 2;
    }
  }
  else
  {
    v12 = 1;
    if ( v7 <= 9 )
    {
      v16 = 1;
      if ( ((1 << v7) & 0x3CC) != 0 )
      {
        if ( sub_601A763C(a1) )
          v16 = 2;
        v12 = v16;
      }
    }
  }
  memset(&v17, 0, sizeof(v17));
  v17.eventId2 = FIELD_U32(a1, 240);
  v17.field_20 = FIELD_U32(a1, 244);
  v17.position = *(Vec3 *)(a1 + 80);
  v17.movementId = FIELD_U32(a1, 248);
  v17.linkId = v12;
  v17.profile = Profile__get(0x373u);
  result = ActorMgr__create((void *)ActorMgr__instance, &v17, 0);
  FIELD_U32(a1, 256) = result;
  return result;
}
