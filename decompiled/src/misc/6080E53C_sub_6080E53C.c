/* sub_6080E53C
 * address: 0x6080E53C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080E53C(int a1, int a2, _DWORD *a3)
{
  int v4; // r0
  __int64 v5; // r0
  unsigned __int64 *v6; // r2
  unsigned __int64 v7; // r4

  v4 = FIELD_U32(SoundSystem_instance, 64);
  if ( v4 )
  {
    LODWORD(v5) = FIELD_U8(v4, 205);
    if ( (_DWORD)v5 != 2 )
    {
      v5 = (__int64)(float)(FIELD_F32(dword_60CC6B0C, 108)
                          * (float)((float)((float)(a3[4] / (a3[3] * *a3) * *a3) * 1000.0) / (float)(int)a3[1]));
      v6 = (unsigned __int64 *)(a1 + 72);
      do
        v7 = __ldrexd(v6);
      while ( __strexd(v7 + v5, v6) );
    }
  }
  else
  {
    FIELD_U32(a1, 76) = 0;
    FIELD_U32(a1, 72) = 0;
    LODWORD(v5) = 0;
  }
  return v5;
}
