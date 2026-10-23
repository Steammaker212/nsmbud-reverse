/* agl_WorkHeap_ref
 * address: 0x60968B88   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_WorkHeap_ref(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // r6
  _DWORD v8[3]; // [sp+1Ch] [bp-13Ch] BYREF
  _DWORD v9[16]; // [sp+28h] [bp-130h] BYREF
  int v10; // [sp+68h] [bp-F0h] BYREF

  v4 = a1;
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "agl__WorkHeap";
  a1[5] = sead__ExpHeap__create(a4, (int)v9, a2, 4, 1, 1);
  v4[15] = a3;
  v4[26] = 0;
  v4[27] = 0;
  v4[28] = 0;
  v4[29] = 0;
  v4[30] = 0;
  v4[31] = 0;
  v4[16] = operator_new_8DE2C8(0x158u, (int)a2, 4);
  agl_TextureData_ref((int)v9);
  sub_6091FDB0((int)v9, 1, 29, 32, 32, 1, 1, 0, 0, 1);
  v4 += 18;
  sub_60913D88((int)v4, v9[10], (int)a2, 0x2000, 8);
  sub_60913A6C(v8, (int)v4, 0);
  return sub_609175E4((int)&v10);
}
