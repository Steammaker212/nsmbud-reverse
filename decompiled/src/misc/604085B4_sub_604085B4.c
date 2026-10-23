/* sub_604085B4
 * address: 0x604085B4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604085B4(int a1)
{
  int v2; // r4

  v2 = dword_60C9A1F0;
  if ( !dword_60C9A1F0 )
  {
    v2 = operator_new_8DE2C8(0x19A4u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BF9AD8;
    dword_60C9A1EC = v2;
    Subject_HIOSubjectData_NX_exbin_ref((_DWORD *)(v2 + 16));
    FIELD_U8(v2, 6558) = 0;
    FIELD_U32(v2, 6472) = 0;
    FIELD_U8(v2, 6476) = 0;
    FIELD_U8(v2, 6479) = 0;
    FIELD_U8(v2, 6478) = 0;
    FIELD_U8(v2, 6481) = 0;
    FIELD_U8(v2, 6480) = 0;
    FIELD_U32(v2, 6484) = 10;
    FIELD_U32(v2, 6508) = 0;
    FIELD_U32(v2, 6504) = 0;
    FIELD_U32(v2, 6500) = 0;
    FIELD_U32(v2, 6496) = 0;
    FIELD_U32(v2, 6492) = 0;
    FIELD_U16(v2, 6512) = -1;
    FIELD_U8(v2, 6559) = 0;
    memset((void *)(v2 + 6514), 0, 0x2Cu);
    FIELD_U8(v2, 6560) = 2;
    FIELD_U8(v2, 6561) = 8;
    FIELD_U8(v2, 6562) = 0;
    dword_60C9A1F0 = v2;
  }
  return v2;
}
