/* Actor_tree_2_build
 * address: 0x606B9208   size: 380   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_tree_2_build(ActorBuildInfo *a1)
{
  int v2; // r4
  _DWORD *v3; // r0
  int v4; // r1

  v2 = operator_new(0x11A00u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1B330;
  FIELD_U32(v2, 6104) = &off_60C1B31C;
  FIELD_U32(v2, 6108) = v2;
  FIELD_U8(v2, 6140) = 0;
  FIELD_U32(v2, 6136) = 0;
  FIELD_U32(v2, 6132) = 0;
  FIELD_U32(v2, 6128) = 0;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U32(v2, 6144) = &off_60BE27A8;
  FIELD_U32(v2, 6148) = &off_60BE27B8;
  FIELD_U32(v2, 6152) = &off_60BE27DC;
  FIELD_U32(v2, 6156) = v2 + 6144;
  FIELD_U32(v2, 6160) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 6164), (StateExecuter *)(v2 + 6148), &NullState);
  FIELD_U32(v2, 6144) = &off_60BE2798;
  memset((void *)(v2 + 6180), 0, 66);
  FIELD_U32(v2, 6248) = 0;
  FIELD_U32(v2, 6252) = 0;
  memset((void *)(v2 + 72024), 0, 168);
  v3 = (_DWORD *)(v2 + 72032);
  v4 = 0;
  do
  {
    *(_DWORD *)(v2 + 71800 + 4 * v4++) = 0;
    *(v3 - 44) = 0;
    *(v3 - 43) = 0;
    *(v3 - 42) = 0;
    *(v3 - 2) = 0;
    *(v3 - 1) = 0;
    *v3 = 0;
    v3 += 3;
  }
  while ( v4 != 13 );
  memset((void *)(v2 + 6256), 0, 0x10000);
  return v2;
}
