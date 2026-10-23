/* Actor_shafuruburoku_build
 * address: 0x60737340   size: 324   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_shafuruburoku_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1DD8u);
  BlockBase__ctor(v2, a1);
  *(_DWORD *)v2 = &off_60C22960;
  FIELD_U8(v2, 7392) = 0;
  FIELD_U16(v2, 7404) = 0;
  FIELD_U32(v2, 7408) = 0;
  FIELD_U8(v2, 7412) = 0;
  FIELD_U8(v2, 7402) = 0;
  FIELD_U32(v2, 7396) = 0;
  FIELD_U16(v2, 7400) = 0;
  FIELD_U16(v2, 7424) = 0;
  FIELD_U32(v2, 7420) = 0;
  FIELD_U32(v2, 7416) = 0;
  memset((void *)(v2 + 7428), 0, 34);
  Actor_shafuruburoku_build_helper(v2 + 7464, 4, 1, 200.0);
  Actor_shafuruburoku_build_helper(v2 + 7524, 4, 1, 200.0);
  FIELD_U32(v2, 7584) = 0;
  FIELD_U32(v2, 7588) = 0;
  FIELD_U32(v2, 7592) = 0;
  FIELD_U32(v2, 7596) = 1;
  FIELD_U32(v2, 7624) = 0;
  FIELD_U32(v2, 7628) = 0;
  FIELD_U32(v2, 7632) = 0;
  FIELD_U8(v2, 7620) = 0;
  FIELD_U32(v2, 7616) = 0;
  FIELD_U32(v2, 7612) = 0;
  FIELD_U32(v2, 7608) = 0;
  FIELD_U32(v2, 7604) = 0;
  FIELD_U32(v2, 7600) = 0;
  return v2;
}
