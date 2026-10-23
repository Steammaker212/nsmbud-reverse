/* sub_60440688
 * address: 0x60440688   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60440688(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60C9CCB8;
  if ( !dword_60C9CCB8 )
  {
    v2 = operator_new_8DE2C8(0xE0u, a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60BFAC04;
    dword_60C9CCB4 = (int)v3;
    *(_DWORD *)v2 = off_60BFAC14;
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 44) = 0;
    FIELD_U32(v2, 48) = 0;
    FIELD_U32(v2, 52) = 0;
    FIELD_U32(v2, 96) = 0;
    FIELD_U32(v2, 100) = 0;
    FIELD_U32(v2, 104) = 0;
    FIELD_U32(v2, 148) = 0;
    FIELD_U32(v2, 152) = 0;
    FIELD_U32(v2, 156) = 0;
    sead__CriticalSection__ctor((sead_IDisposer *)(v2 + 188));
    dword_60C9CCB8 = v2;
  }
  return v2;
}
