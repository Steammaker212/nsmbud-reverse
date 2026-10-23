/* Actor_juniaDemo_manage_Tag_build
 * address: 0x600D250C   size: 400   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_juniaDemo_manage_Tag_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x18E0u);
  sub_600271A0((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BCB8F4;
  FIELD_U8(v2, 6122) = 0;
  FIELD_U16(v2, 6142) = 0;
  FIELD_U8(v2, 6140) = 0;
  FIELD_U32(v2, 6136) = 0;
  FIELD_U32(v2, 6132) = 0;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U32(v2, 6128) = 0;
  FIELD_U8(v2, 6144) = -1;
  FIELD_U32(v2, 6148) = 0;
  FIELD_U32(v2, 6152) = 0;
  FIELD_U32(v2, 6256) = 0;
  FIELD_U32(v2, 6252) = v2 + 6248;
  FIELD_U32(v2, 6248) = v2 + 6248;
  FIELD_U32(v2, 6260) = v2 + 6272;
  FIELD_U32(v2, 6272) = v2 + 6284;
  FIELD_U32(v2, 6284) = v2 + 6296;
  FIELD_U32(v2, 6296) = v2 + 6308;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6264) = v2 + 6272;
  FIELD_U32(v2, 6268) = 4;
  memset((void *)(v2 + 6156), 0, 36);
  memset((void *)(v2 + 6320), 0, 44);
  FIELD_U32(v2, 6204) = -1;
  FIELD_U32(v2, 6200) = -1;
  FIELD_U32(v2, 6196) = -1;
  FIELD_U32(v2, 6192) = -1;
  FIELD_U32(v2, 6228) = 0;
  FIELD_U32(v2, 6224) = 0;
  FIELD_U32(v2, 6220) = 0;
  FIELD_U32(v2, 6216) = 0;
  FIELD_U32(v2, 6212) = 0;
  FIELD_U32(v2, 6208) = 0;
  FIELD_U32(v2, 6232) = 2;
  FIELD_U32(v2, 6236) = 2;
  FIELD_U32(v2, 6240) = 2;
  FIELD_U32(v2, 6244) = 2;
  return v2;
}
