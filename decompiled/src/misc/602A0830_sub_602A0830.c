/* sub_602A0830
 * address: 0x602A0830   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A0830(int a1)
{
  _BYTE *v2; // r6
  int v3; // r7
  int v4; // r0
  int *v5; // r1
  ActorBuildInfo v7; // [sp+4h] [bp-44h] BYREF

  v2 = (_BYTE *)(a1 + 6128);
  v3 = FIELD_U8(a1, 6128);
  memset(&v7.settings2, 0, 36);
  v7.settings1 = FIELD_U32(a1, 20) & 0xFF0000 | v3;
  v7.profile = Profile__get(0x303u);
  v7.position = *(Vec3 *)(a1 + 108);
  v7.field_20 = 0;
  v7.eventId1 = 0;
  v7.eventId2 = 0;
  v7.field_28 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &v7, 0);
  *v2 = 0;
  v4 = FIELD_U32(a1, 6116);
  FIELD_U32(a1, 6116) = v4 - 1;
  if ( v4 <= 1 )
    v5 = &dword_60C90298;
  else
    v5 = &dword_60C902D8;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v5);
}
