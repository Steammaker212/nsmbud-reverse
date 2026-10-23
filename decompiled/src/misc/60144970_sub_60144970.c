/* sub_60144970
 * address: 0x60144970   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60144970(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int v6; // r7
  int v7; // r6
  float v8; // s16
  float v9; // s18
  float v10; // s20
  float v11; // s22
  char v12; // r12
  float v13; // s18
  float v14; // s16
  float v15; // s2
  int result; // r0
  float v17[12]; // [sp+0h] [bp-98h] BYREF
  _BYTE v18[12]; // [sp+30h] [bp-68h] BYREF
  float v19; // [sp+3Ch] [bp-5Ch]
  float v20; // [sp+4Ch] [bp-4Ch]

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 36);
  if ( ((unsigned int)&dword_60C88030 & ~(1611942296 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88030) )
  {
    dword_60C8802C = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C88030);
  }
  v6 = (**v5)(v5, &dword_60C8802C);
  if ( v6 )
    v6 = (int)v5;
  v7 = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(v6 + 6472) + 108))(**(_DWORD **)(v6 + 6472), 0, v18);
  v8 = FIELD_F32(v6, 108);
  v9 = FIELD_F32(v6, 112);
  v10 = v20 + 0.0;
  v11 = v19 + 0.0;
  if ( ((unsigned int)&dword_60C7B408 & ~(1611942472 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  v13 = v10 - v9;
  v14 = v11 - v8;
  if ( a2 )
  {
    v7 = (**a2)(a2, &dword_60C7B404);
    if ( v7 )
      v7 = (int)a2;
  }
  tongue_tip_ref_2(v7, v17);
  v15 = v17[7];
  *(float *)(FIELD_U32(a1, 36) + 108) = v17[3] - v14;
  result = FIELD_U32(a1, 36);
  FIELD_F32(result, 112) = v15 - v13;
  return result;
}
