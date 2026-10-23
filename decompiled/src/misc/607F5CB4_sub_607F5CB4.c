/* sub_607F5CB4
 * address: 0x607F5CB4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F5CB4(int a1)
{
  int v2; // r4
  sead_IDisposer *v3; // r0

  v2 = dword_60CC62E4;
  if ( !dword_60CC62E4 )
  {
    v2 = operator_new_8DE2C8(0x84u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60C2786C;
    dword_60CC62E0 = v2;
    v3 = sead_IDisposer_ctor((sead_IDisposer *)(v2 + 16));
    FIELD_U32(v2, 16) = off_60C26570;
    FIELD_U32(v2, 32) = 0;
    FIELD_U32(v2, 36) = 0;
    FIELD_U32(v2, 40) = v3;
    FIELD_U32(v2, 44) = 0;
    FIELD_U8(v2, 72) = 0;
    FIELD_U32(v2, 56) = v2;
    FIELD_U32(v2, 60) = sub_607F5DB8;
    FIELD_U32(v2, 64) = 0;
    FIELD_U32(v2, 52) = off_60C2787C;
    FIELD_U32(v2, 48) = v2 + 52;
    FIELD_U32(v2, 116) = 0;
    FIELD_U32(v2, 120) = 0;
    FIELD_U32(v2, 124) = 0;
    memset((void *)(v2 + 76), 0, 37);
    FIELD_U32(v2, 128) = 1;
    dword_60CC62E4 = v2;
  }
  return v2;
}
