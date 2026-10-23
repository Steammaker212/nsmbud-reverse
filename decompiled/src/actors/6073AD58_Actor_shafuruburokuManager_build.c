/* Actor_shafuruburokuManager_build
 * address: 0x6073AD58   size: 472   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_shafuruburokuManager_build(ActorBuildInfo *a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = operator_new(0x1870u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C22B58;
  FIELD_U16(v2, 6108) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U8(v2, 6110) = 1;
  FIELD_U32(v2, 6252) = 0;
  FIELD_U32(v2, 6248) = 0;
  FIELD_U32(v2, 6244) = 0;
  FIELD_U32(v2, 6240) = 0;
  FIELD_U32(v2, 6236) = 0;
  FIELD_U8(v2, 6120) = 0;
  FIELD_U8(v2, 6116) = 0;
  FIELD_U8(v2, 6112) = 0;
  FIELD_U8(v2, 6124) = 0;
  FIELD_U8(v2, 6123) = 0;
  FIELD_U8(v2, 6126) = 0;
  FIELD_U8(v2, 6125) = 0;
  FIELD_U8(v2, 6119) = 0;
  FIELD_U8(v2, 6122) = 0;
  FIELD_U8(v2, 6121) = 0;
  FIELD_U8(v2, 6115) = 0;
  FIELD_U8(v2, 6118) = 0;
  FIELD_U8(v2, 6117) = 0;
  FIELD_U8(v2, 6111) = 0;
  FIELD_U8(v2, 6114) = 0;
  FIELD_U8(v2, 6113) = 0;
  FIELD_U8(v2, 6138) = 0;
  FIELD_U16(v2, 6136) = 0;
  FIELD_U32(v2, 6132) = 0;
  FIELD_U32(v2, 6128) = 0;
  memset((void *)(v2 + 6140), 0, 70);
  FIELD_U8(v2, 6211) = 24;
  FIELD_U8(v2, 6214) = 24;
  FIELD_U8(v2, 6210) = 24;
  FIELD_U8(v2, 6213) = 24;
  FIELD_U8(v2, 6212) = 24;
  FIELD_U32(v2, 6216) = 24;
  FIELD_U32(v2, 6220) = 24;
  FIELD_U32(v2, 6224) = 24;
  FIELD_U32(v2, 6228) = 24;
  FIELD_U32(v2, 6232) = 24;
  v3 = (_DWORD *)sub_608DE334(0x28u, 0, 4);
  if ( v3 )
  {
    FIELD_U32(v2, 6248) = v3;
    *v3 = v3 + 1;
    v3[1] = v3 + 2;
    v3[2] = v3 + 3;
    v3[3] = v3 + 4;
    v3[4] = 0;
    FIELD_U32(v2, 6252) = v3;
    sub_608DEB0C((_DWORD *)(v2 + 6236), 5, (int)(v3 + 5));
  }
  return v2;
}
