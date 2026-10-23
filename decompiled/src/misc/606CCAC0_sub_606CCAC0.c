/* sub_606CCAC0
 * address: 0x606CCAC0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CCAC0(int a1, int a2)
{
  sub_606CA9C4(a1, a2);
  *(_DWORD *)a1 = off_60C1CCF8;
  memset((void *)(a1 + 6916), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 7064));
  FIELD_U32(a1, 7064) = off_60BC6E38;
  FIELD_U32(a1, 7080) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 7084));
  FIELD_U32(a1, 7084) = off_60BC6E38;
  FIELD_U32(a1, 7100) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 7104));
  FIELD_U32(a1, 7104) = off_60BC6E38;
  FIELD_U32(a1, 7120) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 7124));
  FIELD_U32(a1, 7124) = off_60BC6E38;
  memset((void *)(a1 + 7140), 0, 870);
  FIELD_U8(a1, 8012) = 0;
  FIELD_U32(a1, 8016) = 0;
  FIELD_U32(a1, 8020) = 0;
  return a1;
}
