/* sub_600E8920
 * address: 0x600E8920   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E8920(int a1)
{
  char v2; // r12
  int result; // r0
  int v4; // s2
  int v5; // r6
  int v6; // r8
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
  FIELD_F64(a1, 7140) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1152))(a1);
  result = a1 + 7148;
  FIELD_U32(a1, 7148) = v4;
  v5 = FIELD_U32(a1, 36);
  if ( v5 != a1 + 32 )
  {
    v6 = FIELD_U32(a1, 44);
    v7 = (_DWORD *)(v5 - v6);
    do
    {
      if ( ((unsigned int)dword_60C81F18 & ~(1611565536 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
      {
        dword_60C81F14 = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C81F18);
      }
      v8 = (*(int (__fastcall **)(_DWORD *, int *))*v7)(v7, &dword_60C81F14);
      if ( v7 && v8 == 1 && !(*(int (__fastcall **)(_DWORD *))(*v7 + 232))(v7) )
      {
        v9 = FIELD_U32(a1, 7144);
        v10 = FIELD_U32(a1, 7148);
        v7[27] = FIELD_U32(a1, 7140);
        v7[28] = v9;
        v7[29] = v10;
        (*(void (__fastcall **)(_DWORD *, _DWORD))(*v7 + 228))(v7, FIELD_U8(a1, 7124));
      }
      v5 = FIELD_U32(v5, 4);
      v7 = (_DWORD *)(v5 - v6);
      result = a1 + 32 - FIELD_U32(a1, 44);
    }
    while ( v5 - v6 != result );
  }
  return result;
}
