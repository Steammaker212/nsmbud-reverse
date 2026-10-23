/* sub_60478344
 * address: 0x60478344   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478344(int a1)
{
  int result; // r0
  float *v3; // r0
  int v4; // s0
  float v5; // r1
  int v6; // r1

  result = FIELD_U8(a1, 8);
  if ( (result & 0x10) != 0 )
  {
    v3 = *(float **)(a1 + 128);
    if ( *((_BYTE *)v3 + 20) || (v3 = *(float **)(a1 + 132), *((_BYTE *)v3 + 20)) )
    {
      v4 = (int)(float)(v3[11] * 10.0);
      if ( v4 )
      {
        v5 = *v3;
        if ( v4 < 1 )
          (*(void (__fastcall **)(float))(LODWORD(v5) + 104))(*(float *)&v4);
        else
          (*(void (__fastcall **)(float))(LODWORD(v5) + 108))(*(float *)&v4);
      }
    }
    v6 = FIELD_U32(a1, 120);
    if ( v6 )
    {
      sub_60477B30((_DWORD *)a1, v6);
      (*(void (__fastcall **)(_DWORD, _DWORD, float))(**(_DWORD **)(a1 + 120) + 92))(FIELD_U32(a1, 120), 0, 1.0);
      *(_DWORD *)(FIELD_U32(a1, 120) + 16) = 0;
    }
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 40))(a1, 0);
  }
  return result;
}
