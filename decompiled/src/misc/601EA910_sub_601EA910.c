/* sub_601EA910
 * address: 0x601EA910   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601EA910()
{
  _DWORD *v0; // r4
  int v1; // r1
  ActorBuildInfo v3; // [sp+0h] [bp-98h] BYREF
  _DWORD v4[26]; // [sp+30h] [bp-68h] BYREF

  v4[0] = 0;
  memset(&v4[2], 0, 72);
  sub_601905DC(v4);
  v0 = sub_601DB42C();
  v1 = 98;
  if ( *v0 == FIELD_U32(dword_60CC6D78, 412) )
  {
    v1 = 98;
    if ( !FIELD_U32(dword_60CC6D78, 416) )
      v1 = 97;
  }
  v4[0] = v1;
  v4[1] = sub_601916C8(dword_60C8996C, v1);
  v4[4] = *(_DWORD *)(*(_DWORD *)sub_601693A0(901) + 8);
  memset(&v3, 0, sizeof(v3));
  v3.eventId2 = *v0;
  v3.eventId1 = v0[1];
  v3.field_20 = 0;
  v3.movementId = 0;
  v3.linkId = 1;
  memset(&v3.position, 0, sizeof(v3.position));
  v3.profile = Profile__get(0x388u);
  v4[5] = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v3, 0) + 2);
  return sub_60191160((_DWORD *)dword_60C8996C, v4);
}
