/* sub_603B2DF4
 * address: 0x603B2DF4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603B2DF4(int a1, float *a2, unsigned int a3)
{
  float v6; // r0
  unsigned int v7; // r7
  _BYTE *result; // r0
  ActorBuildInfo v9; // [sp+4h] [bp-44h] BYREF

  memset(&v9.settings2, 0, 40);
  v9.settings1 = a3 | 0x100;
  v9.parentId = FIELD_U32(a1, 8);
  v9.profile = Profile__get(0x30Fu);
  v9.position.x = *a2;
  v9.position.y = a2[1];
  v6 = a2[2];
  v7 = 0;
  v9.position.z = v6;
  v9.field_20 = FIELD_U8(a1, 86);
  result = ActorMgr__create((void *)ActorMgr__instance, &v9, 0);
  if ( result )
  {
    result = *((_BYTE **)result + 2);
    if ( a3 < 0x10 )
      v7 = a3;
    *(_DWORD *)(a1 + 4 * v7 + 6352) = result;
  }
  return result;
}
