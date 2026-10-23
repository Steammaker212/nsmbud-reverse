/* sub_60690CB8
 * address: 0x60690CB8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60690CB8(int a1, int a2)
{
  int **v4; // r4
  void (__fastcall ***v5)(_DWORD, _DWORD, _DWORD *, int *, int); // r0
  int v7; // [sp+4h] [bp-24h] BYREF
  _DWORD v8[8]; // [sp+8h] [bp-20h] BYREF

  v4 = *(int ***)(a1 + 12);
  Animation_update(*v4[5]);
  v5 = *(void (__fastcall ****)(_DWORD, _DWORD, _DWORD *, int *, int))(a1 + 16);
  v8[0] = 1065353216;
  v8[1] = 1065353216;
  v7 = 0;
  (**v5)(v5, 0, v8, &v7, a1 + 20);
  (*(void (__fastcall **)(int *, int))(**v4 + 60))(*v4, a2);
  return ModelWrapper_updateModel((ModelWrapper *)v4);
}
