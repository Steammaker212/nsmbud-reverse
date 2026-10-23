/* sub_603FE114
 * address: 0x603FE114   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FE114(int a1)
{
  FIELD_U8(a1, 12) = 0;
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 16));
  FIELD_U32(a1, 16) = off_60BF97A4;
  sub_6091ABEC(a1 + 32);
  agl_TextureData_ref(a1 + 376);
  sub_6083D230(a1 + 648);
  FIELD_U32(a1, 864) = 0;
  FIELD_U32(a1, 868) = 0;
  FIELD_U32(a1, 872) = 0;
  sub_6091AC40(a1 + 880);
  agl_TextureData_ref(a1 + 1224);
  sub_6083D230(a1 + 1496);
  FIELD_U32(a1, 1712) = 0;
  FIELD_U32(a1, 1716) = 0;
  FIELD_U32(a1, 1720) = 0;
  sub_60919E88(a1 + 1724);
  sub_6042BC2C(a1 + 1800);
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 2632));
  FIELD_U32(a1, 2632) = off_60BF97A4;
  sub_6091ABEC(a1 + 2648);
  agl_TextureData_ref(a1 + 2992);
  sub_6083D230(a1 + 3264);
  FIELD_U32(a1, 3480) = 0;
  FIELD_U32(a1, 3484) = 0;
  FIELD_U32(a1, 3488) = 0;
  sub_6091AC40(a1 + 3496);
  agl_TextureData_ref(a1 + 3840);
  sub_6083D230(a1 + 4112);
  FIELD_U32(a1, 4328) = 0;
  FIELD_U32(a1, 4332) = 0;
  FIELD_U32(a1, 4336) = 0;
  sub_60919E88(a1 + 4340);
  FIELD_U32(a1, 2624) = 0;
  FIELD_U32(a1, 4416) = 0;
  return a1;
}
