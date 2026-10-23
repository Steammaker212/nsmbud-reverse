/* Actor_rotate_buroku_oke_build
 * address: 0x606CC9E0   size: 216   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_buroku_oke_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1F58u);
  sub_606CA9C4(v2, a1);
  *(_DWORD *)v2 = off_60C1CCF8;
  memset((void *)(v2 + 6916), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 7064));
  FIELD_U32(v2, 7064) = off_60BC6E38;
  FIELD_U32(v2, 7080) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 7084));
  FIELD_U32(v2, 7084) = off_60BC6E38;
  FIELD_U32(v2, 7100) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 7104));
  FIELD_U32(v2, 7104) = off_60BC6E38;
  FIELD_U32(v2, 7120) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 7124));
  FIELD_U32(v2, 7124) = off_60BC6E38;
  memset((void *)(v2 + 7140), 0, 870);
  FIELD_U8(v2, 8012) = 0;
  FIELD_U32(v2, 8016) = 0;
  FIELD_U32(v2, 8020) = 0;
  return v2;
}
