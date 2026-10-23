/* sub_60630B60
 * address: 0x60630B60   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60630B60(int a1, float a2, float a3, float a4)
{
  _DWORD **v4; // r4
  void (__fastcall ***v5)(_DWORD, _DWORD, _DWORD *, int *, int *); // r0
  void (__fastcall *v6)(_DWORD, _DWORD, _DWORD *, int *, int *); // r5
  _DWORD v8[2]; // [sp+8h] [bp-28h] BYREF
  float v9[3]; // [sp+10h] [bp-20h] BYREF
  int v10; // [sp+1Ch] [bp-14h] BYREF

  v9[1] = a2;
  v9[2] = a2;
  v9[0] = (float)(a3 / a4) * a2;
  if ( v9[0] >= 0.0 )
  {
    v4 = (_DWORD **)(a1 + 4);
  }
  else
  {
    v9[0] = 1.0;
    v4 = (_DWORD **)(a1 + 4);
    v5 = (void (__fastcall ***)(_DWORD, _DWORD, _DWORD *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 4) + 132))(
                                                                          **(_DWORD **)(a1 + 4),
                                                                          0);
    v8[0] = 1065353216;
    v8[1] = 1065353216;
    v6 = **v5;
    v10 = 0;
    v6(v5, 0, v8, &v10, &dword_60B3B944);
  }
  return (*(int (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v4 + 68))(**v4, v9);
}
