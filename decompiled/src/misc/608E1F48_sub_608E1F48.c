/* sub_608E1F48
 * address: 0x608E1F48   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E1F48(int a1, int a2, int a3, int a4, float a5, float a6)
{
  float v12; // s0
  int (__fastcall *v13)(int, int, _DWORD *, _DWORD *, int *, int *, _DWORD); // r4
  float v14; // s2
  _DWORD v16[2]; // [sp+Ch] [bp-44h] BYREF
  _DWORD v17[15]; // [sp+14h] [bp-3Ch] BYREF

  (*(void (__fastcall **)(int, float, float))(*(_DWORD *)a1 + 40))(a1, a5, a6);
  v12 = FIELD_F32(a4, 4);
  v13 = *(int (__fastcall **)(int, int, _DWORD *, _DWORD *, int *, int *, _DWORD))(*(_DWORD *)a1 + 40);
  v14 = FIELD_F32(a3, 4) - (float)(v12 * a5);
  v17[0] = *(_DWORD *)a3;
  *(float *)&v17[1] = v14;
  v17[2] = 0;
  v16[0] = *(_DWORD *)a4;
  *(float *)&v16[1] = (float)(a6 - a5) * v12;
  return v13(a1, a2, v17, v16, &dword_60B45CEC, &dword_60B45CEC, 0);
}
