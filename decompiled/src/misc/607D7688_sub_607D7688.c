/* sub_607D7688
 * address: 0x607D7688   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7688(int a1, int a2, float32x2_t a3, float32x2_t a4)
{
  int v4; // r5
  int v5; // r0
  _DWORD *v6; // r4
  bool v7; // zf
  int v8; // r0
  float v10; // s18
  float v11; // s16
  float v12; // s0

  v6 = (_DWORD *)(a1 + 11368);
  v5 = FIELD_U32(a1, 11368);
  v7 = (FIELD_U8(v5, 196) & 0x20) == 0;
  if ( (FIELD_U8(v5, 196) & 0x20) != 0 )
  {
    v4 = FIELD_U32(v5, 32);
    v7 = v4 == -1;
  }
  if ( v7 )
  {
    v8 = (int)(v6 - 1);
    if ( a2 == 1 )
      return sub_60794954(v8, 0, 10.0, 0.0);
    else
      return PlayerBase_dispatchVirtual3(v8, 0, 0.0);
  }
  else
  {
    if ( a2 == 1 )
    {
      a3.n64_u32[0] = 0;
      a4.n64_u32[0] = dword_60CBFBC4[13 * v4 + 10];
      LODWORD(v10) = vmax_f32(a4, a3).n64_u32[0];
    }
    else
    {
      v10 = 0.0;
    }
    v11 = sub_6079321C(v5);
    v12 = (*(float (__fastcall **)(_DWORD, float))(*(_DWORD *)*v6 + 120))(*v6, v11);
    return (*(int (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v6 + 84))(*v6, v4, v11, v10, v12);
  }
}
