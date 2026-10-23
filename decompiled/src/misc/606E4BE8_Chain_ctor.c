/* Chain_ctor
 * address: 0x606E4BE8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Chain_ctor(ActorBuildInfo *a1)
{
  int v2; // r8
  int v3; // r1

  v2 = operator_new(0xA08u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = &off_60C1F740;
  SwingingCollider_ctor((ColliderBase *)(v2 + 736));
  FIELD_U32(v2, 1168) = 0;
  FIELD_U32(v2, 1172) = 0;
  FIELD_U32(v2, 1176) = 32;
  FIELD_U32(v2, 1180) = 0x20000;
  FIELD_U32(v2, 1184) = 0x8000000;
  FIELD_U32(v2, 1188) = 0x80000;
  FIELD_U32(v2, 1192) = 0x800000;
  FIELD_U32(v2, 1196) = 0x400000;
  FIELD_U8(v2, 1200) = 0;
  v3 = v2 + 1268;
  do
  {
    *(_DWORD *)v3 = 0;
    FIELD_U32(v3, 4) = 0;
    FIELD_U32(v3, 8) = 32;
    FIELD_U32(v3, 12) = 0x20000;
    FIELD_U32(v3, 16) = 0x8000000;
    FIELD_U32(v3, 20) = 0x80000;
    FIELD_U32(v3, 24) = 0x800000;
    FIELD_U32(v3, 28) = 0x400000;
    FIELD_U8(v3, 32) = 0;
    v3 += 48;
  }
  while ( v3 != v2 + 2036 );
  memset((void *)(v2 + 2240), 0, 320);
  *(_DWORD *)v2 = &off_60C1F66C;
  FIELD_U32(v2, 716) = 0;
  return v2;
}
